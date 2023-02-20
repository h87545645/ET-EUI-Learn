using DG.Tweening;
using TMPro;
using UnityEngine;

namespace ET.Client
{
    [FriendOf(typeof(DialogCompoent))]
    [FriendOf(typeof(NumericComponent))]
    public static class DialogCompoentSystem
    {
        [ObjectSystem]
        public class FrogComponentAwakeSystem : AwakeSystem<DialogCompoent>
        {
            protected override void Awake(DialogCompoent self)
            {
                self.Awake();
            }
        }
        
        [ObjectSystem]
        public class FrogComponentUpdateSystem : UpdateSystem<DialogCompoent>
        {
            protected override void Update(DialogCompoent self)
            {
                self.Update();
            }
        }
        
        public static void Awake(this DialogCompoent self)
        {
            // self.speed = self.Parent.GetComponent<NumericComponent>().GetAsFloat(NumericType.DialogSpeed);
            if (self.dialogGo == null)
            {
                if (Application.platform == RuntimePlatform.WebGLPlayer)
                {
                    // PrefabLoadMgr.I.LoadAsync("dialogprefab", (string name, GameObject obj) =>
                    // {
                    //     dialogGo = obj;
                    //     text = dialogGo.GetComponentInChildren<TextMeshProUGUI>();
                    //     dialoImage = dialogGo.transform.GetChild(0).Find("Image");
                    //     _originScale = new Vector3(1/transform.localScale.x,1/transform.localScale.y,1/transform.localScale.z);
                    //     dialoImage.localScale = _originScale;
                    //     dialogGo.SetActive(false);
                    // } ,transform);
         
                }
                else
                {
                    // dialogGo = PrefabLoadMgr.I.LoadSync("dialogprefab", transform);
                    // text = dialogGo.GetComponentInChildren<TextMeshProUGUI>();
                    // dialoImage = dialogGo.transform.GetChild(0).Find("Image");
                    // _originScale = new Vector3(1/transform.localScale.x,1/transform.localScale.y,1/transform.localScale.z);
                    // dialoImage.localScale = _originScale;
                    // dialogGo.SetActive(false);
                }
          
            }
        }

        public static void Update(this DialogCompoent self)
        {
            if (self.isSpeaking)
            {
                self.ShowText().Coroutine();
            }
        }
        
        private static string GetNstring(string str)
        {
            string result = "";
            int point = 0;
            for (int i = 0; i < str.Length; i++)
            {
                if (point == 20)
                {              
                    result += '\n';
                    point = 0;
                }
                result += str[i];
                point++;
            }     
            return result;
        }

        public static void Speak(this DialogCompoent self,string sentence)
        {
            self._sentenceQueue.Enqueue(GetNstring(sentence));

            if (!self._isDialogShowing)
            
            {
                self._isDialogShowing = true;
                self._currentSentence = self._sentenceQueue.Dequeue();
                self.dialogGo.SetActive(true);
                self.dialoImage.localScale = new Vector3(0, 0, 0);
                self.dialoImage.DOScale(self._originScale,0.5f);
                self.isSpeaking = true;
                // InvokeRepeating("ShowText", 0, /*Time.deltaTime **/ 0.01f);
            }
        }
        
        private static async ETTask ShowText(this DialogCompoent self)
        {
   
            if (self._curSentenceCnt < self._currentSentence.Length)
            {
                self._curSentenceCnt += Time.deltaTime * self.speed;    //ÿ�ε������Ӽ���.

                //m_LogingTextΪ ��Ҫ��ʾ��Text�ı�������.
                self.text.text = self._currentSentence.Substring(0, (int)self._curSentenceCnt);
            }
            else
            {
                self._curInterval ++;
                if (self._curInterval >= self.DialogInterval)
                {
                    self._curSentenceCnt = 0;
                    self._curInterval = 0;
                    if (self._sentenceQueue.Count > 0)
                    {
                        self._currentSentence = self._sentenceQueue.Dequeue();
                    }
                    else
                    {
                        //ֹͣInvoke���÷���.
                    
                    
                        self.dialoImage.DOScale(0, 0.2f);
                        self.HideDialog().Coroutine();
                        // StartCoroutine(UnityUtils.DelayFuc(() =>
                        // {
                        //     if (!_isDialogShowing)
                        //     {
                        //         self.dialogGo.SetActive(false);
                        //     }
                        // }, 0.2f));
                        self._isDialogShowing = false;
                        // self.CancelInvoke();
                        self.isSpeaking = false;
                        self.FinishedDialog();
                    }
                }
     
            }
        }

        public static async ETTask HideDialog(this DialogCompoent self)
        {
             await TimerComponent.Instance.WaitAsync(200);
             self.dialogGo.SetActive(false);
        }
        
        public static void FinishedDialog(this DialogCompoent self)
        {
        
        }
    }
}

