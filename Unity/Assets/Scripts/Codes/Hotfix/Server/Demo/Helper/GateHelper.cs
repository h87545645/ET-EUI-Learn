namespace ET.Server
{
    [FriendOf(typeof(MatchComponent))]
    public static class GateHelper
    {
        /// <summary>
        /// 验证Session是否合法
        /// </summary>
        /// <param name="session"></param>
        /// <returns></returns>
        public static bool SignSession(Session session)
        {
            SessionPlayerComponent sessionPlayer = session.GetComponent<SessionPlayerComponent>();
            if (sessionPlayer == null || session.DomainScene().GetComponent<PlayerComponent>().Get(sessionPlayer.GetMyPlayer().UserID) == null)
            {
                return false;
            }

            return true;
        }
        
        
        public static void PlayerExitRoom(Scene scene , long userId)
        {
            MatchRoomComponent matchRoomComponent = scene.GetComponent<MatchRoomComponent>();
            MatchComponent matchComponent = scene.GetComponent<MatchComponent>();
            if (!matchComponent.Playing.ContainsKey(userId))
            {
                return;
            }
            long roomId = matchComponent.Playing[userId];
            Room room = matchRoomComponent.Get(roomId);
            Unit[] units = room.GetAll();
            bool isEmptyRoom = true;
            foreach (var user in units)
            {
                if (user.UserID == userId)
                {
                    user.isOffline = true;
                }

                if (!user.isOffline)
                {
                    isEmptyRoom = false;
                }
            }

            if (isEmptyRoom)
            {
                foreach (var user in units)
                {
                    matchComponent.Playing.Remove(user.UserID);
                    room.Remove(user.UserID);
                    user.Dispose();
                }
                matchRoomComponent.Recycle(room.Id);
                Log.Info($"回收房间{room.Id}");
            }
        }
    }
}