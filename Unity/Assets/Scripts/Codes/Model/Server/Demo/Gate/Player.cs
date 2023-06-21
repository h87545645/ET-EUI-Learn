namespace ET.Server
{
    [ChildOf(typeof(PlayerComponent))]
    public sealed class Player : Entity, IAwake<string , long>
    {
        public string Account { get; set; }
		
        public long UnitId { get; set; }
        
        //用户ID（唯一） 即 account id
        public long UserID { get;  set; }
        //是否正在匹配中
        public bool IsMatching { get; set; }
        
        public long RoomId { get; set; }
        
        public PlayerInfo PlayerInfo { get; set; }
    }
}