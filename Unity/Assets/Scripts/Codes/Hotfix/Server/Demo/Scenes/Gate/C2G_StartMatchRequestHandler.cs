namespace ET.Server
{
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
            unit.isOffline = false;
            await  EnterMapHelper.EnterMap(player , session.InstanceId, roomId , unit.InstanceId);
            room.State = RoomState.Game;
        
            
        }
        else
        {
            //创建匹配玩家
            //删除原来的
            if (session.DomainScene().GetComponent<MatcherComponent>().GetChild<Matcher>(player.UserID) != null)
            {
                session.DomainScene().GetComponent<MatcherComponent>().RemoveChild(player.UserID);
            }

            if ( session.DomainScene().GetComponent<MatcherComponent>().Get(player.UserID) != null)
            {
                session.DomainScene().GetComponent<MatcherComponent>().Remove(player.UserID);
            }
            
            //加入匹配队列
            Matcher matcher = session.DomainScene().GetComponent<MatcherComponent>().AddChild<Matcher, long>(player.UserID);
            matcher.PlayerID = player.Id;
            matcher.session = session;
            session.DomainScene().GetComponent<MatcherComponent>().Add(matcher);
            Log.Info($"玩家{player.UserID}加入匹配队列");
        }
        
        
        player.IsMatching = true;
        
        await ETTask.CompletedTask;
        
        
    }
}
}

  
