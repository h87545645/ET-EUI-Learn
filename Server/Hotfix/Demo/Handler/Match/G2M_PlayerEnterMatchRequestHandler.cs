using System;

namespace ET.Match
{
    public class G2M_PlayerEnterMatchRequestHandler: AMRpcHandler<G2M_PlayerEnterMatchRequest, M2G_PlayerEnterMatchResponse>
    {
        protected override ETTask Run(Session session, G2M_PlayerEnterMatchRequest request, M2G_PlayerEnterMatchResponse response, Action reply)
        {
            M2G_PlayerEnterMatchResponse m2gPlayerEnterMatchResponse = new M2G_PlayerEnterMatchResponse();
            // try
            // {
            //     MatchComponent matchComponent = Game.Scene.GetComponent<MatchComponent>();
            //     ActorMessageSenderComponent actorProxyComponent = Game.Scene.GetComponent<ActorMessageSenderComponent>();
            //
            //     if (matchComponent.Playing.ContainsKey(message.UserID))
            //     {
            //         MatchRoomComponent matchRoomComponent = Game.Scene.GetComponent<MatchRoomComponent>();
            //         long roomId = matchComponent.Playing[message.UserID];
            //         Room room = matchRoomComponent.Get(roomId);
            //         Gamer gamer = room.Get(message.UserID);
            //
            //         //重置GateActorID
            //         gamer.PlayerID = message.PlayerID;
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
            //     }
            //     else
            //     {
            //         //创建匹配玩家
            //         Matcher matcher = MatcherFactory.Create(message.PlayerID, message.UserID, message.SessionID);
            //     }
            //
            //     reply(response);
            // }
            // catch (Exception e)
            // {
            //     ReplyError(response, e, reply);
            // }
            throw new NotImplementedException();
        }
    }
}