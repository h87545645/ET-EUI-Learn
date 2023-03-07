

namespace ET.Client
{
    [Event(SceneType.Current)]
    public class SceneChangeFinishEvent_CreateUIFrogMain : AEvent<EventType.SceneChangeFinish>
    {
        protected override async ETTask Run(Scene scene, EventType.SceneChangeFinish args)
        {
            await scene.GetComponent<UIComponent>().ShowWindowAsync(WindowID.WindowID_FragGameMainUI);
        }
    }
}
