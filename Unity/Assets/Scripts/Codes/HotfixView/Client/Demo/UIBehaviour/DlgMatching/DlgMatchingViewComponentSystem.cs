
using UnityEngine;
using UnityEngine.UI;
namespace ET.Client
{
	[ObjectSystem]
	public class DlgMatchingViewComponentAwakeSystem : AwakeSystem<DlgMatchingViewComponent> 
	{
		protected override void Awake(DlgMatchingViewComponent self)
		{
			self.uiTransform = self.Parent.GetParent<UIBaseWindow>().uiTransform;
		}
	}


	[ObjectSystem]
	public class DlgMatchingViewComponentDestroySystem : DestroySystem<DlgMatchingViewComponent> 
	{
		protected override void Destroy(DlgMatchingViewComponent self)
		{
			self.DestroyWidget();
		}
	}
}
