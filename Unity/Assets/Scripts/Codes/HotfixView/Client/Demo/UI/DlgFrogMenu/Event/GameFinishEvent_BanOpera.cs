


namespace ET.Client
{
    [Event(SceneType.Process)]
    public class GameFinishEvent_BanOpera : AEvent<ET.EventType.GameFinishEvent>
    {
        protected override async ETTask Run(Scene scene, ET.EventType.GameFinishEvent args)
        {
            Scene client = scene.GetComponent<ClientSceneManagerComponent>().Get(1);
            client.GetComponent<UIComponent>().HideWindow(WindowID.WindowID_FragGameMainUI);
            await ETTask.CompletedTask;
        }
    }
}
