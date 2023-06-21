using System;
using System.Collections.Generic;

namespace ET.Server
{
    [FriendOf(typeof(Room))]
    public static class FrogSyncRecordHelper
    {
        public static async ETTask<PlayerInfo> SyncRoomPlayerRecord(Room room , long winUserId)
        {
            try
            {
                PlayerInfo winPlayer = null;
                Unit[] units = room.GetAll();
                for (int i = 0; i < units.Length; i++)
                {
                    //记录操作到数据库
                    List<PlayerInfo> players = await DBManagerComponent.Instance.GetZoneDB(1)
                            .Query<PlayerInfo>(d => d.AccountId.Equals(units[i].UserID));
                    if (players == null || players.Count == 0)
                    {
                        continue;
                    }
                    PlayerInfo player = players[0];
                    if (units[i].UserID == winUserId)
                    {
                        player.Wins++;
                        player.BestTime = player.BestTime <= 0 ? room.GameTime : Math.Min(player.BestTime, room.GameTime);
                        player.BestJumpCnt = player.BestJumpCnt <= 0 ? units[i].JumpCnt : Math.Min(player.BestJumpCnt, units[i].JumpCnt);
                        winPlayer = player;
                    }
                    else
                    {
                        player.Loses++;
                    }
                    //存到数据库
                    DBManagerComponent.Instance.GetZoneDB(1).Save<PlayerInfo>(player).Coroutine();
                
                }
                return winPlayer;
            }
            catch (Exception e)
            {
                Console.WriteLine(e);
                throw;
            }
           
        }

    }
}

