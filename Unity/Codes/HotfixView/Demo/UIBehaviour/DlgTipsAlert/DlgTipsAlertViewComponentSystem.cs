
using UnityEngine;
using UnityEngine.UI;
namespace ET
{
	[ObjectSystem]
	public class DlgTipsAlertViewComponentAwakeSystem : AwakeSystem<DlgTipsAlertViewComponent> 
	{
		public override void Awake(DlgTipsAlertViewComponent self)
		{
			self.uiTransform = self.GetParent<UIBaseWindow>().uiTransform;
		}
	}


	[ObjectSystem]
	public class DlgTipsAlertViewComponentDestroySystem : DestroySystem<DlgTipsAlertViewComponent> 
	{
		public override void Destroy(DlgTipsAlertViewComponent self)
		{
			self.DestroyWidget();
		}
	}
}
