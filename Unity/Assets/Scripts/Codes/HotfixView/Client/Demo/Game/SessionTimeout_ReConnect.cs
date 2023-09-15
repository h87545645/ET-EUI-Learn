

using UnityEngine.SceneManagement;

namespace ET.Client
{
    [Event(SceneType.Client)]
    public class SessionTimeout_ReConnect: AEvent<EventType.ReConnect>
    {
        protected override async ETTask Run(Scene scene, EventType.ReConnect args)
        {

            string account = GameRecord.Instance.Login.account;
            string pwd = GameRecord.Instance.Login.password;
            if (account != "" && pwd != "")
            {
                await LoginHelper.Login(scene, account, pwd);
            }
            else
            {
                UnityEngine.SceneManagement.Scene currScene = SceneManager.GetActiveScene();
                if (!currScene.name.Equals("Lobby"))
                {
                    await EventSystem.Instance.PublishAsync(scene, new EventType.BackToLobbyScene());
                }
                scene.GetComponent<UIComponent>().HideWindow(WindowID.WindowID_Lobby);
                scene.GetComponent<UIComponent>().ShowWindow(WindowID.WindowID_Login);  
            }
            await ETTask.CompletedTask;
        }
    }
}