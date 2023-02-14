using System.Collections;
using System.Collections.Generic;
using System;
using UnityEngine;
using UnityEngine.UI;

namespace ET
{
	public static  class DlgLobbySystem
	{

		public static void RegisterUIEvent(this DlgLobby self)
		{
		  self.View.E_EnterMapButton.AddListener(()=>
		  {
			  self.OnEnterMapClickHandler().Coroutine();
		  });
		  
		  self.View.E_FastMatchButtonButton.AddListener((() =>
		  {
			  self.OnStartMatch().Coroutine();
		  }));
		  
		  //机器人测试
		  self.View.E_MatchTestButton.AddListener((() =>
		  {
			  self.OnRobotStartMatch().Coroutine();
		  }));
		}

		public static void ShowWindow(this DlgLobby self, Entity contextData = null)
		{
			
		}
		
		public static async ETTask OnEnterMapClickHandler(this DlgLobby self)
		{
			await EnterMapHelper.EnterMapAsync(self.ZoneScene());
		}
		
		public static async ETTask OnStartMatch(this DlgLobby self)
		{
			await MatchHelper.StartMatchAsync(self.ZoneScene());
		}
		
		public static async ETTask OnExitMatch(this DlgLobby self)
		{
			await MatchHelper.ExitMatchAsync(self.ZoneScene());
		}
		
		public static async ETTask OnRobotStartMatch(this DlgLobby self)
		{
			// await MatchHelper.StartMatchAsync(self.ZoneScene());
			G2C_StartMatchResponse g2CStartMatch = await self.ZoneScene().GetComponent<SessionComponent>().Session.Call(new C2G_StartMatchRequest()
			{
				RobotMatch = true
			}) as G2C_StartMatchResponse;
		}
	}
}
