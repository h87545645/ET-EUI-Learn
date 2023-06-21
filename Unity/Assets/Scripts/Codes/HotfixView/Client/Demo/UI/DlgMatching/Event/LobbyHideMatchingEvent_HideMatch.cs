

namespace ET.Client
{
    [Event(SceneType.Client)]
    public class LobbyHideMatchingEvent_HideMatch : AEvent<EventType.LobbyHideMatching>
    {
        protected override async ETTask Run(Scene scene, EventType.LobbyHideMatching args)
        {
            scene.GetComponent<UIComponent>().HideWindow(WindowID.WindowID_Matching);
            await ETTask.CompletedTask;
        }
    }
}