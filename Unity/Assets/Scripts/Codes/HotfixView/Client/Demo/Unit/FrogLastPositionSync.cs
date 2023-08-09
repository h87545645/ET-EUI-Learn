

using Unity.Mathematics;

namespace ET.Client
{
    [Event(SceneType.Current)]
    [FriendOf(typeof (FrogComponent))]
    public class FrogLastPositionSync: AEvent<EventType.FrogLastPosition>
    {
        protected override async ETTask Run(Scene scene, EventType.FrogLastPosition args)
        {
            // Player player = 
            Unit player = UnitHelper.GetMyUnitFromCurrentScene(scene);
            if (player == null || player.isSinglePlay)
            {
                return;
            }
            float3 pos = new float3(args.Position.x, args.Position.y, 0);
            player.Position = pos;
            //同步落地位置给其他玩家
            C2M_FrogSyncPosition c2MFrogSyncPosition = new C2M_FrogSyncPosition();
            c2MFrogSyncPosition.Position = pos;
            c2MFrogSyncPosition.UserId = player.UserID;
            scene.ClientScene().GetComponent<SessionComponent>().Session.Send(c2MFrogSyncPosition);
        }
    }
}