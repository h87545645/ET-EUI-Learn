using UnityEngine;

namespace ET.Client
{
    [Event(SceneType.Current)]
    public class FrogCancelCharge: AEvent<EventType.FrogCancelCharge>
    {
        protected override async ETTask Run(Scene scene, EventType.FrogCancelCharge args)
        {
            Unit unit = args.Unit;
            FrogComponent frogComponent = unit.GetComponent<FrogComponent>();
            if (frogComponent == null)
            {
                return;
            }
            if (!frogComponent.IsReady )
            {
                return;
            }
            frogComponent.SetHeroineState(new StandingState(frogComponent));
            await ETTask.CompletedTask;
        }
    }
}