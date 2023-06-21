
namespace ET.Server
{
    [MessageHandler(SceneType.Gate)]
    [FriendOf(typeof(MatchComponent))]
    public class C2G_PlayerExitRoomHandler : AMHandler<C2G_PlayerExitRoomMessage>
    {
        protected override async ETTask Run(Session session, C2G_PlayerExitRoomMessage message)
        {
            GateHelper.PlayerExitRoom(session.DomainScene()  , message.UserID);
            //
            await ETTask.CompletedTask;
        }
    }

}

