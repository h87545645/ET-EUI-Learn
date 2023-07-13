using System.Collections;
using System.Collections.Generic;
using System;
using System.Threading.Tasks;
using Honeti;
using TMPro;
using UnityEngine;
using UnityEngine.UI;

namespace ET.Client
{
	[FriendOf(typeof(DlgLobby))]
	[FriendOf((typeof(I18NComponent)))]
	[FriendOf(typeof(ShowWindowData))]
	public static class DlgLobbySystem
	{

		public static void RegisterUIEvent(this DlgLobby self)
		{
			self.View.E_EnterMapButton.AddListenerAsync(self.EnterMap);
			

		  
			self.View.E_FastMatchButtonButton.AddListener((() =>
			{
				self.OnStartMatch().Coroutine();
			}));
		  
			//机器人测试
			self.View.E_MatchTestButton.AddListener((() =>
			{
				self.OnRobotStartMatch().Coroutine();
			}));
			
			self.View.E_RecordRankButtonButton.AddListener(() =>
			{
				self.OnRankBtnClick().Coroutine();
			});
			
			self.View.ESLangButton.RegisterUIEvent();
			
			self.PlayNameInput = self.View.E_NameInputImage.gameObject.GetComponent<TMP_InputField>();
			self.PlayNameInput.onEndEdit.AddListener((string text) =>
			{
				self.OnNameEditEnd(text).Coroutine();
			});
		}

		public static void ShowWindow(this DlgLobby self, Entity contextData = null)
		{
			self.RefreshPlayerInfo();
		}

		private static void RefreshPlayerInfo(this DlgLobby self)
		{
			PlayerComponent playerComponent = self.ClientScene().GetComponent<PlayerComponent>();
			PlayerInfo info = playerComponent.MyInfo;
			self.CurrentPlayerName = info.NickName;
			self.PlayNameInput.text = info.NickName;
			self.View.E_CoinTextTextMeshProUGUI.SetText(info.Coin.ToString());
			self.View.E_WinTextTextMeshProUGUI.SetText(info.Wins.ToString());
		}

		public static async ETTask EnterMap(this DlgLobby self)
		{
			await EnterMapHelper.EnterMapAsync(self.ClientScene());
			self.ClientScene().GetComponent<UIComponent>().HideWindow(WindowID.WindowID_Lobby);
		}
		
		public static async ETTask OnStartMatch(this DlgLobby self)
		{
			await MatchHelper.StartMatchAsync(self.ClientScene());
		}
		

		
		public static async ETTask OnRobotStartMatch(this DlgLobby self)
		{
			// await MatchHelper.StartMatchAsync(self.ZoneScene());
			G2C_StartMatchResponse g2CStartMatch = await self.ClientScene().GetComponent<SessionComponent>().Session.Call(new C2G_StartMatchRequest()
			{
				RobotMatch = true
			}) as G2C_StartMatchResponse;
		}
		
		public static async ETTask OnRankBtnClick(this DlgLobby self)
		{
			try
			{
				self.View.E_RecordRankButtonButton.enabled = false;
				G2C_GetRankInfoResponse g2cGetRankInfoResponse = await self.ClientScene().GetComponent<SessionComponent>().Session.Call
						(new C2G_GetRankInfoRequest()) as G2C_GetRankInfoResponse;
				ShowWindowData content = new ShowWindowData();
				content.contextData = new WindowData(){Ranks = g2cGetRankInfoResponse.Ranks};
				self.ClientScene().GetComponent<UIComponent>().ShowWindow(WindowID.WindowID_Rank , content);
				self.View.E_RecordRankButtonButton.enabled = true;
			}
			catch (Exception e)
			{
				self.View.E_RecordRankButtonButton.enabled = true;
				Log.Error(e);
			}
		}


		public static async ETTask OnNameEditEnd(this DlgLobby self , string text)
		{
			if (text == self.CurrentPlayerName)
			{
				return;
			}
			PlayerComponent playerComponent = self.ClientScene().GetComponent<PlayerComponent>();
			G2C_PlayerEditInfoResponse g2cPlayerEditInfoResponse = await self.ClientScene().GetComponent<SessionComponent>().Session.Call
					(new C2G_PlayerEditInfoRequest(){Name = text , AccountId = playerComponent.MyInfo.AccountId}) as G2C_PlayerEditInfoResponse;
			self.CurrentPlayerName = text;
		}

		// public static void OnTranslation(this DlgLobby self)
		// {
		// 	LanguageCode curr = Root.Instance.Scene.GetComponent<I18NComponent>().langMgr.gameLang == LanguageCode.EN ? LanguageCode.SCN : LanguageCode.EN;
		// 	Root.Instance.Scene.GetComponent<I18NComponent>().langMgr.setLanguage(curr);
		// }

	}
}
