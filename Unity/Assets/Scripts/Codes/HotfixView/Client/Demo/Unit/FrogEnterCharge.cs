using UnityEngine;

namespace ET.Client
{
    [Event(SceneType.Current)]
    [FriendOf(typeof(FrogComponent))]
    public class FrogEnterCharge: AEvent<EventType.FrogEnterCharge>
    {
        protected override async ETTask Run(Scene scene, EventType.FrogEnterCharge args)
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
                c2MFrogOpera.opera = (int)FrogOpera.Charge;
                player.ClientScene().GetComponent<SessionComponent>().Session.Send(c2MFrogOpera);
            }
            FrogComponent frogComponent = player.GetComponent<FrogComponent>();
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