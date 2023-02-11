namespace ET.Demo.UI.UIMapMain
{
    public class SceneChangeFinishEvent_CreateUIMapMain : AEventAsync<EventType.SceneChangeFinish>
    {
        protected override async ETTask Run(EventType.SceneChangeFinish args)
        {
            await args.CurrentScene.GetComponent<UIComponent>().ShowWindowAsync(WindowID.WindowID_MapOperateMainUI);
        }
    }
}