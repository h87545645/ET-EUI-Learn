﻿using System.Collections;
using System.Collections.Generic;
using System;
using UnityEngine;
using UnityEngine.UI;

namespace ET.Client
{
	[FriendOf(typeof(DlgWatchAd))]
	public static  class DlgWatchAdSystem
	{

		public static void RegisterUIEvent(this DlgWatchAd self)
		{
			self.View.E_CloseButtonButton.AddListener(self.OnCloseClickHandler);
			self.View.E_ConfirmButton.AddListenerAsync(self.OnWatchAdClickHandler);
		}

		public static void ShowWindow(this DlgWatchAd self, Entity contextData = null)
		{
		}
		
		public static async ETTask OnWatchAdClickHandler(this DlgWatchAd self)
		{
			
		}

		public static void OnCloseClickHandler(this DlgWatchAd self)
		{
			self.DomainScene().GetComponent<UIComponent>().HideWindow(WindowID.WindowID_WatchAd);
		}
		
	}
}
