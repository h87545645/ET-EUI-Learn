

using System;

namespace ET
{
    public class C2G_PlayerExitMatchRequestHandler : AMRpcHandler<C2G_PlayerExitMatchRequest, G2C_PlayerExitMatchResponse>
    {
        protected override async ETTask Run(Session session, C2G_PlayerExitMatchRequest message, G2C_PlayerExitMatchResponse response, Action reply)
        {
        
            //验证Session
            if (!GateHelper.SignSession(session))
            {
                return;
            }
            Player player = session.GetComponent<SessionPlayerComponent>().GetMyPlayer();

            //正在匹配中发送玩家退出匹配请求
            if (player.IsMatching)
            {

                player.IsMatching = false;
                
                try
                {
                    Matcher matcher = Game.Scene.GetComponent<MatcherComponent>().Remove(player.UserID);
                    matcher?.Dispose();
                    Log.Info($"玩家{player.UserID}退出匹配队列");

                    reply();
                }
                catch (Exception e)
                {
                    response.Error = ErrorCode.ERR_ExitMatchError;
                    Log.Error(e);
                    reply();
                }
            }
            await ETTask.CompletedTask;
   
        }
    }
}
