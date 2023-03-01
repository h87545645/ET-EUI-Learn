using System;
using System.Collections.Generic;
using Unity.Mathematics;

namespace ET.Server
{
	[ActorMessageHandler(SceneType.Map)]
	[FriendOf(typeof(Room))]
	public class M2M_UnitTransferRequestHandler : AMActorRpcHandler<Scene, M2M_UnitTransferRequest, M2M_UnitTransferResponse>
	{
		protected override async ETTask Run(Scene scene, M2M_UnitTransferRequest request, M2M_UnitTransferResponse response)
		{
			UnitComponent unitComponent = scene.GetComponent<UnitComponent>();
			
	
			
			Unit myUnit = MongoHelper.Deserialize<Unit>(request.Unit);
			
			
		
			// foreach (byte[] bytes in request.Entitys)
			// {
			// 	Entity entity = MongoHelper.Deserialize<Entity>(bytes);
			// 	myUnit.AddComponent(entity);
			// }
			//
	
	
			
		
			M2C_CreateMyUnit m2CCreateUnits = new M2C_CreateMyUnit(){Units = new List<UnitInfo>()};
			// 通知客户端创建房间所有 Unit
			Room room = MongoHelper.Deserialize<Room>(request.Room);
			for (int i = 0; i < room.units.Length; i++)
			{
				Unit unit = room.units[i];
				unitComponent.AddChild(unit);
				unitComponent.Add(unit);
				foreach (byte[] bytes in request.unitComp[i].Entitys)
				{
					Entity entity = MongoHelper.Deserialize<Entity>(bytes);
					unit.AddComponent(entity);
				}

				UnitInfo info = UnitHelper.CreateUnitInfo(unit);
				m2CCreateUnits.Units.Add(info);
				
				


				m2CCreateUnits.Units[i].Position = room.playerDefaultPos[i];
			
				unit.AddComponent<MoveComponent>();
				// unit.AddComponent<PathfindingComponent, string>(scene.Name);
				// unit.Position = new float3(0, 0, 0);
			
				unit.AddComponent<MailBoxComponent>();
				if (unit.UserID == myUnit.UserID)
				{
					myUnit = unit;
					// 通知客户端开始切场景
					M2C_StartSceneChange m2CStartSceneChange = new M2C_StartSceneChange() {SceneInstanceId = scene.InstanceId, SceneName = scene.Name};
					MessageHelper.SendToClient(myUnit, m2CStartSceneChange);
				}
			}
			
			MessageHelper.SendToClient(myUnit, m2CCreateUnits);
			
			// 加入aoi
			// unit.AddComponent<AOIEntity, int, float3>(9 * 1000, unit.Position);
			
			// 解锁location，可以接收发给Unit的消息
			await LocationProxyComponent.Instance.UnLock(myUnit.Id, request.OldInstanceId, myUnit.InstanceId);
		}
	}
}