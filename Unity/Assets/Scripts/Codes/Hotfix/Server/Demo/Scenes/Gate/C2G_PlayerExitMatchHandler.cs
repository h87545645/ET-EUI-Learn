
namespace ET.Server
{
    [MessageHandler(SceneType.Gate)]
    [FriendOf(typeof (MatchComponent))]
    public class C2G_PlayerExitMatchRequestHandler: AMRpcHandler<C2G_PlayerExitMatchRequest, G2C_PlayerExitMatchResponse>
    {
        protected override async ETTask Run(Session session, C2G_PlayerExitMatchRequest request, G2C_PlayerExitMatchResponse response)
        {
            Player player = session.GetComponent<SessionPlayerComponent>().GetMyPlayer();
            MatchComponent matchComponent = session.DomainScene().GetComponent<MatchComponent>();
            if (session.DomainScene().GetComponent<MatcherComponent>().GetChild<Matcher>(player.UserID) != null)
            {
                session.DomainScene().GetComponent<MatcherComponent>().RemoveChild(player.UserID);
            }

            if ( session.DomainScene().GetComponent<MatcherComponent>().Get(player.UserID) != null)
            {
                session.DomainScene().GetComponent<MatcherComponent>().Remove(player.UserID);
            };
            await ETTask.CompletedTask;
        }
    }
}