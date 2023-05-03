using UnityEngine.SceneManagement;
using YooAsset;

namespace ET.Client
{
	[Event(SceneType.Client)]
	public class LoginFinish_CreateLobbyUI: AEvent<EventType.LoginFinish>
	{
		protected override async ETTask Run(Scene scene, EventType.LoginFinish args)
		{
			scene.GetComponent<UIComponent>().HideWindow(WindowID.WindowID_Login);
			
			
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
			SceneOperationHandle handle = package.LoadSceneAsync("Lobby", sceneMode, activateOnLoad);
			await handle.Task;
			
			
			// 加载场景资源
			// await ResourcesComponent.Instance.LoadBundleAsync("lobby.unity3d");
			// 切换到map场景

			// await SceneManager.LoadSceneAsync("Lobby");
			await scene.GetComponent<UIComponent>().ShowWindowAsync(WindowID.WindowID_Lobby);
		}
	}
}
