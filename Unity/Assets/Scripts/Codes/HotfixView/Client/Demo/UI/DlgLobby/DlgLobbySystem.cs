using System.Collections;
using System.Collections.Generic;
using System;
using Honeti;
using UnityEngine;
using UnityEngine.UI;

namespace ET.Client
{
	[FriendOf(typeof(DlgLobby))]
	[FriendOf((typeof(I18NComponent)))]
	public static  class DlgLobbySystem
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
			
			self.View.E_LangButtonButton.AddListener(self.OnTranslation);
		}

		public static void ShowWindow(this DlgLobby self, Entity contextData = null)
		{
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

		public static void OnTranslation(this DlgLobby self)
		{
			LanguageCode curr = Root.Instance.Scene.GetComponent<I18NComponent>().langMgr.gameLang == LanguageCode.EN ? LanguageCode.SCN : LanguageCode.EN;
			Root.Instance.Scene.GetComponent<I18NComponent>().langMgr.setLanguage(curr);
		}

	}
}
