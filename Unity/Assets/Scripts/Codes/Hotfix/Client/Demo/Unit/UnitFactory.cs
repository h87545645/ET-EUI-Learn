using Unity.Mathematics;

namespace ET.Client
{
	[FriendOf(typeof(UnitComponent))]
    public static class UnitFactory
    {
        public static Unit Create(Scene currentScene, UnitInfo unitInfo)
        {
	        UnitComponent unitComponent = currentScene.GetComponent<UnitComponent>();
	        Unit unit = unitComponent.AddChildWithId<Unit, int>(unitInfo.UnitId, unitInfo.ConfigId);
	        unitComponent.Add(unit);
	        /*
			*@Author: TimTian
			*@Description:
			*@Date: 2023年02月25日 星期六 13:02:26
			*@Modify:
			*/
	        if (unit.Type == UnitType.NPC)
	        {
		        unitComponent.PelicanUnitId = unit.Id;
	        }
	        
	        unit.Position = unitInfo.Position;
	        unit.Forward = unitInfo.Forward;
	        unit.UserID = unitInfo.UserId;
	        unit.RoomID = unitInfo.RoomId;
	        unit.PlayerId = unitInfo.PlayerId;
	        NumericComponent numericComponent = unit.AddComponent<NumericComponent>();

			foreach (var kv in unitInfo.KV)
			{
				numericComponent.Set(kv.Key, kv.Value);
			}
	        
	        unit.AddComponent<MoveComponent>();
	        if (unitInfo.MoveInfo != null)
	        {
		        if (unitInfo.MoveInfo.Points.Count > 0)
				{
					unitInfo.MoveInfo.Points[0] = unit.Position;
					unit.MoveToAsync(unitInfo.MoveInfo.Points).Coroutine();
				}
	        }

	        unit.AddComponent<ObjectWait>();

	        // unit.AddComponent<XunLuoPathComponent>();

	     
	       
	        
	        EventSystem.Instance.Publish(unit.DomainScene(), new EventType.AfterUnitCreate() {Unit = unit});
            return unit;
        }
    }
}
