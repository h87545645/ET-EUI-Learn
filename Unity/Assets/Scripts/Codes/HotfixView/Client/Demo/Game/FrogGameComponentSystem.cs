using UnityEngine;
using System;
namespace ET.Client
{
    [FriendOf(typeof(FrogGameComponent))]
    [FriendOf(typeof(I18NComponent))]
    public static class FrogGameComponentSystem
    {
        [ObjectSystem]
        public class PelicanComponentAwakeSystem : AwakeSystem<FrogGameComponent>
        {
            protected override void Awake(FrogGameComponent self)
            {
                // self.Awake();
            }
            
        }
        
        
        
        
        
        public static async ETTask OnCameraMove(this FrogGameComponent self, int index)
        {
            // _curLevelTime = 0;
            // _levelLongStay = false;
            if (self._isCompleted)
            {
                return;
            }
            await TimerComponent.Instance.WaitAsync(5000); 
            if ( !self.pelican.isVisible && !self._isCompleted)
            {
                self.pelican.FlyToPlayer(self.fragHero.heroRigidbody2D.transform);
            }
            // StartCoroutine(UnityUtils.DelayFuc(() =>
            // {
            //     if ( !pelican.isVisible && !_isCompleted)
            //     {
            //         pelican.FlyToPlayer(fragHero.heroRigidbody2D.transform);
            //     }
            // }, 5));

       
            switch (index)
            {
                case 6:
                {
                    self.fragHero.OnLight(true);
                    self.globalLight.intensity = 0.2f;
                    break;
                }
                case 7:
                {
                    self.globalLight.intensity = 0f;
                    break;
                }
                case 8:
                {
                    self.globalLight.intensity = 0.5f;
                    break;
                }
                default:
                {
                    self.fragHero.OnLight(false);
                    break;
                }
            }
        }
        
        
        public static async ETTask OnPlayerCompleted(this FrogGameComponent self)
        {
            if (!self._isCompleted)
            {
                self.inputCtrl.EnableInput(false);
                self.FragGameRecord.GetInstance().history.jumpCnt = self.FragGameRecord.GetInstance().reocrd.jumpCnt;
                self.FragGameRecord.GetInstance().history.playerTotalTime =  self.FragGameRecord.GetInstance().reocrd.playerTotalTime;
                self._isCompleted = true;
                self.fragHero.RemoveListener();
                self.pelican.FlyToPlayer(self.fragHero.heroRigidbody2D.transform);
            }
        }

        public static async ETTask OnPelicanFlyToPlayer(this FrogGameComponent self)
        {
            self.pelican.Speak(self.DomainScene().GetComponent<I18NComponent>().langMgr.getValue("^game_completed_speak"));
            await TimerComponent.Instance.WaitAsync(3000); 
            self.completedPanel.OnFadeIn();
            // StartCoroutine(UnityUtils.DelayFuc(() =>
            // {
            //     completedPanel.OnFadeIn();
            // },3));
        }
    }
}

