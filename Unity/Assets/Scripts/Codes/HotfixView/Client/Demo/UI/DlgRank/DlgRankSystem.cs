using System.Collections;
using System.Collections.Generic;
using System;
using System.Runtime.CompilerServices;
using UnityEngine;
using UnityEngine.UI;

namespace ET.Client
{
	[FriendOf(typeof(DlgRank))]
	[FriendOf(typeof(ET.Client.DlgRankViewComponent))]
	[FriendOf(typeof(WindowData))]
	public static  class DlgRankSystem
	{

		public static void RegisterUIEvent(this DlgRank self)
		{
			self.View.ELoopScrollList_RankLoopVerticalScrollRect.AddItemRefreshListener((transform, i) =>
			{
				self.OnLoopListItemRefreshHandler(transform,i);
			});
			self.View.E_CloseButtonButton.AddListener(self.OnCloseClickHandler);

			self.Medals = self.View.uiTransform.GetComponent<GetSpriteFrame>().Images;
		}

		public static void ShowWindow(this DlgRank self, Entity contextData = null)
		{
			self.Ranks = (contextData as WindowData).Ranks;
			int n = self.Ranks.Count;
			self.AddUIScrollItems(ref self.ScrollItemRanksDict , n);
			self.View.ELoopScrollList_RankLoopVerticalScrollRect.SetVisible(true,n);
		}


		public static void HideWindow(this DlgRank self)
		{
			self.RemoveUIScrollItems(ref self.ScrollItemRanksDict);
		}


		public static void OnLoopListItemRefreshHandler(this DlgRank self , Transform transform, int index)
		{
			Scroll_Item_Rank scrollItemRank = self.ScrollItemRanksDict[index].BindTrans(transform);
			self.SetRank(index , scrollItemRank);
			scrollItemRank.ELabel_nameTextMeshProUGUI.SetText(self.Ranks[index].NickName);
			scrollItemRank.ELabel_winTextMeshProUGUI.SetText(self.Ranks[index].Wins.ToString());
			string bestTime =  UnityUtils.TimeToStringHMS( (float)(self.Ranks[index].BestTime * 0.001));
			scrollItemRank.ELabel_timeTextMeshProUGUI.SetText(bestTime);
			scrollItemRank.ELabel_jumpsTextMeshProUGUI.SetText(self.Ranks[index].BestJumpCnt.ToString());
		}

		private static void SetRank(this DlgRank self ,int rank , Scroll_Item_Rank item)
		{
			if (rank < 3)
			{
				item.ELabel_rankTextMeshProUGUI.gameObject.SetActive(false);
				item.EImage_medalImage.gameObject.SetActive(true);
				item.EImage_medalImage.sprite = self.Medals[rank];
			}
			else
			{
				item.ELabel_rankTextMeshProUGUI.gameObject.SetActive(true);
				item.EImage_medalImage.gameObject.SetActive(false);
				item.ELabel_rankTextMeshProUGUI.SetText(rank.ToString());
			}
		}
		
		
		public static void OnCloseClickHandler(this DlgRank self)
		{
			AudioPlayManager.instance.PlayOnceAudio("buttoun_click");
			self.DomainScene().GetComponent<UIComponent>().HideWindow(WindowID.WindowID_Rank);
		}
	}
}
