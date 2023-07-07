
using UnityEngine;
using UnityEngine.UI;
namespace ET.Client
{
	[ComponentOf(typeof(DlgFragGameMainUI))]
	[EnableMethod]
	public  class DlgFragGameMainUIViewComponent : Entity,IAwake,IDestroy 
	{
		public UnityEngine.UI.Button E_JumpButtonButton
     	{
     		get
     		{
     			if (this.uiTransform == null)
     			{
     				Log.Error("uiTransform is null.");
     				return null;
     			}
     			if( this.m_E_JumpButtonButton == null )
     			{
		    		this.m_E_JumpButtonButton = UIFindHelper.FindDeepChild<UnityEngine.UI.Button>(this.uiTransform.gameObject,"Root/E_JumpButton");
     			}
     			return this.m_E_JumpButtonButton;
     		}
     	}

		public UnityEngine.UI.Image E_JumpButtonImage
     	{
     		get
     		{
     			if (this.uiTransform == null)
     			{
     				Log.Error("uiTransform is null.");
     				return null;
     			}
     			if( this.m_E_JumpButtonImage == null )
     			{
		    		this.m_E_JumpButtonImage = UIFindHelper.FindDeepChild<UnityEngine.UI.Image>(this.uiTransform.gameObject,"Root/E_JumpButton");
     			}
     			return this.m_E_JumpButtonImage;
     		}
     	}

		public UnityEngine.EventSystems.EventTrigger E_JumpButtonEventTrigger
     	{
     		get
     		{
     			if (this.uiTransform == null)
     			{
     				Log.Error("uiTransform is null.");
     				return null;
     			}
     			if( this.m_E_JumpButtonEventTrigger == null )
     			{
		    		this.m_E_JumpButtonEventTrigger = UIFindHelper.FindDeepChild<UnityEngine.EventSystems.EventTrigger>(this.uiTransform.gameObject,"Root/E_JumpButton");
     			}
     			return this.m_E_JumpButtonEventTrigger;
     		}
     	}

		public ET.ScrollRocker E_DirectButtonScrollRocker
     	{
     		get
     		{
     			if (this.uiTransform == null)
     			{
     				Log.Error("uiTransform is null.");
     				return null;
     			}
     			if( this.m_E_DirectButtonScrollRocker == null )
     			{
		    		this.m_E_DirectButtonScrollRocker = UIFindHelper.FindDeepChild<ET.ScrollRocker>(this.uiTransform.gameObject,"Root/E_DirectButton");
     			}
     			return this.m_E_DirectButtonScrollRocker;
     		}
     	}

		public UnityEngine.UI.Image E_DirectButtonImage
     	{
     		get
     		{
     			if (this.uiTransform == null)
     			{
     				Log.Error("uiTransform is null.");
     				return null;
     			}
     			if( this.m_E_DirectButtonImage == null )
     			{
		    		this.m_E_DirectButtonImage = UIFindHelper.FindDeepChild<UnityEngine.UI.Image>(this.uiTransform.gameObject,"Root/E_DirectButton");
     			}
     			return this.m_E_DirectButtonImage;
     		}
     	}

		public UnityEngine.UI.Button E_MenuButtonButton
     	{
     		get
     		{
     			if (this.uiTransform == null)
     			{
     				Log.Error("uiTransform is null.");
     				return null;
     			}
     			if( this.m_E_MenuButtonButton == null )
     			{
		    		this.m_E_MenuButtonButton = UIFindHelper.FindDeepChild<UnityEngine.UI.Button>(this.uiTransform.gameObject,"Root/E_MenuButton");
     			}
     			return this.m_E_MenuButtonButton;
     		}
     	}

		public UnityEngine.UI.Button E_Back2LastPosButtonButton
     	{
     		get
     		{
     			if (this.uiTransform == null)
     			{
     				Log.Error("uiTransform is null.");
     				return null;
     			}
     			if( this.m_E_Back2LastPosButtonButton == null )
     			{
		    		this.m_E_Back2LastPosButtonButton = UIFindHelper.FindDeepChild<UnityEngine.UI.Button>(this.uiTransform.gameObject,"Root/E_Back2LastPosButton");
     			}
     			return this.m_E_Back2LastPosButtonButton;
     		}
     	}

		public void DestroyWidget()
		{
			this.m_E_JumpButtonButton = null;
			this.m_E_JumpButtonImage = null;
			this.m_E_JumpButtonEventTrigger = null;
			this.m_E_DirectButtonScrollRocker = null;
			this.m_E_DirectButtonImage = null;
			this.m_E_MenuButtonButton = null;
			this.m_E_Back2LastPosButtonButton = null;
			this.uiTransform = null;
		}

		private UnityEngine.UI.Button m_E_JumpButtonButton = null;
		private UnityEngine.UI.Image m_E_JumpButtonImage = null;
		private UnityEngine.EventSystems.EventTrigger m_E_JumpButtonEventTrigger = null;
		private ET.ScrollRocker m_E_DirectButtonScrollRocker = null;
		private UnityEngine.UI.Image m_E_DirectButtonImage = null;
		private UnityEngine.UI.Button m_E_MenuButtonButton = null;
		private UnityEngine.UI.Button m_E_Back2LastPosButtonButton = null;
		public Transform uiTransform = null;
	}
}
