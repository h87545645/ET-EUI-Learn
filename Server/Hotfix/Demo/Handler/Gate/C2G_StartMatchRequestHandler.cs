using System;

namespace ET.Gate
{
    public class C2G_StartMatchRequestHandler: AMRpcHandler<C2G_StartMatchRequest, G2C_StartMatchResponse>
    {
        protected override async ETTask Run(Session session, C2G_StartMatchRequest request, G2C_StartMatchResponse response, Action reply)
        {
            try
            {
                
            }
            catch (Exception e)
            {
                Console.WriteLine(e);
                throw;
            }
            //向匹配服务器发送匹配请求
            Player player = session.GetComponent<SessionPlayerComponent>().GetMyPlayer();
            // StartSceneConfig startSceneConfig = StartSceneConfigCategory.Instance.GetBySceneName(session.DomainZone(), "Map1");
            M2G_PlayerEnterMatchResponse m2gPlayerEnterMatch = (M2G_PlayerEnterMatchResponse) await ActorMessageSenderComponent.Instance.Call(
                session.InstanceId, new G2M_PlayerEnterMatchRequest() {PlayerID = player.Id,});

            player.IsMatching = true;
            // throw new NotImplementedException();
        }
    }
}