

using UnityEngine.SceneManagement;

namespace ET.Client
{
    [Event(SceneType.Client)]
    public class SessionTimeout_RestartGame: AEvent<EventType.RestartGame>
    {
        protected override async ETTask Run(Scene scene, EventType.RestartGame args)
        {
   
            UnityEngine.SceneManagement.Scene currScene = SceneManager.GetActiveScene();
            if (!currScene.name.Equals("Lobby"))
            {
                await EventSystem.Instance.PublishAsync(scene, new EventType.BackToLobbyScene());
            }
            scene.GetComponent<UIComponent>().HideWindow(WindowID.WindowID_Lobby);
            scene.GetComponent<UIComponent>().ShowWindow(WindowID.WindowID_Login);
            await ETTask.CompletedTask;
        }
    }
}