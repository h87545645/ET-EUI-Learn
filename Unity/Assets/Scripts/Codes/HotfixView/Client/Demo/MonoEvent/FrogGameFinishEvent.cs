

namespace ET.Client
{
    [Event(SceneType.Process)]
    public class FrogGameFinishEvent: AEvent<GameFinishEvent>
    {
        protected override async ETTask Run(Scene scene, GameFinishEvent args)
        {
            Scene curScene = scene.GetComponent<ClientSceneManagerComponent>().Get(1).CurrentScene();
            await curScene.GetComponent<FrogGameComponent>().OnPlayerCompleted();
        }
    }
}