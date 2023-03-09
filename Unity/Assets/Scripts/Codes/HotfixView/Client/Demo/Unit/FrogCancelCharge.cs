using UnityEngine;

namespace ET.Client
{
    [Event(SceneType.Current)]
    [FriendOf(typeof(FrogComponent))]
    public class FrogCancelCharge: AEvent<EventType.FrogCancelCharge>
    {
        protected override async ETTask Run(Scene scene, EventType.FrogCancelCharge args)
        {
            Unit player = null;
            // unitId for other player
            if (args.unitId != 0 && args.unitId != null)
            {
                player = scene.GetComponent<UnitComponent>().Get(args.unitId);
                
            }
            else
            {
                player = UnitHelper.GetMyUnitFromCurrentScene(scene.DomainScene());
                //如果是自己还需要发给服务器
                C2M_FrogOpera c2MFrogOpera = new C2M_FrogOpera();
                c2MFrogOpera.opera = (int)FrogOpera.ChargeCancle;
                player.ClientScene().GetComponent<SessionComponent>().Session.Send(c2MFrogOpera);
            }
            FrogComponent frogComponent = player.GetComponent<FrogComponent>();
            if (frogComponent == null)
            {
                return;
            }
            if (!frogComponent.IsReady )
            {
                return;
            }
            frogComponent.fragAnim.ResetTrigger("power");
            frogComponent.SetHeroineState(new StandingState(frogComponent));
            await ETTask.CompletedTask;
        }
    }
}