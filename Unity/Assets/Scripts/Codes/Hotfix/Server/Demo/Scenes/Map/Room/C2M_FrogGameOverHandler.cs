

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
            PlayerInfo winInfo = await FrogSyncRecordHelper.SyncRoomPlayerRecord(room, message.UserId);
   
            room.State = RoomState.Idle;
           
            // 广播玩家操作
         
            M2C_FrogGameOver m2CFrogGameOver = new M2C_FrogGameOver();
            m2CFrogGameOver.WinPlayerId = unit.PlayerId;
            m2CFrogGameOver.GameTime = room.GameTime;
            m2CFrogGameOver.JumpCnt = message.JumpCnt;
            m2CFrogGameOver.PlayerName = unit.PlayerName;
            m2CFrogGameOver.WinCnt = winInfo.Wins;
            m2CFrogGameOver.BestTime = winInfo.BestTime;
            room.Broadcast(m2CFrogGameOver);
            
            UnitComponent unitComponent = unit.DomainScene().GetComponent<UnitComponent>();
            Unit[] units = room.GetAll();
            foreach (Unit user in units)
            {
                unitComponent?.Remove(user.Id);
                room.Remove(user.UserID);
                user.Dispose();
            }
            //删除room 
            room.Dispose();
            // await ETTask.CompletedTask;
        }
    }
}