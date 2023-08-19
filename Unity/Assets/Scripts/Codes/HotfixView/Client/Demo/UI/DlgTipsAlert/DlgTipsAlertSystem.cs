using System.Collections;
using System.Collections.Generic;
using System;
using UnityEngine;
using UnityEngine.UI;

namespace ET.Client
{
	[FriendOf(typeof(DlgTipsAlert))]
	[FriendOf(typeof(WindowData))]
	public static  class DlgTipsAlertSystem
	{

		public static void RegisterUIEvent(this DlgTipsAlert self)
		{
			self.View.E_ConfirmButton.AddListener(self.OnConfirmClickHandler);
		}

		public static void ShowWindow(this DlgTipsAlert self, Entity contextData = null)
		{
			string mes = (contextData as WindowData).Message;
			Log.Debug((contextData as WindowData).Message);
			self.View.E_MessageTextMeshProUGUI.SetText(mes);
		}

		 
		public static void OnConfirmClickHandler(this DlgTipsAlert self)
		{
			AudioPlayManager.instance.PlayOnceAudio("buttoun_click");
			self.DomainScene().GetComponent<UIComponent>().HideWindow(WindowID.WindowID_TipsAlert);
			// args.ZoneScene.GetComponent<UIComponent>().HideWindow(WindowID.WindowID_Login);
		}
	}
}
