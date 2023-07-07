

namespace ET.Client
{
    [Event(SceneType.Process)]
    [FriendOf(typeof(FrogComponent))]
    public class FrogGameCameraChangeHandler: AEvent<ET.EventType.FrogGameCameraChange>
    {
       
        protected override async ETTask Run(Scene scene, ET.EventType.FrogGameCameraChange args)
        {
            Scene curScene = scene.GetComponent<ClientSceneManagerComponent>().Get(1).CurrentScene();
            Unit player = curScene.GetComponent<UnitComponent>().Get(args.UnitId);
            player.GetComponent<FrogComponent>().currentCameraIndex = args.Index;
            if (curScene.GetComponent<FrogGameComponent>() != null)
            {
                await curScene.GetComponent<FrogGameComponent>().OnCameraMove(args.Index);
            }
            else
            {
                await ETTask.CompletedTask;
            }
           
        }
    }
}