

using System.Collections.Generic;

namespace ET.Server
{
    [MessageHandler(SceneType.Gate)]
    public class C2G_PlayerEditInfoHandler : AMRpcHandler<C2G_PlayerEditInfoRequest, G2C_PlayerExitMatchResponse>
    {
        protected override async ETTask Run(Session session, C2G_PlayerEditInfoRequest request, G2C_PlayerExitMatchResponse response)
        {
            List<PlayerInfo> players = await DBManagerComponent.Instance.GetZoneDB(1)
                    .Query<PlayerInfo>(d => d.AccountId.Equals(request.AccountId));
            if (players == null || players.Count == 0)
            {
                return;
            }
            PlayerInfo player = players[0];
            player.NickName = request.Name;
            //存到数据库
            DBManagerComponent.Instance.GetZoneDB(1).Save<PlayerInfo>(player).Coroutine();
            await ETTask.CompletedTask;
        }
    }
}