﻿using UnityEngine;

namespace ET.Client
{
    [Event(SceneType.Current)]
    [FriendOf(typeof(FrogComponent))]
    public class FrogDirection: AEvent<EventType.FrogDirection>
    {
        protected override async ETTask Run(Scene scene, EventType.FrogDirection args)
        {
            // Unit unit = args.Unit;
            Unit player = UnitHelper.GetMyUnitFromClientScene(scene.DomainScene());
            FrogComponent frogComponent = player.GetComponent<FrogComponent>();
            
            if (frogComponent == null)
            {
                return;
            }

            bool force = args.force;
            ET.FrogDirection dir = args.dir;
            
            
            if (!force && (!frogComponent.IsReady || dir == frogComponent.direction))
            {
                return;
            }
        
            switch (dir)
            {
                case ET.FrogDirection.None:
                
                    break;
                case ET.FrogDirection.Right:
                    frogComponent.heroRenderer.flipX = false;
                    break;
                case ET.FrogDirection.Left:
                    frogComponent.heroRenderer.flipX = true;
                    break;
            }

            if (force)
            {
                frogComponent.direction = dir;
            }
            else
            {
                if (dir == ET.FrogDirection.None)
                {
                 
                    frogComponent.direction = dir;
                    if ( frogComponent.isGround && frogComponent._state.GetType() != typeof(ChargeState))
                    {
                        // Debug.Log("dir is up!!!!!!!");
                        frogComponent.SetHeroineState(new StandingState(frogComponent));
                        frogComponent.fragAnim.SetBool("walk", false);
                    }
                    await TimerComponent.Instance.WaitAsync(100);
                    frogComponent.lastDirection = frogComponent.direction;
                    // StartCoroutine(UnityUtils.DelayFuc(() =>
                    // {
                    //     lastDirection = direction;
                    //     // Debug.Log("dir is up!!!!!!!");
                    // },0.1f));
                }
                else
                {
                    frogComponent.direction = dir;
                    frogComponent.lastDirection = frogComponent.direction;
                    if ( frogComponent.isGround && frogComponent._state.GetType() != typeof(ChargeState))
                    {
                    
                    
                        frogComponent.fragAnim.SetBool("standing", false);
                        frogComponent.fragAnim.SetBool("walk", true);
                        frogComponent.SetHeroineState(new WalkingState(frogComponent));
                    }
                }
            }
            
            await ETTask.CompletedTask;
        }
    }
}