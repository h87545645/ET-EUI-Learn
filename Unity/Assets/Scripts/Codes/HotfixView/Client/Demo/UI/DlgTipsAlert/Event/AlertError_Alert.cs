namespace ET.Client
{


    [FriendOf(typeof(ShowWindowData))]
    [FriendOf(typeof(WindowData))]
    [Event(SceneType.Client)]
    public class AlertError_Alert: AEvent<EventType.AlertError>
    {
        protected override async ETTask Run(Scene scene, EventType.AlertError args)
        {
            // args.ZoneScene.GetComponent<UIComponent>().HideWindow(WindowID.WindowID_Login);
            ShowWindowData data = new ShowWindowData();
            data.contextData = new WindowData();
            (data.contextData as WindowData).Message = args.Info;
            scene.DomainScene().GetComponent<UIComponent>().ShowWindow(WindowID.WindowID_TipsAlert, data);
            await ETTask.CompletedTask;
        }
    }
    
}