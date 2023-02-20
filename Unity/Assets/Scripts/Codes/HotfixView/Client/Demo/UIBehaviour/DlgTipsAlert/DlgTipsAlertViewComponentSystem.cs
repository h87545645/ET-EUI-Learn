
using UnityEngine;
using UnityEngine.UI;
namespace ET.Client
{
	[ObjectSystem]
	public class DlgTipsAlertViewComponentAwakeSystem : AwakeSystem<DlgTipsAlertViewComponent> 
	{
		protected override void Awake(DlgTipsAlertViewComponent self)
		{
			self.uiTransform = self.Parent.GetParent<UIBaseWindow>().uiTransform;
		}
	}


	[ObjectSystem]
	public class DlgTipsAlertViewComponentDestroySystem : DestroySystem<DlgTipsAlertViewComponent> 
	{
		protected override void Destroy(DlgTipsAlertViewComponent self)
		{
			self.DestroyWidget();
		}
	}
}
