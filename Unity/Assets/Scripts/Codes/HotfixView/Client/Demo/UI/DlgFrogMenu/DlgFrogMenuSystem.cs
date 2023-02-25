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
			 self.View.E_BackButtonButton.AddListener(self.OnCloseClickHandler);
			 self.View.E_BackButtonButton.AddListener(self.OnBackLobbyClickHandler);
			 self.View.E_ExitButtonButton.AddListener(self.OnExitClickHandler);
		}

		public static void ShowWindow(this DlgFrogMenu self, Entity contextData = null)
		{
		}

		public static void OnCloseClickHandler(this DlgFrogMenu self)
		{
			self.DomainScene().GetComponent<UIComponent>().HideWindow(WindowID.WindowID_FrogMenu);
		}
		
		public static void OnBackLobbyClickHandler(this DlgFrogMenu self)
		{
			self.DomainScene().GetComponent<UIComponent>().HideWindow(WindowID.WindowID_FrogMenu);
			// SceneMgr.GetInstance().LoadScene("FragMenuScene",null);
			// 加载场景资源
			// ResourcesComponent.Instance.LoadBundle($"{currentScene.Name}.unity3d");
			// 切换到map场景

			// await SceneManager.LoadSceneAsync(currentScene.Name);
		}
		
		public static void OnExitClickHandler(this DlgFrogMenu self)
		{
			Application.Quit();
		}

	}
}
