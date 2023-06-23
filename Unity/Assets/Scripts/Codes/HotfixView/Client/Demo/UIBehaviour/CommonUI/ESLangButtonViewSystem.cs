
using UnityEngine;
using UnityEngine.UI;
namespace ET.Client
{
	[ObjectSystem]
	public class ESLangButtonAwakeSystem : AwakeSystem<ESLangButton,Transform> 
	{
		protected override void Awake(ESLangButton self,Transform transform)
		{
			self.uiTransform = transform;
		}
	}


	[ObjectSystem]
	public class ESLangButtonDestroySystem : DestroySystem<ESLangButton> 
	{
		protected override void Destroy(ESLangButton self)
		{
			self.DestroyWidget();
		}
	}
}
