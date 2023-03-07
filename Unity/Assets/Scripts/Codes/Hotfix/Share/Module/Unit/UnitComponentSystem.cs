using System.Collections.Generic;

namespace ET
{
	[ObjectSystem]
	public class UnitComponentAwakeSystem : AwakeSystem<UnitComponent>
	{
		protected override void Awake(UnitComponent self)
		{
		}
	}
	
	[ObjectSystem]
	public class UnitComponentDestroySystem : DestroySystem<UnitComponent>
	{
		protected override void Destroy(UnitComponent self)
		{
		}
	}
	
	[FriendOf(typeof(UnitComponent))]
	public static class UnitComponentSystem
	{
		public static void Add(this UnitComponent self, Unit unit)
		{
			self.AllUnits.TryAdd(unit.Id, unit);
		}

		public static Unit Get(this UnitComponent self, long id)
		{
			Unit unit = self.GetChild<Unit>(id);
			return unit;
		}
		
		public static Dictionary<long,Unit> GetAll(this UnitComponent self)
		{
			return self.AllUnits;
		} 

		public static void Remove(this UnitComponent self, long id)
		{
			if (self.AllUnits.ContainsKey(id))
			{
				self.AllUnits.Remove((id));
			}
			Unit unit = self.GetChild<Unit>(id);
			unit?.Dispose();
		}
	}
}