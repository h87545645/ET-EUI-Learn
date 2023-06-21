

namespace ET.Server
{
	public static class SessionPlayerComponentSystem
	{
		[FriendOf(typeof(MatchComponent))]
		public class SessionPlayerComponentDestroySystem: DestroySystem<SessionPlayerComponent>
		{
			protected override void Destroy(SessionPlayerComponent self)
			{
				// 通知MAP断线消息
				ActorLocationSenderComponent.Instance?.Send(self.PlayerId, new G2M_SessionDisconnect());
				self.DomainScene().GetComponent<PlayerComponent>()?.Remove(self.PlayerId);


				//正在匹配中发送玩家退出匹配请求
				self.DomainScene().GetComponent<MatcherComponent>()?.Remove(self.UserId);

				
				GateHelper.PlayerExitRoom(self.DomainScene()  , self.UserId);
				
			}
		}

		public static Player GetMyPlayer(this SessionPlayerComponent self)
		{
			return self.DomainScene().GetComponent<PlayerComponent>().Get(self.PlayerId);
		}
	}
}
