

namespace ET.Client
{
    [Event(SceneType.Client)]
    [FriendOf(typeof(ShowWindowData))]
    public class GameOverPopRecord_PopUI : AEvent<EventType.GameOverPopRecord>
    {
        protected override async ETTask Run(Scene scene, EventType.GameOverPopRecord args)
        {
            ShowWindowData content = new ShowWindowData();
            content.contextData = new WindowData(){GameOverData = args.msg};
            scene.GetComponent<UIComponent>().ShowWindow(WindowID.WindowID_FrogRecord,content);
            await ETTask.CompletedTask;
        }
    }
}

