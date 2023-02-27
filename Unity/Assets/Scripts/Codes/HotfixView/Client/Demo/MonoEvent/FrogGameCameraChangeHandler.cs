

namespace ET.Client
{
    [Event(SceneType.Process)]
    public class FrogGameCameraChangeHandler: AEvent<FrogGameCameraChange>
    {
        protected override async ETTask Run(Scene scene, FrogGameCameraChange args)
        {
            EventSystem.Instance.Publish(scene.DomainScene(), new EventType.FrogCameraMove() {Index = args.Index});
        }
    }
}