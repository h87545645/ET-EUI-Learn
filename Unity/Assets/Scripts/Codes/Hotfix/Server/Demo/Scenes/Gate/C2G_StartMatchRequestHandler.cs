namespace ET.Server;

  
[MessageHandler(SceneType.Gate)]
[FriendOf(typeof(MatchComponent))]
public class C2G_StartMatchRequestHandler: AMRpcHandler<C2G_StartMatchRequest, G2C_StartMatchResponse>
{
    protected override async ETTask Run(Session session, C2G_StartMatchRequest request, G2C_StartMatchResponse response)
    {
     
        // User user = session.GetComponent<SessionUserComponent>().User;

        Player player = null;
        //如果是测试机器人匹配
        if (request.RobotMatch)
        {
            Scene scene = session.DomainScene();
            PlayerComponent playerComponent = scene.GetComponent<PlayerComponent>();
            player = playerComponent.AddChild<Player, string ,long>("robot",010101);
            scene.GetComponent<PlayerComponent>().Add(player);
            // playerComponent.Add(player);
        }
        else
        {
            player = session.GetComponent<SessionPlayerComponent>().GetMyPlayer();
        }
        
        //向匹配服务器发送匹配请求
        // StartSceneConfig startSceneConfig = StartSceneConfigCategory.Instance.GetBySceneName(session.DomainZone(), "Map1");
        // M2G_PlayerEnterMatchResponse m2gPlayerEnterMatch = (M2G_PlayerEnterMatchResponse) await ActorMessageSenderComponent.Instance.Call(
        //     session.InstanceId, new G2M_PlayerEnterMatchRequest()
        //     {
        //         PlayerID = player.Id,
        //         UserID = player.UserID,
        //         SessionID = session.InstanceId,
        //     });
        //这里先发送响应，让客户端收到后展示匹配中，否则可能会出现重连消息在切换到房间界面之前发送导致重连异常
  

        
        MatchComponent matchComponent = session.DomainScene().GetComponent<MatchComponent>();
        if (matchComponent.Playing.ContainsKey(player.UserID))
        {
                
            //TODO 重连
                
            MatchRoomComponent matchRoomComponent = session.DomainScene().GetComponent<MatchRoomComponent>();
            long roomId = matchComponent.Playing[player.UserID];
            Room room = matchRoomComponent.Get(roomId);
            Unit unit = room.Get(player.UserID);
        
            //重置GateActorID
            // unit.PlayerID = player.Id;
            
            //进入房间
            await EnterMapHelper.EnterMap(player , session ,unit);
        
                
            //重连房间
            // ActorMessageSender actorProxy = actorProxyComponent.Get(roomId);
            // await actorProxy.Call(new Actor_PlayerEnterRoom_Req()
            // {
            //     PlayerID = message.PlayerID,
            //     UserID = message.UserID,
            //     SessionID = message.SessionID
            // });
            //
            // //向玩家发送匹配成功消息
            // ActorMessageSender gamerActorProxy = actorProxyComponent.Get(gamer.PlayerID);
            // gamerActorProxy.Send(new Actor_MatchSucess_Ntt() { GamerID = gamer.Id });
            //     
            // MessageHelper.SendToClient(unit, new M2C_Stop()
            // {
            //     Error = error,
            //     Id = unit.Id, 
            //     X = unit.Position.x,
            //     Y = unit.Position.y,
            //     Z = unit.Position.z,
						      //
            //     A = unit.Rotation.x,
            //     B = unit.Rotation.y,
            //     C = unit.Rotation.z,
            //     W = unit.Rotation.w,
            // });
                
                
            // 向gate请求一个key,客户端可以拿着这个key连接gate
            // G2R_GetLoginKey g2RGetLoginKey = (G2R_GetLoginKey) await ActorMessageSenderComponent.Instance.Call(
            //     config.InstanceId, new R2G_GetLoginKey() {Account = request.Account});
        }
        else
        {
            //创建匹配玩家

            //加入匹配队列
            Matcher matcher = session.DomainScene().GetComponent<MatcherComponent>().AddChild<Matcher, long>(player.Id);
            matcher.PlayerID = player.UserID;
            matcher.session = session;
            session.DomainScene().GetComponent<MatcherComponent>().Add(matcher);
            Log.Info($"玩家{player.UserID}加入匹配队列");
        }
        
        
        player.IsMatching = true;
        
        
        
        
    }
}