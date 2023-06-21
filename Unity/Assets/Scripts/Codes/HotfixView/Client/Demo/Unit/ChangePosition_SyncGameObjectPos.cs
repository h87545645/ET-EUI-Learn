using UnityEngine;

namespace ET.Client
{
    [Event(SceneType.Current)]
    [FriendOf(typeof(FrogComponent))]
    public class ChangePosition_SyncGameObjectPos: AEvent<EventType.ChangePosition>
    {
        protected override async ETTask Run(Scene scene, EventType.ChangePosition args)
        {
            Unit unit = args.Unit;
            FrogComponent frog = unit.GetComponent<FrogComponent>();
            
            
            // GameObjectComponent gameObjectComponent = unit.GetComponent<GameObjectComponent>();
            if (frog == null)
            {
                return;
            }
            Transform transform = frog.heroRenderer.transform;
            transform.position = unit.Position;
            await ETTask.CompletedTask;
        }
    }
}