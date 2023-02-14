using System.Collections.Generic;
using MongoDB.Bson;

namespace ET.Server
{
    public static class TransferHelper
    {
        public static async ETTask TransferAtFrameFinish(Unit unit, long sceneInstanceId, string sceneName, bool robot = false)
        {
            await Game.WaitFrameFinish();

            await TransferHelper.Transfer(unit, sceneInstanceId, sceneName , robot);
        }
        

        public static async ETTask Transfer(Unit unit, long sceneInstanceId, string sceneName, bool robot = false)
        {
            // location加锁
            long unitId = unit.Id;
            long unitInstanceId = unit.InstanceId;
            
           
            M2M_UnitTransferRequest request = new M2M_UnitTransferRequest() {Entitys = new List<byte[]>()};
            request.OldInstanceId = unitInstanceId;
            request.Unit = unit.ToBson();
            request.robot = robot;
            foreach (Entity entity in unit.Components.Values)
            {
                if (entity is ITransfer)
                {
                    request.Entitys.Add(entity.ToBson());
                }
            }
            unit.Dispose();
            
            await LocationProxyComponent.Instance.Lock(unitId, unitInstanceId);
            await ActorMessageSenderComponent.Instance.Call(sceneInstanceId, request);
   
        }
    }
}