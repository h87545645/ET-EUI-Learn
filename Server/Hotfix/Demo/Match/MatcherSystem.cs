

namespace ET
{
    [FriendClass(typeof(Matcher))]
    public static class MatcherSystem
    {
        [ObjectSystem]
        public class MatcherAwakeSystem : AwakeSystem<Matcher, long>
        {
            public override void Awake(Matcher self, long id)
            {
                self.UserID = id;
            }
        }
        
        public class MatcherDestroyedSystem : DestroySystem<Matcher>
        {
            public override void Destroy(Matcher self)
            {
                if(self.IsDisposed)
                {
                    return;
                }
                
                self.UserID = 0;
                self.PlayerID = 0;
                self.GateSessionID = 0;
            }
        }
    }
}