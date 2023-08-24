using System.Collections.Generic;

using UnityEngine;

namespace ET.Client
{
    [Event(SceneType.Current)]
    [FriendOf(typeof(FrogGameComponent))]
    [FriendOf(typeof(FrogComponent))]
    public class ChangePosition_SyncGameObjectPos: AEvent<EventType.ChangePosition>
    {
        protected override async ETTask Run(Scene scene, EventType.ChangePosition args)
        {
            // if (scene.GetComponent<FrogGameComponent>() == null || scene.GetComponent<FrogGameComponent>().isSinglePlay)
            // {
            //     return;
            // }
            Unit unit = args.Unit;
            if (unit.isSinglePlay)
            {
                return;
            }
            FrogComponent frog = unit.GetComponent<FrogComponent>();
            if (frog == null)
            {
                return;
            }
            Transform transform = frog.heroRenderer.transform;
            transform.position = unit.Position;
            EventSystem.Instance.Publish(scene.DomainScene(), new EventType.FrogSyncPositionUpdateUnit() {});
        }
    }
}