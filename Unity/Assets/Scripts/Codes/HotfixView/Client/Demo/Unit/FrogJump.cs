using Unity.Mathematics;
using UnityEngine;

namespace ET.Client
{
    [Event(SceneType.Current)]
    [FriendOf(typeof(FrogComponent))]
    public class FrogJump: AEvent<EventType.FrogJump>
    {
        protected override async ETTask Run(Scene scene, EventType.FrogJump args)
        {
            Unit player = null;
            bool sendToServer = false;
            // unitId for other player
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

            float chargeTime = args.chargeTime;
            
            if (!frogComponent.IsReady || frogComponent._state.GetType() != typeof(ChargeState))
            {
                return;
            }

            if (sendToServer)
            {
                //如果是自己还需要发给服务器
                C2M_FrogOpera c2MFrogOpera = new C2M_FrogOpera();
                c2MFrogOpera.opera = (int)FrogOpera.Jump;
                c2MFrogOpera.chargeTime = args.chargeTime;
                player.ClientScene().GetComponent<SessionComponent>().Session.Send(c2MFrogOpera);
            }
            
            Debug.Log("FrogJump");
            frogComponent.IsReady = false;
            frogComponent.chargeTime = chargeTime;
            
            frogComponent.fragAnim.SetBool("walk", false);
            frogComponent.SetHeroineState(new JumpingState(frogComponent, chargeTime));
            await ETTask.CompletedTask;
        }
    }
}