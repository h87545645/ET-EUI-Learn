using System.Collections;
using System.Collections.Generic;
using System;
using Honeti;
using UnityEngine;
using UnityEngine.UI;

namespace ET.Client
{
	[FriendOf(typeof(DlgFrogGameRecord))]
	[FriendOf(typeof(WindowData))]
	[FriendOf((typeof(I18NComponent)))]
	public static  class DlgFrogGameRecordSystem
	{

		public static void RegisterUIEvent(this DlgFrogGameRecord self)
		{
			self.View.EButton_backButton.AddListener(self.OnBackLobbyClickHandler);
		}

		public static void ShowWindow(this DlgFrogGameRecord self, Entity contextData = null)
		{
			// self.DomainScene().GetComponent<I18NComponent>().langMgr.getValue("^ui_norecord")
			M2C_FrogGameOver data = (contextData as WindowData).GameOverData;
			self.View.EText_nameTextMeshProUGUI.SetText(data.PlayerName);
			string bestTime =  UnityUtils.TimeToStringHMS( (float)(data.GameTime * 0.001));
			string bestJump = data.JumpCnt.ToString();
			string winTimes = data.WinCnt.ToString();
			string[] record = new string[]
			{
				bestTime,
				bestJump,
				winTimes
			};
			I18NTextMesh playerRecordText = self.View.EText_recordTextMeshProUGUI.GetComponent<I18NTextMesh>();
			playerRecordText._params = record;
			playerRecordText.updateTranslation();
		}

		public static void OnBackLobbyClickHandler(this DlgFrogGameRecord self)
		{
			self.DomainScene().GetComponent<UIComponent>().HideWindow(WindowID.WindowID_FrogGameRecord);
			EventSystem.Instance.Publish(self.ClientScene(), new EventType.BackToLobbyScene());
		}

	}
}
