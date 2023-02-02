namespace  ET
{
    public enum AccountType
    {
        General = 1,//默认
        Black = 2, //账号处在黑名单
    }

    public class Account: Entity, IAwake
    {
        public string AccountName { get; set; }//账号
        public string Password { get; set; }//密码
        public int AccountType { get; set; }//状态
        public long CreateTime { get; set; }//创建日期
        public long Coin { get; set; }//玩家金币
    }
}