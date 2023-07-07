
using UnityEngine;
using UnityEngine.UI;
namespace ET.Client
{
	[ObjectSystem]
	public class DlgWatchAdViewComponentAwakeSystem : AwakeSystem<DlgWatchAdViewComponent> 
	{
		protected override void Awake(DlgWatchAdViewComponent self)
		{
			self.uiTransform = self.Parent.GetParent<UIBaseWindow>().uiTransform;
		}
	}


	[ObjectSystem]
	public class DlgWatchAdViewComponentDestroySystem : DestroySystem<DlgWatchAdViewComponent> 
	{
		protected override void Destroy(DlgWatchAdViewComponent self)
		{
			self.DestroyWidget();
		}
	}
}
