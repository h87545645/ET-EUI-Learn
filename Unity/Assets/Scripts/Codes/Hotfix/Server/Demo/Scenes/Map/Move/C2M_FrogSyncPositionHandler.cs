

using Unity.Mathematics;

namespace ET.Server
{
    [ActorMessageHandler(SceneType.Map)]
    public class C2M_FrogSyncPositionHandler : AMActorLocationHandler<Unit, C2M_FrogSyncPosition>
    {
        protected override async ETTask Run(Unit unit, C2M_FrogSyncPosition message)
        {
            // 广播玩家位置
            M2C_FrogSyncPosition m2CFrogSyncPosition = new M2C_FrogSyncPosition() {Position = new float3(message.Position.x,message.Position.y,message.Position.z)};
            m2CFrogSyncPosition.Id = unit.Id;
            Room room = unit.DomainScene().GetComponent<RoomComponent>().Get(unit.RoomID);
            // room.Broadcast(m2CFrogSyncPosition ,  unit.PlayerId);
            // MessageHelper.FrogBroadcast(unit, m2CFrogSyncPosition);
            await ETTask.CompletedTask;
        }
    }
}