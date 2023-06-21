namespace ET.Client
{
    [Event(SceneType.Client)]
    public class LobbyShowMatchingCancelEvent_ShowCancelBtn : AEvent<EventType.LobbyShowMatchingCancelBtn>
    {
        protected override async ETTask Run(Scene scene, EventType.LobbyShowMatchingCancelBtn args)
        {
            scene.GetComponent<UIComponent>().GetDlgLogic<DlgMatching>().View.E_CancelMatchButtonButton.SetVisible(true);
            await ETTask.CompletedTask;
        }
    }
}