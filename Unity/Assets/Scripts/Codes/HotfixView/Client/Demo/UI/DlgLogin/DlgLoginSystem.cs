using System.Collections;
using System.Collections.Generic;
using System;
using Honeti;
using UnityEngine;
using UnityEngine.UI;

namespace ET.Client
{
	[FriendOf(typeof(DlgLogin))]
	[FriendOf((typeof(I18NComponent)))]
	public static  class DlgLoginSystem
	{

		public static void RegisterUIEvent(this DlgLogin self)
		{
		   self.View.E_LoginButton.onClick.AddListener(self.OnLoginClickHandler);
		   // self.View.E_LangButtonButton.AddListener(self.OnTranslation);
		   self.View.ESLangButton.RegisterUIEvent();
		}

		public static void ShowWindow(this DlgLogin self, Entity contextData = null)
		{

			
		}

		public static void OnLoginClickHandler(this DlgLogin self)
		{
			LoginHelper.Login(self.ClientScene(), self.View.E_AccountInputField.text, self.View.E_PasswordInputField.text).Coroutine();
		}
		
		// public static void OnTranslation(this DlgLogin self)
		// {
		// 	LanguageCode curr = Root.Instance.Scene.GetComponent<I18NComponent>().langMgr.gameLang == LanguageCode.EN ? LanguageCode.SCN : LanguageCode.EN;
		// 	Root.Instance.Scene.GetComponent<I18NComponent>().langMgr.setLanguage(curr);
		// }
		
	}
}
