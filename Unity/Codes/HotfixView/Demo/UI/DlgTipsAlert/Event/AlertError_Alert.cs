namespace ET
{
    [FriendClass(typeof(ShowWindowData))]
    [FriendClass(typeof(WindowData))]
    public class AlertError_Alert : AEvent<EventType.AlertError>
    {
        protected override void Run(EventType.AlertError args)
        {
            // args.ZoneScene.GetComponent<UIComponent>().HideWindow(WindowID.WindowID_Login);
            ShowWindowData data = new ShowWindowData();
            data.contextData = new WindowData();
            (data.contextData as WindowData).Message = args.Info;
            args.ZoneScene.GetComponent<UIComponent>().ShowWindow(WindowID.WindowID_TipsAlert ,data);
        }
    }
}