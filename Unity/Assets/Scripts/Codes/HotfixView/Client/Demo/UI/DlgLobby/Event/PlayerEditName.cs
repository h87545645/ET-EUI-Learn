
namespace ET.Client
{
    [Event(SceneType.Client)]
    [FriendOf(typeof(DlgLobby))]
    public class PlayerEditName: AEvent<EventType.PlayerEditName>
    {
        protected override async ETTask Run(Scene scene, EventType.PlayerEditName args)
        {
            PlayerComponent playerComponent = scene.ClientScene().GetComponent<PlayerComponent>();
            G2C_PlayerEditInfoResponse g2cPlayerEditInfoResponse = await scene.GetComponent<SessionComponent>().Session.Call
                    (new C2G_PlayerEditInfoRequest(){Name = args.Name , AccountId = playerComponent.MyInfo.AccountId}) as G2C_PlayerEditInfoResponse;
            scene.GetComponent<UIComponent>().GetDlgLogic<DlgLobby>().PlayNameInput.text = args.Name;
        }
    }
}
