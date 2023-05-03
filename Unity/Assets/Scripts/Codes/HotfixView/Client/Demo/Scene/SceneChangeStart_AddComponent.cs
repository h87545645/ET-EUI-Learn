using UnityEngine.SceneManagement;
using YooAsset;

namespace ET.Client
{
    [Event(SceneType.Client)]
    public class SceneChangeStart_AddComponent: AEvent<EventType.SceneChangeStart>
    {
        protected override async ETTask Run(Scene scene, EventType.SceneChangeStart args)
        {
            scene.GetComponent<UIComponent>().HideWindow(WindowID.WindowID_Lobby);
            Scene currentScene = scene.CurrentScene();
            
            
            /*
            * @Author: Simon
            * @Description:
            * @Date: 2023年04月26日 星期三 20:04:07
            * @Modify:改为yooassets
            */
            var package = YooAssets.GetPackage("DefaultPackage");
            // string location = "Assets/GameRes/Scene/Login";
            var sceneMode = UnityEngine.SceneManagement.LoadSceneMode.Single;
            bool activateOnLoad = true;
            SceneOperationHandle handle = package.LoadSceneAsync(currentScene.Name, sceneMode, activateOnLoad);
            await handle.Task;
            
            
            // 加载场景资源
            // await ResourcesComponent.Instance.LoadBundleAsync($"{currentScene.Name}.unity3d");
            // 切换到map场景

            // await SceneManager.LoadSceneAsync(currentScene.Name);
            
            currentScene.AddComponent<FrogGameComponent>();
			

            currentScene.AddComponent<FrogGameOperaComponent>();
        }
    }
}