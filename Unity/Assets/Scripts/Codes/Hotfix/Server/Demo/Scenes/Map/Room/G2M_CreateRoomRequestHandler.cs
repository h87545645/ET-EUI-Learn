using System;

namespace ET.Server
{
    [ActorMessageHandler(SceneType.Map)]
    public class G2M_CreateRoomRequestHandler: AMActorRpcHandler<Scene, G2M_CreateRoomRequest, M2G_CreateRoomResponse>
    {
        protected override async ETTask Run(Scene scene, G2M_CreateRoomRequest request, M2G_CreateRoomResponse response)
        {
            try
            {
                //创建房间
                Room room = scene.DomainScene().GetComponent<RoomComponent>().AddChild<Room>();
                scene.DomainScene().GetComponent<RoomComponent>().Add(room);

                Log.Info($"创建房间{room.InstanceId}");

                response.RoomID = room.InstanceId;
                
            }
            catch (Exception e)
            {
                Log.Error(e);
            }
        }
    }
}

