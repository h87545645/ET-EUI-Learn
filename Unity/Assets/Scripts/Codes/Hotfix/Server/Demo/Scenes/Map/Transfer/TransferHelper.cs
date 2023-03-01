using System.Collections.Generic;
using MongoDB.Bson;

namespace ET.Server
{
    [FriendOf(typeof(Room))]
    public static class TransferHelper
    {
        public static async ETTask TransferAtFrameFinish(Unit unit, long sceneInstanceId, string sceneName, Room room = null)
        {
            await Game.WaitFrameFinish();

            await TransferHelper.Transfer(unit, sceneInstanceId, sceneName , room);
        }
        

        public static async ETTask Transfer(Unit unit, long sceneInstanceId, string sceneName, Room room = null)
        {
            // location加锁
            long unitId = unit.Id;
            long unitInstanceId = unit.InstanceId;
            
            
            M2M_UnitTransferRequest request = new M2M_UnitTransferRequest() {unitComp = new List<UnitComp>() , Entitys = new List<byte[]>()};
            request.OldInstanceId = unitInstanceId;
            request.Unit = unit.ToBson();
            request.Room = room.ToBson();
            for (int i = 0; i < room.units.Length; i++)
            {
                List<byte[]> enti = new List<byte[]>();
                foreach (Entity entity in room.units[i].Components.Values)
                {
                    if (entity is ITransfer)
                    {
                        enti.Add(entity.ToBson());
                    }
                }
                request.unitComp.Add(new UnitComp(){Entitys = enti});
            }
            // foreach (Entity entity in unit.Components.Values)
            // {
            //     if (entity is ITransfer)
            //     {
            //         request.Entitys.Add(entity.ToBson());
            //     }
            // }
            
            unit.Dispose();
            
            await LocationProxyComponent.Instance.Lock(unitId, unitInstanceId);
            await ActorMessageSenderComponent.Instance.Call(sceneInstanceId, request);
   
        }
    }
}