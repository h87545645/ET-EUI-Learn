
using UnityEngine;
using UnityEngine.UI;
namespace ET.Client
{
	[ComponentOf(typeof(DlgFrogGameRecord))]
	[EnableMethod]
	public  class DlgFrogGameRecordViewComponent : Entity,IAwake,IDestroy 
	{
		public TMPro.TextMeshProUGUI EText_nameTextMeshProUGUI
     	{
     		get
     		{
     			if (this.uiTransform == null)
     			{
     				Log.Error("uiTransform is null.");
     				return null;
     			}
     			if( this.m_EText_nameTextMeshProUGUI == null )
     			{
		    		this.m_EText_nameTextMeshProUGUI = UIFindHelper.FindDeepChild<TMPro.TextMeshProUGUI>(this.uiTransform.gameObject,"EText_name");
     			}
     			return this.m_EText_nameTextMeshProUGUI;
     		}
     	}

		public TMPro.TextMeshProUGUI EText_recordTextMeshProUGUI
     	{
     		get
     		{
     			if (this.uiTransform == null)
     			{
     				Log.Error("uiTransform is null.");
     				return null;
     			}
     			if( this.m_EText_recordTextMeshProUGUI == null )
     			{
		    		this.m_EText_recordTextMeshProUGUI = UIFindHelper.FindDeepChild<TMPro.TextMeshProUGUI>(this.uiTransform.gameObject,"EText_record");
     			}
     			return this.m_EText_recordTextMeshProUGUI;
     		}
     	}

		public UnityEngine.UI.Button EButton_backButton
     	{
     		get
     		{
     			if (this.uiTransform == null)
     			{
     				Log.Error("uiTransform is null.");
     				return null;
     			}
     			if( this.m_EButton_backButton == null )
     			{
		    		this.m_EButton_backButton = UIFindHelper.FindDeepChild<UnityEngine.UI.Button>(this.uiTransform.gameObject,"EButton_back");
     			}
     			return this.m_EButton_backButton;
     		}
     	}

		public void DestroyWidget()
		{
			this.m_EText_nameTextMeshProUGUI = null;
			this.m_EText_recordTextMeshProUGUI = null;
			this.m_EButton_backButton = null;
			this.uiTransform = null;
		}

		private TMPro.TextMeshProUGUI m_EText_nameTextMeshProUGUI = null;
		private TMPro.TextMeshProUGUI m_EText_recordTextMeshProUGUI = null;
		private UnityEngine.UI.Button m_EButton_backButton = null;
		public Transform uiTransform = null;
	}
}
