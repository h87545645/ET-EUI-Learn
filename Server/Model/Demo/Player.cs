namespace ET
{


	public sealed class Player : Entity, IAwake<string>
	{
		public string Account { get; set; }
		
		public long UnitId { get; set; }
		
		//是否正在匹配中
		public bool IsMatching { get; set; }
	}
}