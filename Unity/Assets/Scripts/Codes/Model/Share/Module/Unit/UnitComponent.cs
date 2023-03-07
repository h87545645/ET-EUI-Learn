using System.Collections.Generic;

namespace ET
{
	
	[ComponentOf(typeof(Scene))]
	public class UnitComponent: Entity, IAwake, IDestroy
	{
		public long PelicanUnitId;
		
		public Dictionary<long, Unit> AllUnits = new Dictionary<long, Unit>();
	}
}