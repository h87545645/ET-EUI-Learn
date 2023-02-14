

namespace ET
{
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
            if (sessionPlayer == null || Game.Scene.GetComponent<PlayerComponent>().Get(sessionPlayer.GetMyPlayer().UserID) == null)
            {
                return false;
            }

            return true;
        }
    }
}