namespace ET
{


	public sealed class Player : Entity, IAwake<string , long>
	{
		
		//用户ID（唯一）
        public long UserID { get;  set; }
		public string Account { get; set; }
		
		public long UnitId { get; set; }
		
		//是否正在匹配中
		public bool IsMatching { get; set; }
	}
}