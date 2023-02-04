using System.Collections;
using System.Collections.Generic;
using System;
using UnityEngine;
using UnityEngine.UI;

namespace ET
{
	[FriendClass(typeof(DlgTipsAlert))]
	public static  class DlgTipsAlertSystem
	{

		public static void RegisterUIEvent(this DlgTipsAlert self)
		{
			self.View.E_ConfirmButton.AddListener(self.OnConfirmClickHandler);
		}

		public static void ShowWindow(this DlgTipsAlert self, Entity contextData = null)
		{
		}

		public static void OnConfirmClickHandler(this DlgTipsAlert self)
		{
			Log.Debug("confrim click");
		}

	}
}
