using System;
using DG.Tweening;
using UnityEngine;
using Random = System.Random;

namespace ET.Client
{
    [FriendOf(typeof(PelicanComponent))]
    public static class PelicanComponentSystem
    {
        [ObjectSystem]
        public class PelicanComponentAwakeSystem : AwakeSystem<PelicanComponent>
        {
            protected override void Awake(PelicanComponent self)
            {
                // self.Awake();
            }
            
        }
        
        public static void OnBecameVisible(this PelicanComponent self)
        {
            self.isVisible = true;
        }

        private static void OnBecameInvisible(this PelicanComponent self)
        {
            self.isVisible = false;
        }
        
        public static Vector3 GetNearestPos(this PelicanComponent self, Transform target)
        {
            float minDis = int.MaxValue;
            int idx = 0;
            for (int i = 0; i < self.standPos.childCount; i++)
            {
                float dis = Vector3.Distance(target.position,self.standPos.GetChild(i).position);
                if (minDis > dis)
                {
                    idx = i;
                    minDis = dis;
                }
            }

            Transform finalPos;
            Transform area = self.standPos.GetChild(idx);
            if (area.childCount > 1)
            {
                Random rd = new Random();
                int finalIdx = rd.Next(area.childCount) % 10;
                finalPos = area.GetChild(Math.Clamp(finalIdx,0,area.childCount-1));
            }
            else
            {
                finalPos = area.GetChild(0);
            }
            // UnityUtils.GetRelativePosition(target,finalPos.position);
            return finalPos.position;
        }

      
        public static void Speak(this PelicanComponent self, string sentence)
        {
            self.animController.Speak();
            self.dialogCompoent.Speak(sentence);
        }
        
        public static void FinishedDialog(this PelicanComponent self)
        {
            self.animController.FinishSpeak();
            self.dialogCompoent.FinishedDialog();
            if (_calllback != null)
            {
                _calllback();
                _calllback = null;
            }
        }

        public static void RandomSpeak(this PelicanComponent self)
        {
            Random rd = new Random();
            int randomIndex = rd.Next(20);
            // string text = GameMgr.GetInstance().langMgr.getValue("^game_random"+randomIndex);
            // self.slefSpeak(text);
        }
        
        public static void GuideSpeak(this PelicanComponent self,Action callback)
        {

            try
            {
                _calllback = callback;
                for (int i = 1; i <= 3; i++)
                {
                    string str = GameMgr.GetInstance().langMgr.getValue("^game_guide"+i);
                    Speak(self,str);
                }
            }
            catch (Exception e)
            {
                Console.WriteLine(e);
                throw;
            }
   
        }
        
        public static void LookAt(this PelicanComponent self,Vector3 pos)
        {
            self.pelicanRenderer.flipX = pos.x < self.transform.position.x ? true : false;
        }
    
        public static async ETTask FlyTo(this PelicanComponent self,Vector3 pos , Action action = null)
        {
            self.isFlying = true;
            LookAt(self,pos);
            float dis = Vector3.Distance(pos,self.transform.position);
            long time = (long)(dis / self.flySpeed);
            self.animController.Fly();
            self.transform.DOMove(pos,time);
            await TimerComponent.Instance.WaitAsync(time);
            animController.FlyEnd();
            self.isFlying = false;
            if (action != null)
            {
                action();
            }
        }

        public static void FlyToPlayer(this PelicanComponent self,Transform target, Action action = null)
        {
            Vector3 nearPos = GetNearestPos(self,target);
            if (self.isFlying)
            {
                self.transform.DOKill();
            }
            self.FlyTo(nearPos, action).Coroutine();
        }
        
    }
}

