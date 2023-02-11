namespace ET
{
    /// <summary>
    /// 用户信息
    /// </summary>
    public class PlayerInfo : Entity, IAwake
    {
        public long AccountId { get; set; }
        //昵称
        public string NickName { get; set; }

        //胜场
        public int Wins { get; set; }

        //负场
        public int Loses { get; set; }

        //金币
        public long Coin { get; set; }
    }
}