

using UnityEngine.SceneManagement;

namespace ET.Client
{
    [Event(SceneType.Client)]
    public class BackToLobbyScene_ResetComponent: AEvent<EventType.BackToLobbyScene>
    {
        protected override async ETTask Run(Scene scene, EventType.BackToLobbyScene args)
        {
            CurrentScenesComponent currentScenesComponent = scene.GetComponent<CurrentScenesComponent>();
            currentScenesComponent.Scene?.Dispose(); // 删除CurrentScene
            
            // 加载场景资源
            await ResourcesComponent.Instance.LoadBundleAsync("lobby.unity3d");
            // 切换到map场景

            await SceneManager.LoadSceneAsync("lobby");
           
            
            //弹出大厅弹窗
            await scene.GetComponent<UIComponent>().ShowWindowAsync(WindowID.WindowID_Lobby);
        }
    }
}