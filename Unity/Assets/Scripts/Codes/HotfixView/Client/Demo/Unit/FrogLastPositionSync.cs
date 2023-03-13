
using Unity.Mathematics;

namespace ET.Client
{
    [Event(SceneType.Current)]
    [FriendOf(typeof (FrogComponent))]
    public class FrogLastPositionSync: AEvent<EventType.FrogLastPosition>
    {
        protected override async ETTask Run(Scene scene, EventType.FrogLastPosition args)
        {
            //同步落地位置给其他玩家
            C2M_FrogSyncPosition c2MFrogSyncPosition = new C2M_FrogSyncPosition();
            c2MFrogSyncPosition.Position = new float3(args.Position.x, args.Position.y, 0);
            scene.ClientScene().GetComponent<SessionComponent>().Session.Send(c2MFrogSyncPosition);
        }
    }
}