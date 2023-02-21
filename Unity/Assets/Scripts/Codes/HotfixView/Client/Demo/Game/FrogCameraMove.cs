

namespace ET.Client
{
    [Event(SceneType.Current)]
    // [FriendOf(typeof(FrogGameComponent))]
    public class FrogCameraMove: AEvent<EventType.FrogCameraMove>
    {
        protected override async ETTask Run(Scene scene, EventType.FrogCameraMove args)
        {
            FrogGameComponent frogGameComponent = scene.GetComponent<FrogGameComponent>();
            await frogGameComponent.OnCameraMove(args.Index);
            // await ETTask.CompletedTask;
        }
    }
}