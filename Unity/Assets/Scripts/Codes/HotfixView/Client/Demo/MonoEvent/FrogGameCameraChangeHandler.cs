

namespace ET.Client
{
    [Event(SceneType.Process)]
    public class FrogGameCameraChangeHandler: AEvent<FrogGameCameraChange>
    {
        protected override async ETTask Run(Scene scene, FrogGameCameraChange args)
        {
            Scene curScene = scene.GetComponent<ClientSceneManagerComponent>().Get(1).CurrentScene();
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