using System;

namespace ET.Gate
{
    public class C2G_StartMatchRequestHandler: AMRpcHandler<C2G_StartMatchRequest, G2C_StartMatchResponse>
    {
        protected override ETTask Run(Session session, C2G_StartMatchRequest request, G2C_StartMatchResponse response, Action reply)
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
            // StartConfigComponent config = Game.Scene.GetComponent<StartConfigComponent>();
            // IPEndPoint matchIPEndPoint = config.MatchConfig.GetComponent<InnerConfig>().IPEndPoint;
            // Session matchSession = Game.Scene.GetComponent<NetInnerComponent>().Get(matchIPEndPoint);
            // M2G_PlayerEnterMatch_Ack m2G_PlayerEnterMatch_Ack = await matchSession.Call(new G2M_PlayerEnterMatch_Req()
            // {
            //     PlayerID = user.InstanceId,
            //     UserID = user.UserID,
            //     SessionID = session.InstanceId,
            // }) as M2G_PlayerEnterMatch_Ack;
            //
            // user.IsMatching = true;
            throw new NotImplementedException();
        }
    }
}