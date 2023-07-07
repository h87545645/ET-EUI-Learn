using System.Collections.Generic;
using UnityEngine;

namespace ET.Client
{
	 [ComponentOf(typeof(UIBaseWindow))]
	public  class DlgRank :Entity,IAwake,IUILogic
	{

		public DlgRankViewComponent View { get => this.GetComponent<DlgRankViewComponent>();}

		public Dictionary<int, Scroll_Item_Rank> ScrollItemRanksDict;

		public List<Sprite> Medals;

		public List<GamePlayerInfo> Ranks;

	}
}
