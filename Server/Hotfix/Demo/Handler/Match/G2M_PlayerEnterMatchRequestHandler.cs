using System;

namespace ET.Match
{
    [FriendClass(typeof(MatchComponent))]
    public class G2M_PlayerEnterMatchRequestHandler: AMRpcHandler<G2M_PlayerEnterMatchRequest, M2G_PlayerEnterMatchResponse>
    {
        protected override async ETTask Run(Session session, G2M_PlayerEnterMatchRequest message, M2G_PlayerEnterMatchResponse response, Action reply)
        {
            //TODO 本来想单独做个map来匹配， 暂时改为gate上直接匹配了
            
            await ETTask.CompletedTask;
            
            // M2G_PlayerEnterMatchResponse m2gPlayerEnterMatchResponse = new M2G_PlayerEnterMatchResponse();
            // try
            // {
            //     MatchComponent matchComponent = Game.Scene.GetComponent<MatchComponent>();
            //     ActorMessageSenderComponent actorProxyComponent = Game.Scene.GetComponent<ActorMessageSenderComponent>();
            //
            //     if (matchComponent.Playing.ContainsKey(message.UserID))
            //     {
            //         
            //         //TODO 重连
            //         
            //         MatchRoomComponent matchRoomComponent = Game.Scene.GetComponent<MatchRoomComponent>();
            //         long roomId = matchComponent.Playing[message.UserID];
            //         Room room = matchRoomComponent.Get(roomId);
            //         Unit unit = room.Get(message.UserID);
            //
            //         //重置GateActorID
            //         gamer.PlayerID = message.PlayerID;
            //
            //         
            //         //重连房间
            //         ActorMessageSender actorProxy = actorProxyComponent.Get(roomId);
            //         await actorProxy.Call(new Actor_PlayerEnterRoom_Req()
            //         {
            //             PlayerID = message.PlayerID,
            //             UserID = message.UserID,
            //             SessionID = message.SessionID
            //         });
            //
            //         //向玩家发送匹配成功消息
            //         ActorMessageSender gamerActorProxy = actorProxyComponent.Get(gamer.PlayerID);
            //         gamerActorProxy.Send(new Actor_MatchSucess_Ntt() { GamerID = gamer.Id });
            //         
            //         
            //         
            //         
            //         // 向gate请求一个key,客户端可以拿着这个key连接gate
            //         // G2R_GetLoginKey g2RGetLoginKey = (G2R_GetLoginKey) await ActorMessageSenderComponent.Instance.Call(
            //         //     config.InstanceId, new R2G_GetLoginKey() {Account = request.Account});
            //     }
            //     else
            //     {
            //         //创建匹配玩家
            //         Matcher matcher = MatcherFactory.Create(message.PlayerID, message.UserID, message.SessionID);
            //     }
            //
            //     reply();
            // }
            // catch (Exception e)
            // {
            //     Log.Error(e);
            // }
         
            
        }
    }
}