
using UnityEngine;
using UnityEngine.UI;
namespace ET.Client
{
	[ObjectSystem]
	public class DlgFrogMenuViewComponentAwakeSystem : AwakeSystem<DlgFrogMenuViewComponent> 
	{
		protected override void Awake(DlgFrogMenuViewComponent self)
		{
			self.uiTransform = self.Parent.GetParent<UIBaseWindow>().uiTransform;
		}
	}


	[ObjectSystem]
	public class DlgFrogMenuViewComponentDestroySystem : DestroySystem<DlgFrogMenuViewComponent> 
	{
		protected override void Destroy(DlgFrogMenuViewComponent self)
		{
			self.DestroyWidget();
		}
	}
}
