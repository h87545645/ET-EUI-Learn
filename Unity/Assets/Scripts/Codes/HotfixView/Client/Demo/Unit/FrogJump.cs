using UnityEngine;

namespace ET.Client
{
    [Event(SceneType.Current)]
    [FriendOf(typeof(FrogComponent))]
    public class FrogJump: AEvent<EventType.FrogJump>
    {
        protected override async ETTask Run(Scene scene, EventType.FrogJump args)
        {
            Unit unit = args.Unit;
            FrogComponent frogComponent = unit.GetComponent<FrogComponent>();
            if (frogComponent == null)
            {
                return;
            }

            float chargeTime = args.chargeTime;
            
            if (!frogComponent.IsReady || frogComponent._state.GetType() != typeof(ChargeState))
            {
                return;
            }

            frogComponent.IsReady = false;
            frogComponent.chargeTime = chargeTime;
            // frogComponent.unit.GetComponent<NumericComponent>().Set(NumericType.jumpChargeTime ,chargeTime);
            // frogComponent.chargeTime = chargeTime;
            frogComponent.fragAnim.SetBool("walk", false);
            frogComponent.SetHeroineState(new JumpingState(frogComponent, chargeTime));
            await ETTask.CompletedTask;
        }
    }
}