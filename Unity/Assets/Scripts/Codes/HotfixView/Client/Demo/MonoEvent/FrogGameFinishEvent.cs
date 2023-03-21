

namespace ET.Client
{
    [Event(SceneType.Process)]
    [FriendOf(typeof(FrogGameOperaComponent))]
    public class FrogGameFinishEvent: AEvent<GameFinishEvent>
    {
        protected override async ETTask Run(Scene scene, GameFinishEvent args)
        {
            Scene curScene = scene.GetComponent<ClientSceneManagerComponent>().Get(1).CurrentScene();
        
            Unit player = null;
            player = UnitHelper.GetMyUnitFromCurrentScene(curScene.DomainScene());
            //如果是自己
            if (args.unitId == player.Id)
            {
                C2G_GameOverMessage c2GGameOverMessage = new C2G_GameOverMessage(){RoomID = player.RoomID};
                player.ClientScene().GetComponent<SessionComponent>().Session.Send(c2GGameOverMessage);
                
                C2M_FrogGameOver c2MFrogGameOver = new C2M_FrogGameOver();
                c2MFrogGameOver.UserId = player.UserID;
                player.ClientScene().GetComponent<SessionComponent>().Session.Send(c2MFrogGameOver);
            }
           
            
            curScene.GetComponent<FrogGameOperaComponent>().inputEnable = false;
            await curScene.GetComponent<FrogGameComponent>().OnPlayerCompleted();
        }
    }
}