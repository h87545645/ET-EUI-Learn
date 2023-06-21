
namespace ET.Server
{
    [ActorMessageHandler(SceneType.Map)]
    [FriendOf(typeof (Room))]
    public class C2M_PlayerExitRoomHandler: AMActorLocationHandler<Unit, C2M_PlayerExitRoom>
    {
        protected override async ETTask Run(Unit unit, C2M_PlayerExitRoom message)
        {
            RoomHelper.PlayerExit(unit);
            await ETTask.CompletedTask;
        }
    }
}
