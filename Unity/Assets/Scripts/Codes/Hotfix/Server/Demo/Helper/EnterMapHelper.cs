using System;

namespace ET.Server
{
    [FriendOf(typeof(GateMapComponent))]
    [FriendOf(typeof(RoomComponent))]
    public static class EnterMapHelper
    {
        public static async ETTask EnterMap(Player player , long sessionId , long roomId , long unitInstanceId)
        {
            // Player player = session.GetComponent<SessionPlayerComponent>().GetMyPlayer();

            try
            {
         
                await LocationProxyComponent.Instance.Lock(player.Id,unitInstanceId);
                StartSceneConfig startSceneConfig = StartSceneConfigCategory.Instance.GetBySceneName(player.DomainScene().Zone, "FragGameMap");
                M2G_PlayerEnterRoomResponse m2gPlayerEnterRoom = await ActorMessageSenderComponent.Instance.Call
                (startSceneConfig.InstanceId,new G2M_PlayerEnterRoomRequest()
                {
                    PlayerID = player.Id,
                    UserID = player.UserID,
                    SessionID = sessionId,
                    RoomID = roomId,
                    OldInstanceId = unitInstanceId,
                    PlayerName = player.PlayerInfo.NickName
                }) as M2G_PlayerEnterRoomResponse;
                
            }
            catch (Exception e)
            {
                Log.Error(e);
            }
        }
                
    }
}

