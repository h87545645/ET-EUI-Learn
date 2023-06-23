
using UnityEngine;
using UnityEngine.UI;
namespace ET.Client
{
	[EnableMethod]
	[ChildOf]
	public  class ESLangButton : Entity,ET.IAwake<UnityEngine.Transform>,IDestroy 
	{
		public UnityEngine.UI.Button E_LangButtonButton
     	{
     		get
     		{
     			if (this.uiTransform == null)
     			{
     				Log.Error("uiTransform is null.");
     				return null;
     			}
     			if( this.m_E_LangButtonButton == null )
     			{
		    		this.m_E_LangButtonButton = UIFindHelper.FindDeepChild<UnityEngine.UI.Button>(this.uiTransform.gameObject,"E_LangButton");
     			}
     			return this.m_E_LangButtonButton;
     		}
     	}

		public void DestroyWidget()
		{
			this.m_E_LangButtonButton = null;
			this.uiTransform = null;
		}

		private UnityEngine.UI.Button m_E_LangButtonButton = null;
		public Transform uiTransform = null;
	}
}
