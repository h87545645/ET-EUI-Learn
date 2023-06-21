
using UnityEngine;
using UnityEngine.UI;
namespace ET.Client
{
	[ComponentOf(typeof(DlgMatching))]
	[EnableMethod]
	public  class DlgMatchingViewComponent : Entity,IAwake,IDestroy 
	{
		public TMPro.TextMeshProUGUI E_TipTextMeshProUGUI
     	{
     		get
     		{
     			if (this.uiTransform == null)
     			{
     				Log.Error("uiTransform is null.");
     				return null;
     			}
     			if( this.m_E_TipTextMeshProUGUI == null )
     			{
		    		this.m_E_TipTextMeshProUGUI = UIFindHelper.FindDeepChild<TMPro.TextMeshProUGUI>(this.uiTransform.gameObject,"E_Tip");
     			}
     			return this.m_E_TipTextMeshProUGUI;
     		}
     	}

		public UnityEngine.UI.Button E_CancelMatchButtonButton
     	{
     		get
     		{
     			if (this.uiTransform == null)
     			{
     				Log.Error("uiTransform is null.");
     				return null;
     			}
     			if( this.m_E_CancelMatchButtonButton == null )
     			{
		    		this.m_E_CancelMatchButtonButton = UIFindHelper.FindDeepChild<UnityEngine.UI.Button>(this.uiTransform.gameObject,"E_CancelMatchButton");
     			}
     			return this.m_E_CancelMatchButtonButton;
     		}
     	}

		public void DestroyWidget()
		{
			this.m_E_TipTextMeshProUGUI = null;
			this.m_E_CancelMatchButtonButton = null;
			this.uiTransform = null;
		}

		private TMPro.TextMeshProUGUI m_E_TipTextMeshProUGUI = null;
		private UnityEngine.UI.Button m_E_CancelMatchButtonButton = null;
		public Transform uiTransform = null;
	}
}
