

namespace ET.Client
{
    [Event(SceneType.Process)]
    public class FrogGameFinishEvent: AEvent<FrogCollisionEnter2D>
    {
        protected override async ETTask Run(Scene scene, FrogCollisionEnter2D args)
        {
            EventSystem.Instance.Publish(scene.DomainScene(), new EventType.FrogGameFinished() {});
        }
    }
}