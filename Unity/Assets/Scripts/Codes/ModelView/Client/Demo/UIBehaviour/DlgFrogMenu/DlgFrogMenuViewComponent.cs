
using UnityEngine;
using UnityEngine.UI;
namespace ET.Client
{
	[ComponentOf(typeof(DlgFrogMenu))]
	[EnableMethod]
	public  class DlgFrogMenuViewComponent : Entity,IAwake,IDestroy 
	{
		public UnityEngine.UI.Button E_CloseButtonButton
     	{
     		get
     		{
     			if (this.uiTransform == null)
     			{
     				Log.Error("uiTransform is null.");
     				return null;
     			}
     			if( this.m_E_CloseButtonButton == null )
     			{
		    		this.m_E_CloseButtonButton = UIFindHelper.FindDeepChild<UnityEngine.UI.Button>(this.uiTransform.gameObject,"content/E_CloseButton");
     			}
     			return this.m_E_CloseButtonButton;
     		}
     	}

		public UnityEngine.UI.Image E_CloseButtonImage
     	{
     		get
     		{
     			if (this.uiTransform == null)
     			{
     				Log.Error("uiTransform is null.");
     				return null;
     			}
     			if( this.m_E_CloseButtonImage == null )
     			{
		    		this.m_E_CloseButtonImage = UIFindHelper.FindDeepChild<UnityEngine.UI.Image>(this.uiTransform.gameObject,"content/E_CloseButton");
     			}
     			return this.m_E_CloseButtonImage;
     		}
     	}

		public UnityEngine.UI.Button E_BackButtonButton
     	{
     		get
     		{
     			if (this.uiTransform == null)
     			{
     				Log.Error("uiTransform is null.");
     				return null;
     			}
     			if( this.m_E_BackButtonButton == null )
     			{
		    		this.m_E_BackButtonButton = UIFindHelper.FindDeepChild<UnityEngine.UI.Button>(this.uiTransform.gameObject,"content/buttons/E_BackButton");
     			}
     			return this.m_E_BackButtonButton;
     		}
     	}

		public UnityEngine.UI.Image E_BackButtonImage
     	{
     		get
     		{
     			if (this.uiTransform == null)
     			{
     				Log.Error("uiTransform is null.");
     				return null;
     			}
     			if( this.m_E_BackButtonImage == null )
     			{
		    		this.m_E_BackButtonImage = UIFindHelper.FindDeepChild<UnityEngine.UI.Image>(this.uiTransform.gameObject,"content/buttons/E_BackButton");
     			}
     			return this.m_E_BackButtonImage;
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
		    		this.m_E_ExitButtonButton = UIFindHelper.FindDeepChild<UnityEngine.UI.Button>(this.uiTransform.gameObject,"content/buttons/E_ExitButton");
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
		    		this.m_E_ExitButtonImage = UIFindHelper.FindDeepChild<UnityEngine.UI.Image>(this.uiTransform.gameObject,"content/buttons/E_ExitButton");
     			}
     			return this.m_E_ExitButtonImage;
     		}
     	}

		public void DestroyWidget()
		{
			this.m_E_CloseButtonButton = null;
			this.m_E_CloseButtonImage = null;
			this.m_E_BackButtonButton = null;
			this.m_E_BackButtonImage = null;
			this.m_E_ExitButtonButton = null;
			this.m_E_ExitButtonImage = null;
			this.uiTransform = null;
		}

		private UnityEngine.UI.Button m_E_CloseButtonButton = null;
		private UnityEngine.UI.Image m_E_CloseButtonImage = null;
		private UnityEngine.UI.Button m_E_BackButtonButton = null;
		private UnityEngine.UI.Image m_E_BackButtonImage = null;
		private UnityEngine.UI.Button m_E_ExitButtonButton = null;
		private UnityEngine.UI.Image m_E_ExitButtonImage = null;
		public Transform uiTransform = null;
	}
}
