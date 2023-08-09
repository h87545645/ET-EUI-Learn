using UnityEngine;
using System;
using UnityEngine.Rendering.Universal;

namespace ET.Client
{
    [FriendOf(typeof(FrogGameComponent))]
    [FriendOf(typeof(I18NComponent))]
    [FriendOf(typeof(PelicanComponent))]
    [FriendOf(typeof(UnitComponent))]
    [FriendOf(typeof(FrogComponent))]
    [FriendOf(typeof(DialogCompoent))]
    public static class FrogGameComponentSystem
    {
        [ObjectSystem]
        public class FrogGameComponentAwakeSystem : AwakeSystem<FrogGameComponent>
        {
            protected override void Awake(FrogGameComponent self)
            {
                self.globalLight = GameObject.FindWithTag("FrogLight").GetComponent<Light2D>();
                
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
       
          
            // StartCoroutine(UnityUtils.DelayFuc(() =>
            // {
            //     if ( !pelican.isVisible && !_isCompleted)
            //     {
            //         pelican.FlyToPlayer(fragHero.heroRigidbody2D.transform);
            //     }
            // }, 5));

            Unit player = UnitHelper.GetMyUnitFromCurrentScene(self.DomainScene());
            switch (index)
            {
                case 6:
                {
                    player.GetComponent<FrogComponent>().OnLight(true);
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
                    player.GetComponent<FrogComponent>().OnLight(false);
                    break;
                }
            }
            
            await TimerComponent.Instance.WaitAsync(5000); 
            UnitComponent unitcomp =  self.DomainScene().GetComponent<UnitComponent>();
            Unit pelican = unitcomp.Get(unitcomp.PelicanUnitId);

            
            if (pelican != null && pelican.GetComponent<PelicanComponent>() != null && !pelican.GetComponent<PelicanComponent>().isVisible && !self._isCompleted)
            {
                pelican.GetComponent<PelicanComponent>().FlyToPlayer(player.GetComponent<FrogComponent>().heroRigidbody2D.transform);
            }
        }
        
        
        public static async ETTask OnPlayerCompleted(this FrogGameComponent self)
        {
            if (!self._isCompleted)
            {
                self._isCompleted = true;

                // self.inputCtrl.EnableInput(false);
                // self.FragGameRecord.GetInstance().history.jumpCnt = self.FragGameRecord.GetInstance().reocrd.jumpCnt;
                // self.FragGameRecord.GetInstance().history.playerTotalTime =  self.FragGameRecord.GetInstance().reocrd.playerTotalTime;
                // self.fragHero.RemoveListener();
                // self.pelican.FlyToPlayer(self.fragHero.heroRigidbody2D.transform);
            }
        }

        public static async ETTask OnPelicanFlyToPlayer(this FrogGameComponent self)
        {
            UnitComponent unitcomp =  self.DomainScene().GetComponent<UnitComponent>();
            Unit pelican = unitcomp.Get(unitcomp.PelicanUnitId);
            pelican.GetComponent<DialogCompoent>().Speak(self.DomainScene().GetComponent<I18NComponent>().langMgr.getValue("^game_completed_speak"));
            await TimerComponent.Instance.WaitAsync(3000); 
            self.DomainScene().GetComponent<UIComponent>().ShowWindow(WindowID.WindowID_FrogGameRecord);
            // StartCoroutine(UnityUtils.DelayFuc(() =>
            // {
            //     completedPanel.OnFadeIn();
            // },3));
        }
    }
}

