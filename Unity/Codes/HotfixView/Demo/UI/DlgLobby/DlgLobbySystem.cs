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
	}
}
