
using System;
using System.Collections.Generic;
using System.Linq.Expressions;
using MongoDB.Bson;
using MongoDB.Bson.Serialization;
using MongoDB.Driver;

namespace ET.Server
{
    [MessageHandler(SceneType.Gate)]
    public class C2G_GetRankInfoHandler : AMRpcHandler<C2G_GetRankInfoRequest, G2C_GetRankInfoResponse>
    {
        protected override async ETTask Run(Session session, C2G_GetRankInfoRequest request, G2C_GetRankInfoResponse response)
        {
            List<PlayerInfo> players = await DBManagerComponent.Instance.GetZoneDB(1)
                    .SortQuery<PlayerInfo>(d => true , d => d.Wins == -1 , 20);
            List<GamePlayerInfo> playerList = new List<GamePlayerInfo>();
    
            for (int i = 0; i < players.Count; i++)
            {
                GamePlayerInfo gPlayer = new GamePlayerInfo();
                gPlayer.AccountId = players[i].AccountId;
                gPlayer.Coin = players[i].Coin;
                gPlayer.Wins = players[i].Wins;
                gPlayer.Loses = players[i].Loses;
                gPlayer.NickName = players[i].NickName;
                gPlayer.BestTime = players[i].BestTime;
                gPlayer.BestJumpCnt = players[i].BestJumpCnt;
                playerList.Add(gPlayer);
            }
            response.Ranks = playerList;
            await ETTask.CompletedTask;
        }
    }
}