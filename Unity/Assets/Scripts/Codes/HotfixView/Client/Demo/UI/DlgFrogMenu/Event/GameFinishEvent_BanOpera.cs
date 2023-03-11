


namespace ET.Client
{
    [Event(SceneType.Process)]
    public class GameFinishEvent_BanOpera : AEvent<GameFinishEvent>
    {
        protected override async ETTask Run(Scene scene, GameFinishEvent args)
        {
            scene.GetComponent<UIComponent>().HideWindow(WindowID.WindowID_FragGameMainUI);
            await ETTask.CompletedTask;
        }
    }
}
