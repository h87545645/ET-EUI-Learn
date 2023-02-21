

namespace ET.Client
{
    [Event(SceneType.Current)]
    public class FrogGameFinished: AEvent<EventType.FrogGameFinished>
    {
        protected override async ETTask Run(Scene scene, EventType.FrogGameFinished args)
        {
            FrogGameComponent frogGameComponent = scene.GetComponent<FrogGameComponent>();
            await frogGameComponent.OnPlayerCompleted();
            // await ETTask.CompletedTask;
        }
    }
}