using System.Collections;
using System.Collections.Generic;
using System;
using UnityEngine;
using UnityEngine.UI;

namespace ET.Client
{
	[FriendOf(typeof(DlgMatching))]
	public static  class DlgMatchingSystem
	{

		public static void RegisterUIEvent(this DlgMatching self)
		{
			self.View.E_CancelMatchButtonButton.AddListener((() =>
			{
				self.OnExitMatch().Coroutine();
			}));
		}

		public static void ShowWindow(this DlgMatching self, Entity contextData = null)
		{
			self.View.E_CancelMatchButtonButton.SetVisible(false);
		}

		public static async ETTask OnExitMatch(this DlgMatching self)
		{
			await MatchHelper.ExitMatchAsync(self.ClientScene());
		}

	}
}
