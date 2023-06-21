namespace ET.Client
{
    [Event(SceneType.Client)]
    public class LobbyStartMatchingEvent_ShowMatch : AEvent<EventType.LobbyStartMatching>
    {
        protected override async ETTask Run(Scene scene, EventType.LobbyStartMatching args)
        {
            scene.GetComponent<UIComponent>().ShowWindow(WindowID.WindowID_Matching);
             await ETTask.CompletedTask;
        }
    }
}