

using System.Collections.Generic;

using UnityEngine;

namespace ET.Client
{
    [Event(SceneType.Current)]
    [FriendOf(typeof(FrogGameComponent))]
    [FriendOf(typeof(FrogComponent))]
    public class FrogSyncPositionUpdateArrow: AEvent<EventType.FrogSyncPositionUpdateUnit>
    {
        protected override async ETTask Run(Scene scene, EventType.FrogSyncPositionUpdateUnit args)
        {
            //如果不在同一屏幕，更细箭头
            Unit player = UnitHelper.GetMyUnitFromCurrentScene(scene);
            player.GetComponent<FrogComponent>().UpdateArrow(false);
            Dictionary<long,Unit> units = scene.GetComponent<UnitComponent>().GetAll();
            if (units.Count < 2)
            {
                return;
            }
            foreach (Unit u in units.Values)
            {
                if (u.Type == UnitType.Player)
                {
                    
                    if (u.Id != player.Id)
                    {
                        int playerCameraIndex = player.GetComponent<FrogComponent>().currentCameraIndex;
                        int ohterCameraIndex = u.GetComponent<FrogComponent>().currentCameraIndex;
                        if ( playerCameraIndex != ohterCameraIndex)
                        {
                            this.UpdateFrogArrow(player.GetComponent<FrogComponent>() , u.GetComponent<FrogComponent>());
                            break;
                        }
                        
                    }
                }
            }
            await ETTask.CompletedTask;
        }

        private void UpdateFrogArrow(FrogComponent player , FrogComponent ohter)
        {
            Vector2 direction = ohter.heroRenderer.transform.position - player.heroRenderer.transform.position;
            float angle = Mathf.Atan2(direction.y, direction.x) * Mathf.Rad2Deg;
            player.UpdateArrow(true,angle);
        }
 
    }
}