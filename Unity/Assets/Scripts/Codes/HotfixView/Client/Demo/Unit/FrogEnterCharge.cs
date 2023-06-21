using Unity.Mathematics;
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
            bool sendToServer = false;
            // unitId of other player
            if (args.unitId != 0 && args.unitId != null)
            {
                player = scene.GetComponent<UnitComponent>().Get(args.unitId);
            }
            else
            {
                player = UnitHelper.GetMyUnitFromCurrentScene(scene.DomainScene());
                sendToServer = true;
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
            if (sendToServer)
            {
                //如果是自己还需要发给服务器
                C2M_FrogOpera c2MFrogOpera = new C2M_FrogOpera();
                c2MFrogOpera.opera = (int)FrogOpera.Charge;
                player.ClientScene().GetComponent<SessionComponent>().Session.Send(c2MFrogOpera);
            }
            frogComponent.SetHeroineState(new ChargeState(frogComponent));
            await ETTask.CompletedTask;
        }
    }
}