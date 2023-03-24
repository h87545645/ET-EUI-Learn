

using System.Collections.Generic;

namespace ET.Server
{
    [ActorMessageHandler(SceneType.Map)]
    [FriendOf(typeof(Room))]
    public class C2M_FrogGameOverHandler : AMActorLocationHandler<Unit, C2M_FrogGameOver>
    {
        protected override async ETTask Run(Unit unit, C2M_FrogGameOver message)
        {
            RoomComponent roomComponent = unit.DomainScene().GetComponent<RoomComponent>();
            Room room = roomComponent.Remove(unit.RoomID);
            if (room.State != RoomState.Game)
            {
                //已经结束了
                return;
            }
            room.State = RoomState.Idle;
            long bestTime = await FrogSyncRecordHelper.SyncRoomPlayerRecord(room, message.UserId);
            // 广播玩家操作
         
            M2C_FrogGameOver m2CFrogGameOver = new M2C_FrogGameOver();
            m2CFrogGameOver.WinPlayerId = unit.PlayerId;
            m2CFrogGameOver.GameTime = room.GameTime;
            m2CFrogGameOver.JumpCnt = unit.JumpCnt;
            m2CFrogGameOver.PlayerName = unit.PlayerName;
            m2CFrogGameOver.BestTime = bestTime;
            room.Broadcast(m2CFrogGameOver);
            
            //删除room 
            room.Dispose();
            
            //删除unit
            UnitComponent unitComponent = unit.DomainScene().GetComponent<UnitComponent>();
            if (unitComponent == null)
            {
                return;
            }

            unitComponent.RemoveAll();
            // foreach (KeyValuePair<long,Unit> kvp in unitComponent.GetAll())
            // {
            //     unitComponent.Remove(kvp.Key);
            // }
            

            // await ETTask.CompletedTask;
        }
    }
}