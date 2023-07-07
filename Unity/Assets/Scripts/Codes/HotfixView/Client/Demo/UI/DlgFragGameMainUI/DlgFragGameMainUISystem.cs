using System.Collections;
using System.Collections.Generic;
using System;
using UnityEngine;
using UnityEngine.EventSystems;
using UnityEngine.UI;

namespace ET.Client
{
	[FriendOf(typeof(DlgFragGameMainUI))]
	public static  class DlgFragGameMainUISystem
	{

		public static void RegisterUIEvent(this DlgFragGameMainUI self)
		{
			// self.View.E_JumpButtonButton.AddListener(self.OnJumpClickHandler);
			self.View.E_JumpButtonEventTrigger.RegisterEvent(EventTriggerType.PointerDown,self.OnJumpPointerDownHandler);
			self.View.E_JumpButtonEventTrigger.RegisterEvent(EventTriggerType.PointerUp,self.OnJumpPointerUpHandler);
			
			self.View.E_MenuButtonButton.AddListener(self.OnMenuClickHandler);
			self.View.E_Back2LastPosButtonButton.AddListener(self.OnBack2LastPosClickHandler);
		}

		public static void ShowWindow(this DlgFragGameMainUI self, Entity contextData = null)
		{
		}
		
		[ObjectSystem]
		public class DlgFragGameMainUIUpdateSystem : UpdateSystem<DlgFragGameMainUI>
		{
			protected override void Update(DlgFragGameMainUI self)
			{
				if (self._lastTime > 0 && Time.time - self._lastTime > 1)
				{
					// EventCenter.PostEvent<float>(Game_Event.FragGameJump, 1);
					EventSystem.Instance.Publish(self.DomainScene(), new EventType.FrogJump() { chargeTime = 1 });
					self._lastTime = 0;
				}
			}
		}

		 

		public static void OnJumpPointerDownHandler(this DlgFragGameMainUI self,BaseEventData eventData)
		{
			if (self._onPointerDownStart)
			{
				return;
			}

			self._onPointerDownStart = true;
			// EventCenter.PostEvent(Game_Event.FragGameCharge);
			EventSystem.Instance.Publish(self.DomainScene(), new EventType.FrogEnterCharge() { });
			self._lastTime = Time.time;
			Debug.Log("===>>> frog jump OnPointerDown");
		}
		
		public static void OnJumpPointerUpHandler(this DlgFragGameMainUI self,BaseEventData eventData)
		{
			if (self._lastTime > 0/* && Time.time - _lastTime > 0.05*/)
			{   
				Debug.Log("===>>> frog jump OnPointerUp succ");
				// EventCenter.PostEvent<float>(Game_Event.FragGameJump, Time.time - self._lastTime);
				EventSystem.Instance.Publish(self.DomainScene(), new EventType.FrogJump() { chargeTime = Time.time - self._lastTime });
				self._lastTime = 0;
				//Debug.Log("̧��");
			}
			else
			{
				if (self._lastTime > 0)
				{
					Debug.Log("===>>> frog jump OnPointerUp cancel");
					self._lastTime = 0;
					// EventCenter.PostEvent(Game_Event.FragGameChargeCancel);
					EventSystem.Instance.Publish(self.DomainScene(), new EventType.FrogCancelCharge() { });
				}
			}
			self._onPointerDownStart = false;
		}
		
		
		public static void OnMenuClickHandler(this DlgFragGameMainUI self)
		{
			// if (!inputEnable)
			// {
			// 	return;
			// }
			// UIManager.GetInstance().ShowPanel<FragSettingPanel>("FragSettingPanel", E_UI_Layer.Tip);
			self.DomainScene().GetComponent<UIComponent>().ShowWindow(WindowID.WindowID_FrogMenu);
		}
		
		public static void OnBack2LastPosClickHandler(this DlgFragGameMainUI self)
		{
			self.ClientScene().GetComponent<UIComponent>().ShowWindow(WindowID.WindowID_WatchAd);
		}
		

	}
}
