

namespace ET
{
    [FriendOf(typeof(Matcher))]
    public static class MatcherSystem
    {
        [ObjectSystem]
        public class MatcherAwakeSystem : AwakeSystem<Matcher, long>
        {
            protected override void Awake(Matcher self, long id)
            {
                self.UserID = id;
            }
        }
        
        public class MatcherDestroyedSystem : DestroySystem<Matcher>
        {
            protected override void Destroy(Matcher self)
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