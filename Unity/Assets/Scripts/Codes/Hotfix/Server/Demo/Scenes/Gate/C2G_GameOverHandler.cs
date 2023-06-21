

namespace ET.Server
{
    [MessageHandler(SceneType.Gate)]
    [FriendOf(typeof(MatchComponent))]
    public class C2G_GameOverMessageHandler : AMHandler<C2G_GameOverMessage>
    {
        protected override async ETTask Run(Session session, C2G_GameOverMessage message)
        {
            // unit.FindPathMoveToAsync(message.Position).Coroutine();
            MatchRoomComponent matchRoomComponent = session.DomainScene().GetComponent<MatchRoomComponent>();
            Room room = matchRoomComponent.Get(message.RoomID);
            Unit[] units = room.GetAll();
            MatchComponent match = session.DomainScene().GetComponent<MatchComponent>();
            foreach (var user in units)
            {
                match.Playing.Remove(user.UserID);
                room.Remove(user.UserID);
                user.Dispose();
            }

           
            matchRoomComponent.Recycle(room.Id);
            Log.Info($"回收房间{room.Id}");
            await ETTask.CompletedTask;
        }
    }

}

