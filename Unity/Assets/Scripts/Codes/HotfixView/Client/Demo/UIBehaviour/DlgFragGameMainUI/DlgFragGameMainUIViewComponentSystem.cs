
using UnityEngine;
using UnityEngine.UI;
namespace ET.Client
{
	[ObjectSystem]
	public class DlgFragGameMainUIViewComponentAwakeSystem : AwakeSystem<DlgFragGameMainUIViewComponent> 
	{
		protected override void Awake(DlgFragGameMainUIViewComponent self)
		{
			self.uiTransform = self.Parent.GetParent<UIBaseWindow>().uiTransform;
		}
	}


	[ObjectSystem]
	public class DlgFragGameMainUIViewComponentDestroySystem : DestroySystem<DlgFragGameMainUIViewComponent> 
	{
		protected override void Destroy(DlgFragGameMainUIViewComponent self)
		{
			self.DestroyWidget();
		}
	}
}
