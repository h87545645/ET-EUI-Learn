
using System.Collections.Generic;
using System.Net;
using ET.Server;

namespace ET
{
   

    [FriendOf(typeof(MatchComponent))]
    [FriendOf(typeof(GateMapComponent))]
    public static class MatchComponentSystem
    {
        
        [ObjectSystem]
        public class MatchComponentUpdateSystem : UpdateSystem<MatchComponent>
        {
            protected override void Update(MatchComponent self)
            {
                self.Update();
            }
        }
        public static void Update(this MatchComponent self)
        {
            while (true)
            {
                MatcherComponent matcherComponent = self.DomainScene().GetComponent<MatcherComponent>();
                Queue<Matcher> matchers = new Queue<Matcher>(matcherComponent.GetAll());
                MatchRoomComponent roomManager = self.DomainScene().GetComponent<MatchRoomComponent>();
                Room room = roomManager.GetReadyRoom();

                if (matchers.Count == 0)
                {
                    //当没有匹配玩家时直接结束
                    break;
                }

                if (room == null && matchers.Count >= 2)
                {
                    //当还有一桌匹配玩家且没有可加入房间时使用空房间
                    room = roomManager.GetIdleRoom();
                }

                if (room != null)
                {
                    //当有准备状态房间且房间还有空位时匹配玩家直接加入填补空位
                    while (matchers.Count > 0 && room.Count < 2)
                    {
                        self.JoinRoom(room, matcherComponent.Remove(matchers.Dequeue().UserID));
                    }
                }
                else if (matchers.Count >= 2)
                {
                    //当还有一桌匹配玩家且没有空房间时创建新房间
                    self.CreateRoom();
                    break;
                }
                else
                {
                    break;
                }

                //移除匹配成功玩家
                while (self.MatchSuccessQueue.Count > 0)
                {
                    matcherComponent.Remove(self.MatchSuccessQueue.Dequeue().UserID);
                }
            }
        }

        /// <summary>
        /// 创建房间
        /// </summary>
        /// <param name="self"></param>
        public static async void CreateRoom(this MatchComponent self)
        {
            if (self.CreateRoomLock)
            {
                return;
            }

            //消息加锁，避免因为延迟重复发多次创建消息
            self.CreateRoomLock = true;
            
            StartSceneConfig startSceneConfig = StartSceneConfigCategory.Instance.GetBySceneName(self.DomainScene().Zone, "FragGameMap");
            M2G_CreateRoomResponse m2GCreateRoom = (M2G_CreateRoomResponse) await ActorMessageSenderComponent.Instance.Call(
                startSceneConfig.InstanceId, new G2M_CreateRoomRequest());
            
            Room room = self.DomainScene().GetComponent<MatchRoomComponent>().AddChildWithId<Room>(m2GCreateRoom.RoomID);
            // self.DomainScene().GetComponent<RoomComponent>().Add(room);
            self.DomainScene().GetComponent<MatchRoomComponent>().Add(room);
            //解锁
            self.CreateRoomLock = false;
        }

        /// <summary>
        /// 加入房间
        /// </summary>
        /// <param name="self"></param>
        /// <param name="room"></param>
        /// <param name="matcher"></param>
        public static async void JoinRoom(this MatchComponent self, Room room, Matcher matcher)
        {
            //玩家加入房间，移除匹配队列
            self.Playing[matcher.UserID] = room.Id;
            self.MatchSuccessQueue.Enqueue(matcher);
            
            Player player = null;
            //测试机器人匹配
            if (matcher.UserID == 010101)
            {
                player = matcher.session.DomainScene().GetComponent<PlayerComponent>().Get(matcher.PlayerID);
            }
            else
            {
                player = matcher.session.GetComponent<SessionPlayerComponent>().GetMyPlayer();
            }

            GateMapComponent gateMapComponent = null;
            if (player.GetComponent<GateMapComponent>() == null)
            {
                gateMapComponent = player.AddComponent<GateMapComponent>();
                gateMapComponent.Scene = await SceneFactory.CreateServerScene(gateMapComponent, player.Id, IdGenerater.Instance.GenerateInstanceId(), gateMapComponent.DomainZone(), "GateMap", SceneType.Map);
            }
            else
            {
                gateMapComponent = player.GetComponent<GateMapComponent>();
            }
          
           
            Scene scene = gateMapComponent.Scene;
            
            Unit gamer = UnitFactory.Create(scene,matcher.PlayerID, UnitType.Player);
            await LocationProxyComponent.Instance.Lock(gamer.Id, gamer.InstanceId);
            gamer.UserID = matcher.UserID;
            gamer.RoomID = room.Id;
            gamer.PlayerId = matcher.PlayerID;
            gamer.AddComponent<MailBoxComponent>();
            room.Add(gamer);
           
            // Session session = matcher.GateSessionID;
            //向房间服务器发送玩家进入请求
            StartSceneConfig startSceneConfig = StartSceneConfigCategory.Instance.GetBySceneName(self.DomainScene().Zone, "FragGameMap");
            M2G_PlayerEnterRoomResponse m2gPlayerEnterRoom = await ActorMessageSenderComponent.Instance.Call
                    (startSceneConfig.InstanceId,new G2M_PlayerEnterRoomRequest()
                    {
                        PlayerID = matcher.PlayerID,
                        UserID = matcher.UserID,
                        SessionID = matcher.session.InstanceId,
                        RoomID = room.Id,
                        OldInstanceId = gamer.InstanceId
                    }) as M2G_PlayerEnterRoomResponse;
            
            
        
            room.State = RoomState.Game;
            
            
            
            // 在Gate上动态创建一个Map Scene，把Unit从DB中加载放进来，然后传送到真正的Map中，这样登陆跟传送的逻辑就完全一样了
            // GateMapComponent gateMapComponent = player.AddComponent<GateMapComponent>();
            // gateMapComponent.Scene = await SceneFactory.CreateServerScene(gateMapComponent, player.Id, IdGenerater.Instance.GenerateInstanceId(), gateMapComponent.DomainZone(), "GateMap", SceneType.Map);
            //
            // Scene scene = gateMapComponent.Scene;
            // ActorMessageSender actorProxy = Game.Scene.GetComponent<ActorMessageSenderComponent>().Get(room.Id);
            // IResponse response = await actorProxy.Call(new Actor_PlayerEnterRoom_Req()
            // {
            //     PlayerID = matcher.PlayerID,
            //     UserID = matcher.UserID,
            //     SessionID = matcher.GateSessionID
            // });
            // Actor_PlayerEnterRoom_Ack actor_PlayerEnterRoom_Ack = response as Actor_PlayerEnterRoom_Ack;
           
            // Session session = self.GetParent<Session>();
            // Player player = null;
            // //测试机器人匹配
            // if (matcher.UserID == 010101)
            // {
            //     player = session.DomainScene().GetComponent<PlayerComponent>().Get(matcher.PlayerID);
            // }
            // else
            // {
            //     player = session.GetComponent<SessionPlayerComponent>().GetMyPlayer();
            // }
            //
            // player.RoomId = room.InstanceId;
            // await EnterMapHelper.EnterMap(player,session,null,room , matcher.UserID == 010101);
            // room.State = RoomState.Game;


            //
            // Gamer gamer = GamerFactory.Create(matcher.PlayerID, matcher.UserID, m2gPlayerEnterRoomRequest.GamerID);
            // room.Add(unit);
            // session?.Dispose();

            //向玩家发送匹配成功消息
            // ActorMessageSenderComponent actorProxyComponent = Game.Scene.GetComponent<ActorMessageSenderComponent>();
            // ActorMessageSender gamerActorProxy = actorProxyComponent.Get(gamer.PlayerID);
            // gamerActorProxy.Send(new Actor_MatchSucess_Ntt() { GamerID = gamer.Id });
        }
    }
}
