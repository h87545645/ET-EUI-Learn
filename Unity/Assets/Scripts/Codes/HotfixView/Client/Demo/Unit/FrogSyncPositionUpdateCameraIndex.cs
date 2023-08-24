

using System.Collections.Generic;

using UnityEngine;

namespace ET.Client
{
    [Event(SceneType.Current)]
    [FriendOf(typeof(FrogGameComponent))]
    [FriendOf(typeof(FrogComponent))]
    public class FrogSyncPositionUpdateCameraIndex: AEvent<EventType.FrogSyncPositionUpdateCameraIndex>
    {
        protected override async ETTask Run(Scene scene, EventType.FrogSyncPositionUpdateCameraIndex args)
        {
            args.unit.GetComponent<FrogComponent>().currentCameraIndex = args.CameraIndex;
        }
    }
}