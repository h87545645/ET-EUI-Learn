using System.Linq;

namespace ET
{
    [FriendClass(typeof(MatcherComponent))]
    public static  class MatcherComponentSystem
    {
        
        public class MatcherComponentDestroySystem: DestroySystem<MatcherComponent>
        {
            public override void Destroy(MatcherComponent self)
            {
                if (self.IsDisposed)
                {
                    return;
                }

                self.Dispose();

                foreach (var matcher in self.matchers.Values)
                {
                    matcher.Dispose();
                }
            }
        }
        
        /// <summary>
        /// 添加匹配对象
        /// </summary>
        /// <param name="matcher"></param>
        public static void Add(this MatcherComponent self,Matcher matcher)
        {
            self.matchers.Add(matcher.UserID, matcher);
        }

        /// <summary>
        /// 获取匹配对象
        /// </summary>
        /// <param name="id"></param>
        /// <returns></returns>
        public static Matcher Get(this MatcherComponent self, long id)
        {
            self.matchers.TryGetValue(id, out Matcher matcher);
            return matcher;
        }

        /// <summary>
        /// 获取所有匹配对象
        /// </summary>
        /// <returns></returns>
        public static Matcher[] GetAll(this MatcherComponent self)
        {
            return self.matchers.Values.ToArray();
        }

        /// <summary>
        /// 移除匹配对象并返回
        /// </summary>
        /// <param name="id"></param>
        /// <returns></returns>
        public static Matcher Remove(this MatcherComponent self,long id)
        {
            Matcher matcher = Get(self,id);
            self.matchers.Remove(id);
            return matcher;
        }
        
    }
}