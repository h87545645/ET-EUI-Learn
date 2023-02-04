namespace ET
{
    public class AlertError_Alert : AEventAsync<EventType.AlertError>
    {
        protected override async ETTask Run(EventType.AlertError args)
        {
            // args.ZoneScene.GetComponent<UIComponent>().HideWindow(WindowID.WindowID_Login);
            await args.ZoneScene.GetComponent<UIComponent>().ShowWindowAsync(WindowID.WindowID_TipsAlert);
        }
    }
}