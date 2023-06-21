

using System;
using System.Collections.Generic;

namespace ET.Server
{
    [ActorMessageHandler(SceneType.Map)]
    [FriendOf(typeof(Room))]
    public class G2M_PlayerEnterRoomRequestHandler: AMActorRpcHandler<Scene, G2M_PlayerEnterRoomRequest, M2G_PlayerEnterRoomResponse>
    {
        protected override async ETTask Run(Scene scene, G2M_PlayerEnterRoomRequest message, M2G_PlayerEnterRoomResponse response)
        {
            try
            {
                Room room = scene.GetComponent<RoomComponent>().Get(message.RoomID);
                Unit gamer = room.Get(message.UserID);
                if (gamer == null)
                {
                    //创建房间玩家对象
                    gamer = UnitFactory.Create(scene, message.PlayerID, UnitType.Player);
                    // gamer = GamerFactory.Create(message.PlayerID, message.UserID);
  
                    gamer.UserID = message.UserID;
                    gamer.PlayerId = message.PlayerID;
                    gamer.PlayerName = message.PlayerName;
                    if (gamer.UserID == 010101)
                    {
                        gamer.isRobot = true;
                    }
                
                    gamer.AddComponent<MailBoxComponent>();
                    gamer.AddComponent<UnitGateComponent, long>(message.SessionID);

                    //加入到房间
                    gamer.Position = room.playerDefaultPos[room.Count % 2];
                    room.Add(gamer);

                    if (room.GetEmptySeat() == -1)
                    {
                        room.State = RoomState.Game;
                        // 通知客户端切换场景创建unit
                        M2C_CreateMyUnit m2CCreateUnits = new M2C_CreateMyUnit(){Units = new List<UnitInfo>()};
                        // UnitComponent unitComponent = scene.GetComponent<UnitComponent>();
                        for (int i = 0; i < room.units.Length; i++)
                        {
                            Unit unit = room.units[i];
                            // unitComponent.AddChild(unit);
                            // unitComponent.Add(unit);
         

                            UnitInfo info = UnitHelper.CreateUnitInfo(unit);
                            m2CCreateUnits.Units.Add(info);
                            m2CCreateUnits.Units[i].Position = room.playerDefaultPos[i];
                            // unit.AddComponent<MoveComponent>();
                            
                            // 通知客户端开始切场景
                            if (!unit.isRobot)
                            {
                                M2C_StartSceneChange m2CStartSceneChange = new M2C_StartSceneChange() {SceneInstanceId = scene.InstanceId, SceneName = scene.Name,MyId = unit.PlayerId};
                                MessageHelper.SendToClient(unit, m2CStartSceneChange);
                            }
                         
                        }
                        room.Broadcast(m2CCreateUnits);
                    }

                    Log.Info($"玩家{message.UserID}进入房间");
                }
                else
                {
                    //玩家重连
                    gamer.isOffline = false;
                    // gamer.PlayerID = message.PlayerID;
                    gamer.GetComponent<UnitGateComponent>().GateSessionActorId = message.SessionID;
                    
                    
                    M2C_CreateMyUnit m2CCreateUnits = new M2C_CreateMyUnit(){Units = new List<UnitInfo>()};
                    for (int i = 0; i < room.units.Length; i++)
                    {
                        Unit unit = room.units[i];
                        // unitComponent.AddChild(unit);
                        // unitComponent.Add(unit);
         

                        UnitInfo info = UnitHelper.CreateUnitInfo(unit);
                        m2CCreateUnits.Units.Add(info);
                        m2CCreateUnits.Units[i].Position = room.units[i].Position;
                        // unit.AddComponent<MoveComponent>();
                    }
                    

                    // 通知客户端开始切场景
                    if (!gamer.isRobot)
                    {
                        M2C_StartSceneChange m2CStartSceneChange = new M2C_StartSceneChange() {SceneInstanceId = scene.InstanceId, SceneName = scene.Name,MyId = gamer.PlayerId};
                        MessageHelper.SendToClient(gamer, m2CStartSceneChange);
                    }
                    room.Broadcast(m2CCreateUnits);
                    
                }
                // 解锁location，可以接收发给Unit的消息
                // Log.Debug("LocationProxyComponent UnLock  PlayerID : "+message.PlayerID + " OldInstanceId :" +  message.OldInstanceId + " InstanceId:" + gamer.InstanceId);
                await LocationProxyComponent.Instance.UnLock(message.PlayerID, message.OldInstanceId, gamer.InstanceId);
                response.GamerID = gamer.InstanceId;
                await ETTask.CompletedTask;

            }
            catch (Exception e)
            {
                Log.Error(e);
            }
        }
    }
}

