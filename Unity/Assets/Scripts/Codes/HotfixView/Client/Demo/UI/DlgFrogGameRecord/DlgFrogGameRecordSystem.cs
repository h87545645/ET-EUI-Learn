using System.Collections;
using System.Collections.Generic;
using System;
using UnityEngine;
using UnityEngine.UI;

namespace ET.Client
{
	[FriendOf(typeof(DlgFrogGameRecord))]
	[FriendOf(typeof(WindowData))]
	public static  class DlgFrogGameRecordSystem
	{

		public static void RegisterUIEvent(this DlgFrogGameRecord self)
		{
			self.View.EButton_backButton.AddListener(self.OnBackLobbyClickHandler);
		}

		public static void ShowWindow(this DlgFrogGameRecord self, Entity contextData = null)
		{
			M2C_FrogGameOver data = (contextData as WindowData).GameOverData;
			self.View.EText_nameTextMeshProUGUI.SetText(data.PlayerName);
			self.View.EText_jumpCntTextMeshProUGUI.SetText(data.JumpCnt.ToString());
			self.View.EText_timeTextMeshProUGUI.SetText(UnityUtils.TimeToStringHMS(data.BestTime));
			
		}

		public static void OnBackLobbyClickHandler(this DlgFrogGameRecord self)
		{
			self.DomainScene().GetComponent<UIComponent>().HideWindow(WindowID.WindowID_FrogGameRecord);
			EventSystem.Instance.Publish(self.ClientScene(), new EventType.BackToLobbyScene());
		}

	}
}
