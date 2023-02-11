
using UnityEngine;
using UnityEngine.UI;
namespace ET
{
	[ComponentOf(typeof(UIBaseWindow))]
	[EnableMethod]
	public  class DlgLobbyViewComponent : Entity,IAwake,IDestroy 
	{
		public UnityEngine.RectTransform EGBackGroundRectTransform
     	{
     		get
     		{
     			if (this.uiTransform == null)
     			{
     				Log.Error("uiTransform is null.");
     				return null;
     			}
     			if( this.m_EGBackGroundRectTransform == null )
     			{
		    		this.m_EGBackGroundRectTransform = UIFindHelper.FindDeepChild<UnityEngine.RectTransform>(this.uiTransform.gameObject,"EGBackGround");
     			}
     			return this.m_EGBackGroundRectTransform;
     		}
     	}

		public UnityEngine.UI.Button E_EnterMapButton
     	{
     		get
     		{
     			if (this.uiTransform == null)
     			{
     				Log.Error("uiTransform is null.");
     				return null;
     			}
     			if( this.m_E_EnterMapButton == null )
     			{
		    		this.m_E_EnterMapButton = UIFindHelper.FindDeepChild<UnityEngine.UI.Button>(this.uiTransform.gameObject,"EGBackGround/E_EnterMap");
     			}
     			return this.m_E_EnterMapButton;
     		}
     	}

		public UnityEngine.UI.Image E_EnterMapImage
     	{
     		get
     		{
     			if (this.uiTransform == null)
     			{
     				Log.Error("uiTransform is null.");
     				return null;
     			}
     			if( this.m_E_EnterMapImage == null )
     			{
		    		this.m_E_EnterMapImage = UIFindHelper.FindDeepChild<UnityEngine.UI.Image>(this.uiTransform.gameObject,"EGBackGround/E_EnterMap");
     			}
     			return this.m_E_EnterMapImage;
     		}
     	}

		public UnityEngine.UI.Button E_MatchTestButton
     	{
     		get
     		{
     			if (this.uiTransform == null)
     			{
     				Log.Error("uiTransform is null.");
     				return null;
     			}
     			if( this.m_E_MatchTestButton == null )
     			{
		    		this.m_E_MatchTestButton = UIFindHelper.FindDeepChild<UnityEngine.UI.Button>(this.uiTransform.gameObject,"EGBackGround/E_MatchTest");
     			}
     			return this.m_E_MatchTestButton;
     		}
     	}

		public UnityEngine.UI.Image E_MatchTestImage
     	{
     		get
     		{
     			if (this.uiTransform == null)
     			{
     				Log.Error("uiTransform is null.");
     				return null;
     			}
     			if( this.m_E_MatchTestImage == null )
     			{
		    		this.m_E_MatchTestImage = UIFindHelper.FindDeepChild<UnityEngine.UI.Image>(this.uiTransform.gameObject,"EGBackGround/E_MatchTest");
     			}
     			return this.m_E_MatchTestImage;
     		}
     	}

		public UnityEngine.UI.Button E_FastMatchButtonButton
     	{
     		get
     		{
     			if (this.uiTransform == null)
     			{
     				Log.Error("uiTransform is null.");
     				return null;
     			}
     			if( this.m_E_FastMatchButtonButton == null )
     			{
		    		this.m_E_FastMatchButtonButton = UIFindHelper.FindDeepChild<UnityEngine.UI.Button>(this.uiTransform.gameObject,"EGBackGround/middleButtons/E_FastMatchButton");
     			}
     			return this.m_E_FastMatchButtonButton;
     		}
     	}

		public UnityEngine.UI.Button E_ContinueButtonButton
     	{
     		get
     		{
     			if (this.uiTransform == null)
     			{
     				Log.Error("uiTransform is null.");
     				return null;
     			}
     			if( this.m_E_ContinueButtonButton == null )
     			{
		    		this.m_E_ContinueButtonButton = UIFindHelper.FindDeepChild<UnityEngine.UI.Button>(this.uiTransform.gameObject,"EGBackGround/middleButtons/E_ContinueButton");
     			}
     			return this.m_E_ContinueButtonButton;
     		}
     	}

		public UnityEngine.UI.Button E_RecordRankButtonButton
     	{
     		get
     		{
     			if (this.uiTransform == null)
     			{
     				Log.Error("uiTransform is null.");
     				return null;
     			}
     			if( this.m_E_RecordRankButtonButton == null )
     			{
		    		this.m_E_RecordRankButtonButton = UIFindHelper.FindDeepChild<UnityEngine.UI.Button>(this.uiTransform.gameObject,"EGBackGround/middleButtons/E_RecordRankButton");
     			}
     			return this.m_E_RecordRankButtonButton;
     		}
     	}

		public UnityEngine.UI.Button E_ExitButtonButton
     	{
     		get
     		{
     			if (this.uiTransform == null)
     			{
     				Log.Error("uiTransform is null.");
     				return null;
     			}
     			if( this.m_E_ExitButtonButton == null )
     			{
		    		this.m_E_ExitButtonButton = UIFindHelper.FindDeepChild<UnityEngine.UI.Button>(this.uiTransform.gameObject,"EGBackGround/middleButtons/E_ExitButton");
     			}
     			return this.m_E_ExitButtonButton;
     		}
     	}

		public UnityEngine.UI.Image E_ExitButtonImage
     	{
     		get
     		{
     			if (this.uiTransform == null)
     			{
     				Log.Error("uiTransform is null.");
     				return null;
     			}
     			if( this.m_E_ExitButtonImage == null )
     			{
		    		this.m_E_ExitButtonImage = UIFindHelper.FindDeepChild<UnityEngine.UI.Image>(this.uiTransform.gameObject,"EGBackGround/middleButtons/E_ExitButton");
     			}
     			return this.m_E_ExitButtonImage;
     		}
     	}

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
		    		this.m_E_LangButtonButton = UIFindHelper.FindDeepChild<UnityEngine.UI.Button>(this.uiTransform.gameObject,"EGBackGround/E_LangButton");
     			}
     			return this.m_E_LangButtonButton;
     		}
     	}

		public void DestroyWidget()
		{
			this.m_EGBackGroundRectTransform = null;
			this.m_E_EnterMapButton = null;
			this.m_E_EnterMapImage = null;
			this.m_E_MatchTestButton = null;
			this.m_E_MatchTestImage = null;
			this.m_E_FastMatchButtonButton = null;
			this.m_E_ContinueButtonButton = null;
			this.m_E_RecordRankButtonButton = null;
			this.m_E_ExitButtonButton = null;
			this.m_E_ExitButtonImage = null;
			this.m_E_LangButtonButton = null;
			this.uiTransform = null;
		}

		private UnityEngine.RectTransform m_EGBackGroundRectTransform = null;
		private UnityEngine.UI.Button m_E_EnterMapButton = null;
		private UnityEngine.UI.Image m_E_EnterMapImage = null;
		private UnityEngine.UI.Button m_E_MatchTestButton = null;
		private UnityEngine.UI.Image m_E_MatchTestImage = null;
		private UnityEngine.UI.Button m_E_FastMatchButtonButton = null;
		private UnityEngine.UI.Button m_E_ContinueButtonButton = null;
		private UnityEngine.UI.Button m_E_RecordRankButtonButton = null;
		private UnityEngine.UI.Button m_E_ExitButtonButton = null;
		private UnityEngine.UI.Image m_E_ExitButtonImage = null;
		private UnityEngine.UI.Button m_E_LangButtonButton = null;
		public Transform uiTransform = null;
	}
}
