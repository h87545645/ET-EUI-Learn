

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
                    if (gamer.UserID == 010101)
                    {
                        gamer.isRobot = true;
                    }
                
                    gamer.AddComponent<MailBoxComponent>();
                    gamer.AddComponent<UnitGateComponent, long>(message.SessionID);

                    //加入到房间
                    room.Add(gamer);

                    if (room.GetEmptySeat() == -1)
                    {
                        room.State = RoomState.Game;
                        // 通知客户端切换场景创建unit
                        M2C_CreateMyUnit m2CCreateUnits = new M2C_CreateMyUnit(){Units = new List<UnitInfo>()};
                        UnitComponent unitComponent = scene.GetComponent<UnitComponent>();
                        for (int i = 0; i < room.units.Length; i++)
                        {
                            Unit unit = room.units[i];
                            unitComponent.AddChild(unit);
                            unitComponent.Add(unit);
         

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
                   

                    // Actor_GamerEnterRoom_Ntt broadcastMessage = new Actor_GamerEnterRoom_Ntt();
                    // foreach (Gamer _gamer in room.GetAll())
                    // {
                    //     if (_gamer == null)
                    //     {
                    //         //添加空位
                    //         broadcastMessage.Gamers.Add(new GamerInfo());
                    //         continue;
                    //     }
                    //
                    //     //添加玩家信息
                    //     GamerInfo info = new GamerInfo() { UserID = _gamer.UserID, IsReady = _gamer.IsReady };
                    //     broadcastMessage.Gamers.Add(info);
                    // }
                    //
                    // //广播房间内玩家消息
                    // room.Broadcast(broadcastMessage);

                    Log.Info($"玩家{message.UserID}进入房间");
                }
                else
                {
                    //玩家重连
                    // gamer.isOffline = false;
                    // gamer.PlayerID = message.PlayerID;
                    // gamer.GetComponent<UnitGateComponent>().GateSessionActorId = message.SessionID;
                    //
                    // //玩家重连移除托管组件
                    // gamer.RemoveComponent<TrusteeshipComponent>();
                    //
                    // Actor_GamerEnterRoom_Ntt broadcastMessage = new Actor_GamerEnterRoom_Ntt();
                    // foreach (Gamer _gamer in room.GetAll())
                    // {
                    //     if (_gamer == null)
                    //     {
                    //         //添加空位
                    //         broadcastMessage.Gamers.Add(default(GamerInfo));
                    //         continue;
                    //     }
                    //
                    //     //添加玩家信息
                    //     GamerInfo info = new GamerInfo() { UserID = _gamer.UserID, IsReady = _gamer.IsReady };
                    //     broadcastMessage.Gamers.Add(info);
                    // }
                    //
                    // //发送房间玩家信息
                    // ActorMessageSender actorProxy = gamer.GetComponent<UnitGateComponent>().GetActorMessageSender();
                    // actorProxy.Send(broadcastMessage);
                    //
                    // List<GamerCardNum> gamersCardNum = new List<GamerCardNum>();
                    // List<GamerState> gamersState = new List<GamerState>();
                    // GameControllerComponent gameController = room.GetComponent<GameControllerComponent>();
                    // OrderControllerComponent orderController = room.GetComponent<OrderControllerComponent>();
                    // DeskCardsCacheComponent deskCardsCache = room.GetComponent<DeskCardsCacheComponent>();
                    //
                    // foreach (Gamer _gamer in room.GetAll())
                    // {
                    //     HandCardsComponent handCards = _gamer.GetComponent<HandCardsComponent>();
                    //     gamersCardNum.Add(new GamerCardNum()
                    //     {
                    //         UserID = _gamer.UserID,
                    //         Num = _gamer.GetComponent<HandCardsComponent>().GetAll().Length
                    //     });
                    //     GamerState gamerState = new GamerState()
                    //     {
                    //         UserID = _gamer.UserID,
                    //         UserIdentity = handCards.AccessIdentity
                    //     };
                    //     if (orderController.GamerLandlordState.TryGetValue(_gamer.UserID, out bool state))
                    //     {
                    //         if (state)
                    //         {
                    //             gamerState.State = GrabLandlordState.Grab;
                    //         }
                    //         else
                    //         {
                    //             gamerState.State = GrabLandlordState.UnGrab;
                    //         }
                    //     }
                    //     gamersState.Add(gamerState);
                    // }
                    //
                    // //发送游戏开始消息
                    // Actor_GameStart_Ntt gameStartNotice = new Actor_GameStart_Ntt();
                    // gameStartNotice.HandCards.AddRange(gamer.GetComponent<HandCardsComponent>().GetAll());
                    // gameStartNotice.GamersCardNum.AddRange(gamersCardNum);
                    // actorProxy.Send(gameStartNotice);
                    //
                    // Card[] lordCards = null;
                    //
                    // if (gamer.GetComponent<HandCardsComponent>().AccessIdentity == Identity.None)
                    // {
                    //     //广播先手玩家
                    //     actorProxy.Send(new Actor_AuthorityGrabLandlord_Ntt() { UserID = orderController.CurrentAuthority });
                    // }
                    // else
                    // {
                    //     if (gamer.UserID == orderController.CurrentAuthority)
                    //     {
                    //         //发送可以出牌消息
                    //         bool isFirst = gamer.UserID == orderController.Biggest;
                    //         actorProxy.Send(new Actor_AuthorityPlayCard_Ntt() { UserID = orderController.CurrentAuthority, IsFirst = isFirst });
                    //     }
                    //     lordCards = deskCardsCache.LordCards.ToArray();
                    // }
                    // //发送重连数据
                    // Actor_GamerReconnect_Ntt reconnectNotice = new Actor_GamerReconnect_Ntt()
                    // {
                    //     UserId = orderController.Biggest,
                    //     Multiples = room.GetComponent<GameControllerComponent>().Multiples
                    // };
                    // reconnectNotice.GamersState.AddRange(gamersState);
                    // reconnectNotice.Cards.AddRange(deskCardsCache.library);
                    // if (lordCards != null)
                    // {
                    //     reconnectNotice.LordCards.AddRange(lordCards);
                    // }
                    // actorProxy.Send(reconnectNotice);
                    //
                    // Log.Info($"玩家{message.UserID}重连");
                }

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

