namespace ET.Server
{
	[ComponentOf(typeof(Session))]
	public class SessionPlayerComponent : Entity, IAwake, IDestroy
	{
		public long PlayerId { get; set; }
		
		public long UserId { get; set; } //userid 即 account id
		
		public Session Session { get; set; }
	}
}