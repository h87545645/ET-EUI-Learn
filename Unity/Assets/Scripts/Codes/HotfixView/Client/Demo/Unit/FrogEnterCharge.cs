using UnityEngine;

namespace ET.Client
{
    [Event(SceneType.Current)]
    [FriendOf(typeof(FrogComponent))]
    public class FrogEnterCharge: AEvent<EventType.FrogEnterCharge>
    {
        protected override async ETTask Run(Scene scene, EventType.FrogEnterCharge args)
        {
            Unit unit = args.Unit;
            FrogComponent frogComponent = unit.GetComponent<FrogComponent>();
            if (frogComponent == null)
            {
                return;
            }
            if (!frogComponent.IsReady)
            {
                return;
            }
            frogComponent.SetHeroineState(new ChargeState(frogComponent));
            await ETTask.CompletedTask;
        }
    }
}