using UnityEngine.SceneManagement;

namespace ET.Client
{
	[Event(SceneType.Client)]
	public class LoginFinish_CreateLobbyUI: AEvent<EventType.LoginFinish>
	{
		protected override async ETTask Run(Scene scene, EventType.LoginFinish args)
		{
			scene.GetComponent<UIComponent>().HideWindow(WindowID.WindowID_Login);
			// 加载场景资源
			await ResourcesComponent.Instance.LoadBundleAsync("lobby.unity3d");
			// 切换到map场景

			await SceneManager.LoadSceneAsync("Lobby");
			await scene.GetComponent<UIComponent>().ShowWindowAsync(WindowID.WindowID_Lobby);
		}
	}
}
