

namespace ET.Client
{
    [Event(SceneType.Process)]
    public class FrogGameFinishEvent: AEvent<GameFinishEvent>
    {
        protected override async ETTask Run(Scene scene, GameFinishEvent args)
        {
            EventSystem.Instance.Publish(scene.DomainScene(), new EventType.FrogGameFinished() {});
        }
    }
}