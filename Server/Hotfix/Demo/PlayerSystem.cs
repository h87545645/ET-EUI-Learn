namespace ET
{
    [FriendClass(typeof(Player))]
    public static class PlayerSystem
    {
        [ObjectSystem]
        public class PlayerAwakeSystem : AwakeSystem<Player, string , long>
        {
            public override void Awake(Player self, string a , long id)
            {
                self.Account = a;
                self.UserID = id;
            }
        }
    }
}