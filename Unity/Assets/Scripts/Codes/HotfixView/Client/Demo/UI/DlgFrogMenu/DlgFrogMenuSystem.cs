using System.Collections;
using System.Collections.Generic;
using System;
using UnityEngine;
using UnityEngine.UI;

namespace ET.Client
{
	[FriendOf(typeof(DlgFrogMenu))]
	public static  class DlgFrogMenuSystem
	{

		public static void RegisterUIEvent(this DlgFrogMenu self)
		{
			 self.View.E_CloseButtonButton.AddListener(self.OnCloseClickHandler);
			 self.View.E_BackButtonButton.AddListenerAsync(self.OnBackLobbyClickHandler);
			 self.View.E_ExitButtonButton.AddListener(self.OnExitClickHandler);
		}

		public static void ShowWindow(this DlgFrogMenu self, Entity contextData = null)
		{
		}

		public static void OnCloseClickHandler(this DlgFrogMenu self)
		{
			self.DomainScene().GetComponent<UIComponent>().HideWindow(WindowID.WindowID_FrogMenu);
		}
		
		public static async ETTask OnBackLobbyClickHandler(this DlgFrogMenu self)
		{
			try
			{
				//通知gate 回收房间
				Unit player =  UnitHelper.GetMyUnitFromClientScene(self.ClientScene());
				self.ClientScene().GetComponent<SessionComponent>().Session.Send(new C2G_PlayerExitRoomMessage(){UserID = player.UserID});
				//通知map 回收房间
				self.ClientScene().GetComponent<SessionComponent>().Session.Send(new C2M_PlayerExitRoom());
				
				self.DomainScene().GetComponent<UIComponent>().HideWindow(WindowID.WindowID_FrogMenu);
				EventSystem.Instance.Publish(self.ClientScene(), new EventType.BackToLobbyScene());
				await ETTask.CompletedTask;
			}
			catch (Exception e)
			{
				Log.Error(e);
			}
		}
		
		public static void OnExitClickHandler(this DlgFrogMenu self)
		{
			Application.Quit();
		}

	}
}
