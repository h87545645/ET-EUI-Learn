
namespace ET.Client
{
    [Event(SceneType.Current)]
    public class FrogPelicanFlyToPlayer: AEvent<EventType.FrogPelicanFlyToPlayer>
    {
        protected override async ETTask Run(Scene scene, EventType.FrogPelicanFlyToPlayer args)
        {
            FrogGameComponent frogGameComponent = scene.GetComponent<FrogGameComponent>();
            await frogGameComponent.OnPelicanFlyToPlayer();
            // await ETTask.CompletedTask;
        }
    }
}