

namespace ET.Client
{
    [Event(SceneType.Process)]
    [FriendOf(typeof(FrogGameOperaComponent))]
    public class FrogGameFinishEvent: AEvent<GameFinishEvent>
    {
        protected override async ETTask Run(Scene scene, GameFinishEvent args)
        {
            Scene curScene = scene.GetComponent<ClientSceneManagerComponent>().Get(1).CurrentScene();
            if (args.isPlayer)
            {
                //如果是自己还需要发给服务器
                Unit player = null;
                player = UnitHelper.GetMyUnitFromCurrentScene(curScene.DomainScene());
         
                C2M_FrogGameOver c2MFrogGameOver = new C2M_FrogGameOver();
                c2MFrogGameOver.UserId = player.UserID;
                player.ClientScene().GetComponent<SessionComponent>().Session.Send(c2MFrogGameOver);
            }
           
            
            curScene.GetComponent<FrogGameOperaComponent>().inputEnable = false;
            await curScene.GetComponent<FrogGameComponent>().OnPlayerCompleted();
        }
    }
}