using System;

namespace ET.Server
{
    [FriendOf(typeof(GateSessionKeyComponent))]
    public static class GateSessionKeyComponentSystem
    {
        public static void Add(this GateSessionKeyComponent self, long key, string account , long userid)
        {
            self.sessionKey.Add(key, new Tuple<long, string>(userid,account));
            self.TimeoutRemoveKey(key).Coroutine();
        }

        public static Tuple<long,string> Get(this GateSessionKeyComponent self, long key)
        {
            Tuple<long,string> account = null;
            self.sessionKey.TryGetValue(key, out account);
            return account;
        }

        public static void Remove(this GateSessionKeyComponent self, long key)
        {
            self.sessionKey.Remove(key);
        }

        private static async ETTask TimeoutRemoveKey(this GateSessionKeyComponent self, long key)
        {
            await TimerComponent.Instance.WaitAsync(20000);
            self.sessionKey.Remove(key);
        }
    }
}