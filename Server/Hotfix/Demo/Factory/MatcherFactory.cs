

namespace ET
{
    public static class MatcherFactory
    {
        /// <summary>
        /// 创建匹配对象
        /// </summary>
        /// <param name="playerId"></param>
        /// <param name="userId"></param>
        /// <returns></returns>
        public static Matcher Create(long playerId, long userId, Session session)
        {
            //创建匹配玩家
            
            // Matcher matcher = ComponentFactory.Create<Matcher, long>(userId);
   

            //加入匹配队列
            Matcher matcher = Game.Scene.GetComponent<MatcherComponent>().AddChild<Matcher, long>(userId);
            matcher.PlayerID = playerId;
            matcher.session = session;
            Game.Scene.GetComponent<MatcherComponent>().Add(matcher);
            Log.Info($"玩家{userId}加入匹配队列");

            return matcher;
        }
    }
}
