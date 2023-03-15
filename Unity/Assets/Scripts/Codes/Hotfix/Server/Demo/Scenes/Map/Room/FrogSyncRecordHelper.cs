using System;
using System.Collections.Generic;

namespace ET.Server
{
    [FriendOf(typeof(Room))]
    public static class FrogSyncRecordHelper
    {
        public static async ETTask<long> SyncRoomPlayerRecord(Room room , long winUserId)
        {
            try
            {
                long bestTime = long.MaxValue;
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
                    var player = players[0];
                    if (units[i].UserID == winUserId)
                    {
                        player.Wins++;
                        player.BestTime = Math.Min(player.BestTime, room.GameTime);
                        player.BestJumpCnt = Math.Min(player.BestJumpCnt, units[i].JumpCnt);
                        bestTime = player.BestTime;
                    }
                    else
                    {
                        player.Loses++;
                    }
                    //存到数据库
                    DBManagerComponent.Instance.GetZoneDB(1).Save<PlayerInfo>(player).Coroutine();
                
                }
                return bestTime;
            }
            catch (Exception e)
            {
                Console.WriteLine(e);
                throw;
            }
           
        }

    }
}

