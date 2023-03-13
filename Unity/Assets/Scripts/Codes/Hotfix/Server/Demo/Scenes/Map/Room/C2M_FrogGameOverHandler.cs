

namespace ET.Server
{
    [ActorMessageHandler(SceneType.Map)]
    [FriendOf(typeof(Room))]
    public class C2M_FrogGameOverHandler : AMActorLocationHandler<Unit, C2M_FrogGameOver>
    {
        protected override async ETTask Run(Unit unit, C2M_FrogGameOver message)
        {
            Room room = unit.DomainScene().GetComponent<RoomComponent>().Get(unit.RoomID);
            if (room.State != RoomState.Game)
            {
                //已经结束了
                return;
            }
            room.State = RoomState.Idle;
            long bestTime = await FrogSyncRecordHelper.SyncRoomPlayerRecord(room, message.UserId);
            // 广播玩家操作
         
            M2C_FrogGameOver m2CFrogGameOver = new M2C_FrogGameOver() {};
            m2CFrogGameOver.WinPlayerId = unit.PlayerId;
            m2CFrogGameOver.GameTime = room.GameTime;
            m2CFrogGameOver.JumpCnt = unit.JumpCnt;
            m2CFrogGameOver.BestTime = bestTime;
            room.Broadcast(m2CFrogGameOver);
            //记录操作到数据库

            // await ETTask.CompletedTask;
        }
    }
}