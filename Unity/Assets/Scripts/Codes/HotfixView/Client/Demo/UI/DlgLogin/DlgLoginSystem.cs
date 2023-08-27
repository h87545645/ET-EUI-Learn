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
		   self.View.E_LoginButton.onClick.AddListener(() =>
		   {
			   self.OnLoginClickHandler().Coroutine();
		   });
		   // self.View.E_LangButtonButton.AddListener(self.OnTranslation);
		   self.View.ESLangButton.RegisterUIEvent();
		   
		   self.accountInput = self.View.E_AccountImage.gameObject.GetComponent<TMP_InputField>();
		   self.passwordInput = self.View.E_PasswordImage.gameObject.GetComponent<TMP_InputField>();
		   self.accountInput.text = GameRecord.Instance.Login.account;
		   self.passwordInput.text = GameRecord.Instance.Login.password;
		}

		public static void ShowWindow(this DlgLogin self, Entity contextData = null)
		{

			
		}

		public static async ETTask OnLoginClickHandler(this DlgLogin self)
		{
			AudioPlayManager.instance.PlayOnceAudio("buttoun_click");
			string[] res = await LoginHelper.Login(self.ClientScene(), self.accountInput.text, self.passwordInput.text);
			//记录账号密码
			if (res != null)
			{
				GameRecord.Instance.SaveLoginData(res[0],res[1]);
			}
		}
		
		
	}
}
