
using UnityEngine;
using UnityEngine.UI;
namespace ET.Client
{
	[EnableMethod]
	public  class Scroll_Item_Rank : Entity,IAwake,IDestroy,IUIScrollItem 
	{
		public long DataId {get;set;}
		private bool isCacheNode = false;
		public void SetCacheMode(bool isCache)
		{
			this.isCacheNode = isCache;
		}

		public Scroll_Item_Rank BindTrans(Transform trans)
		{
			this.uiTransform = trans;
			return this;
		}

		public UnityEngine.UI.Image EImage_medalImage
     	{
     		get
     		{
     			if (this.uiTransform == null)
     			{
     				Log.Error("uiTransform is null.");
     				return null;
     			}
     			if (this.isCacheNode)
     			{
     				if( this.m_EImage_medalImage == null )
     				{
		    			this.m_EImage_medalImage = UIFindHelper.FindDeepChild<UnityEngine.UI.Image>(this.uiTransform.gameObject,"EImage_medal");
     				}
     				return this.m_EImage_medalImage;
     			}
     			else
     			{
		    		return UIFindHelper.FindDeepChild<UnityEngine.UI.Image>(this.uiTransform.gameObject,"EImage_medal");
     			}
     		}
     	}

		public TMPro.TextMeshProUGUI ELabel_rankTextMeshProUGUI
     	{
     		get
     		{
     			if (this.uiTransform == null)
     			{
     				Log.Error("uiTransform is null.");
     				return null;
     			}
     			if (this.isCacheNode)
     			{
     				if( this.m_ELabel_rankTextMeshProUGUI == null )
     				{
		    			this.m_ELabel_rankTextMeshProUGUI = UIFindHelper.FindDeepChild<TMPro.TextMeshProUGUI>(this.uiTransform.gameObject,"ELabel_rank");
     				}
     				return this.m_ELabel_rankTextMeshProUGUI;
     			}
     			else
     			{
		    		return UIFindHelper.FindDeepChild<TMPro.TextMeshProUGUI>(this.uiTransform.gameObject,"ELabel_rank");
     			}
     		}
     	}

		public TMPro.TextMeshProUGUI ELabel_nameTextMeshProUGUI
     	{
     		get
     		{
     			if (this.uiTransform == null)
     			{
     				Log.Error("uiTransform is null.");
     				return null;
     			}
     			if (this.isCacheNode)
     			{
     				if( this.m_ELabel_nameTextMeshProUGUI == null )
     				{
		    			this.m_ELabel_nameTextMeshProUGUI = UIFindHelper.FindDeepChild<TMPro.TextMeshProUGUI>(this.uiTransform.gameObject,"ELabel_name");
     				}
     				return this.m_ELabel_nameTextMeshProUGUI;
     			}
     			else
     			{
		    		return UIFindHelper.FindDeepChild<TMPro.TextMeshProUGUI>(this.uiTransform.gameObject,"ELabel_name");
     			}
     		}
     	}

		public TMPro.TextMeshProUGUI ELabel_winTextMeshProUGUI
     	{
     		get
     		{
     			if (this.uiTransform == null)
     			{
     				Log.Error("uiTransform is null.");
     				return null;
     			}
     			if (this.isCacheNode)
     			{
     				if( this.m_ELabel_winTextMeshProUGUI == null )
     				{
		    			this.m_ELabel_winTextMeshProUGUI = UIFindHelper.FindDeepChild<TMPro.TextMeshProUGUI>(this.uiTransform.gameObject,"ELabel_win");
     				}
     				return this.m_ELabel_winTextMeshProUGUI;
     			}
     			else
     			{
		    		return UIFindHelper.FindDeepChild<TMPro.TextMeshProUGUI>(this.uiTransform.gameObject,"ELabel_win");
     			}
     		}
     	}

		public TMPro.TextMeshProUGUI ELabel_timeTextMeshProUGUI
     	{
     		get
     		{
     			if (this.uiTransform == null)
     			{
     				Log.Error("uiTransform is null.");
     				return null;
     			}
     			if (this.isCacheNode)
     			{
     				if( this.m_ELabel_timeTextMeshProUGUI == null )
     				{
		    			this.m_ELabel_timeTextMeshProUGUI = UIFindHelper.FindDeepChild<TMPro.TextMeshProUGUI>(this.uiTransform.gameObject,"ELabel_time");
     				}
     				return this.m_ELabel_timeTextMeshProUGUI;
     			}
     			else
     			{
		    		return UIFindHelper.FindDeepChild<TMPro.TextMeshProUGUI>(this.uiTransform.gameObject,"ELabel_time");
     			}
     		}
     	}

		public TMPro.TextMeshProUGUI ELabel_jumpsTextMeshProUGUI
     	{
     		get
     		{
     			if (this.uiTransform == null)
     			{
     				Log.Error("uiTransform is null.");
     				return null;
     			}
     			if (this.isCacheNode)
     			{
     				if( this.m_ELabel_jumpsTextMeshProUGUI == null )
     				{
		    			this.m_ELabel_jumpsTextMeshProUGUI = UIFindHelper.FindDeepChild<TMPro.TextMeshProUGUI>(this.uiTransform.gameObject,"ELabel_jumps");
     				}
     				return this.m_ELabel_jumpsTextMeshProUGUI;
     			}
     			else
     			{
		    		return UIFindHelper.FindDeepChild<TMPro.TextMeshProUGUI>(this.uiTransform.gameObject,"ELabel_jumps");
     			}
     		}
     	}

		public void DestroyWidget()
		{
			this.m_EImage_medalImage = null;
			this.m_ELabel_rankTextMeshProUGUI = null;
			this.m_ELabel_nameTextMeshProUGUI = null;
			this.m_ELabel_winTextMeshProUGUI = null;
			this.m_ELabel_timeTextMeshProUGUI = null;
			this.m_ELabel_jumpsTextMeshProUGUI = null;
			this.uiTransform = null;
			this.DataId = 0;
		}

		private UnityEngine.UI.Image m_EImage_medalImage = null;
		private TMPro.TextMeshProUGUI m_ELabel_rankTextMeshProUGUI = null;
		private TMPro.TextMeshProUGUI m_ELabel_nameTextMeshProUGUI = null;
		private TMPro.TextMeshProUGUI m_ELabel_winTextMeshProUGUI = null;
		private TMPro.TextMeshProUGUI m_ELabel_timeTextMeshProUGUI = null;
		private TMPro.TextMeshProUGUI m_ELabel_jumpsTextMeshProUGUI = null;
		public Transform uiTransform = null;
	}
}
