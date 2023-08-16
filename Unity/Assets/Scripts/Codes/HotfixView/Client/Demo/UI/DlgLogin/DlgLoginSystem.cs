using System.Collections;
using System.Collections.Generic;
using System;
using Honeti;
using TMPro;
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
		   
		   self.accountInput = self.View.E_AccountImage.gameObject.GetComponent<TMP_InputField>();
		   self.passwordInput = self.View.E_PasswordImage.gameObject.GetComponent<TMP_InputField>();
		}

		public static void ShowWindow(this DlgLogin self, Entity contextData = null)
		{

			
		}

		public static void OnLoginClickHandler(this DlgLogin self)
		{
			LoginHelper.Login(self.ClientScene(), self.accountInput.text, self.passwordInput.text).Coroutine();
		}
		
		
	}
}
