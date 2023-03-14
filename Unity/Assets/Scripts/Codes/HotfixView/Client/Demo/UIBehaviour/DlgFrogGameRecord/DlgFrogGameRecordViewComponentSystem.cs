
using UnityEngine;
using UnityEngine.UI;
namespace ET.Client
{
	[ObjectSystem]
	public class DlgFrogGameRecordViewComponentAwakeSystem : AwakeSystem<DlgFrogGameRecordViewComponent> 
	{
		protected override void Awake(DlgFrogGameRecordViewComponent self)
		{
			self.uiTransform = self.Parent.GetParent<UIBaseWindow>().uiTransform;
		}
	}


	[ObjectSystem]
	public class DlgFrogGameRecordViewComponentDestroySystem : DestroySystem<DlgFrogGameRecordViewComponent> 
	{
		protected override void Destroy(DlgFrogGameRecordViewComponent self)
		{
			self.DestroyWidget();
		}
	}
}
