

using System;
using System.Collections.Generic;
using System.Linq;
using AnyThinkAds.Api;
using AnyThinkAds.ThirdParty.LitJson;

using UnityEngine;
using UnityEngine.Events;

namespace ET
{
    
    public  class AnyThinkAdHelper : Singleton<AnyThinkAdHelper> {
        private Dictionary<string, UnityAction<bool>> adCallbacks = new Dictionary<string, UnityAction<bool>>();
    
        
    
        // public void InitSDK()
        // {
        //     ATSDKAPI.initSDK("a5c4ad280995c9", "7b4e37f819dbee652ef79c4506e14288");
        // }
        //
        //
        // public void SetLogDebug()
        // {
        //     ATSDKAPI.setLogDebug(true);
        // }
        //
        // public void SetChannel()
        // {
        //     ATSDKAPI.setChannel("unity3d_taptap_channel"); 
        // }
        
        public bool IsRewardPosReady(string pos)
        {
            return  ATRewardedAutoVideo.Instance.autoLoadRewardedVideoReadyForPlacementID(pos);
        }
        
        public void ShowActiveAd(UnityAction<bool> cb)
        {
            // string pos = null;
            //
            // foreach (int adPos in Enum.GetValues(typeof (AnyThinkAdDefine.ActiveAdPos)))
            // {
            //     if (IsRewardPosReady(adPos.ToString()))
            //     {
            //         pos = adPos.ToString();
            //         break;
            //     }
            // }

            if (IsRewardPosReady(AnyThinkAdDefine.BackupAd))
            {
                this.adCallbacks.TryAdd(AnyThinkAdDefine.BackupAd, null);
                this.adCallbacks[AnyThinkAdDefine.BackupAd] = cb;
                ATRewardedAutoVideo.Instance.showAutoAd(AnyThinkAdDefine.BackupAd);
            }
            else
            {
                if (cb != null)
                {
                    cb(false);
                } 
            }
        }

        private void ShowActiveAdFinish(string pos, bool suc)
        {
            if (this.adCallbacks.ContainsKey(pos))
            {
                this.adCallbacks[pos](suc);
                this.adCallbacks.Remove(pos);
            }
        }
        
        public void addAutoLoadAdPlacementID()
        {


            ATRewardedAutoVideo.Instance.client.onAdLoadEvent += onAdLoad; 
            ATRewardedAutoVideo.Instance.client.onAdLoadFailureEvent += onAdLoadFail;  
            ATRewardedAutoVideo.Instance.client.onAdVideoStartEvent  += onAdVideoStartEvent;
            ATRewardedAutoVideo.Instance.client.onAdVideoEndEvent  += onAdVideoEndEvent;       
            ATRewardedAutoVideo.Instance.client.onAdVideoFailureEvent += onAdVideoPlayFail;        
            ATRewardedAutoVideo.Instance.client.onAdClickEvent += onAdClick;
            ATRewardedAutoVideo.Instance.client.onRewardEvent += onReward;
            ATRewardedAutoVideo.Instance.client.onAdVideoCloseEvent += onAdVideoClosedEvent;
            


            // List<string> adposArr = new List<string>();
            // foreach (int i in Enum.GetValues(typeof (AnyThinkAdDefine.ActiveAdPos)))
            // {
            //     adposArr.Add(i.ToString());
            // }

            string[] temp = new []{AnyThinkAdDefine.BackupAd};
            ATRewardedAutoVideo.Instance.addAutoLoadAdPlacementID(temp);
        }

        //广告加载成功
        public void onAdLoad(object sender,ATAdEventArgs erg)
        {
            Debug.Log("Developer callback onAdLoad :" + erg.placementId);
        }
        //广告加载失败
        public void onAdLoadFail(object sender,ATAdErrorEventArgs erg )
        {
            Debug.Log("Developer callback onAdLoadFail :" + erg.placementId + "--erg.code:" + erg.errorCode + "--msg:" + erg.errorMessage);
        }

        public void onAdVideoStartEvent(object sender, ATAdEventArgs erg) {
            Debug.Log("Developer onAdVideoStartEvent------" + "->" + JsonMapper.ToJson(erg.callbackInfo.toDictionary()));
        } 

        public void onAdVideoEndEvent(object sender, ATAdEventArgs erg)
        {
            Debug.Log("Developer onAdVideoEndEvent------" + "->" + JsonMapper.ToJson(erg.callbackInfo.toDictionary()));
        }


        public void onAdVideoPlayFail(object sender, ATAdErrorEventArgs erg)
        {
            Debug.Log("Developer onAdVideoClosedEvent------" + "->" + JsonMapper.ToJson(erg.errorMessage));
            this.ShowActiveAdFinish(erg.placementId,false);
        }


        //sender 为广告类型对象，erg为返回信息
        //广告被点击
        public void onAdClick(object sender,ATAdEventArgs erg)
        {
            Debug.Log("Developer callback onAdClick :" + erg.placementId);
        }

        public void onReward(object sender, ATAdEventArgs erg)
        {
            Debug.Log("Developer onReward------" + "->" + JsonMapper.ToJson(erg.callbackInfo.toDictionary()));
            this.ShowActiveAdFinish(erg.placementId,true);
        }


        public void onAdVideoClosedEvent(object sender, ATAdEventArgs erg)
        {
            Debug.Log("Developer onAdVideoClosedEvent------" + "->" + JsonMapper.ToJson(erg.callbackInfo.toDictionary()));
            this.ShowActiveAdFinish(erg.placementId,false);
        }



        
    }
}

