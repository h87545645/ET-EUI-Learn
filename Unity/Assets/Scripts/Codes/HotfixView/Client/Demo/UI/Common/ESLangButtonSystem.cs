using Honeti;
using UnityEngine;

namespace ET.Client
{
    [FriendOf((typeof(I18NComponent)))]
    public static class ESLangButtonSystem
    {
        public static void RegisterUIEvent(this ESLangButton self)
        {
            self.E_LangButtonButton.AddListener(self.OnLangBtnClick);
        }
        public static void OnLangBtnClick(this ESLangButton self)
        {
            LanguageCode curr = Root.Instance.Scene.GetComponent<I18NComponent>().langMgr.gameLang == LanguageCode.EN ? LanguageCode.SCN : LanguageCode.EN;
            Root.Instance.Scene.GetComponent<I18NComponent>().langMgr.setLanguage(curr);
            
            // AnyThinkAdHelper.Instance.ShowActiveAd( (bool suc) =>
            // {
            //     Debug.Log("------------------------ShowActiveAd cb");
            // });
        }
    }  
}

