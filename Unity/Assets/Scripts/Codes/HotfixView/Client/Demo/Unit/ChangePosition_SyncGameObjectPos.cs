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



            //找到其他玩家
            Dictionary<long,Unit> units = scene.GetComponent<UnitComponent>().GetAll();
            if (units.Count < 2)
            {
                return;
            }
            UpdateFrogArrow(units);
            await ETTask.CompletedTask;
        }


        private void UpdateFrogArrow(Dictionary<long,Unit> units)
        {
            FrogComponent frog1 = null, frog2 = null;
            foreach (Unit u in units.Values)
            {
                if (u.Type == UnitType.Player)
                {
                    if (frog1 == null)
                    {
                        frog1 = u.GetComponent<FrogComponent>();
                    }else if (frog2 == null)
                    {
                        frog2 = u.GetComponent<FrogComponent>();
                    }
                    else
                    {
                        break;
                    }
                }
            }

            if (frog1.currentCameraIndex != frog2.currentCameraIndex)
            {
                // float dot1 = Vector3.Dot(frog1.heroRenderer.transform.forward, frog2.heroRenderer.transform.forward);
                // float angle1 = Mathf.Acos(dot1) * Mathf.Rad2Deg;
                // frog1.UpdateArrow(true,new Quaternion(0,0,angle1,0));
                // float dot2 = Vector3.Dot(frog2.heroRenderer.transform.forward, frog1.heroRenderer.transform.forward);
                // float angle2 = Mathf.Acos(dot2) * Mathf.Rad2Deg;
                // frog2.UpdateArrow(true,new Quaternion(0,0,angle2,0));
                
                
                // Vector3 dir = frog1.heroRenderer.transform.position - frog2.heroRenderer.transform.position;
                // Quaternion quaternion = Quaternion.LookRotation(Vector3.forward,dir);
                // frog2.UpdateArrow(true,quaternion);
                
                Vector2 direction = frog1.heroRenderer.transform.position - frog2.heroRenderer.transform.position;
                float angle = Mathf.Atan2(direction.y, direction.x) * Mathf.Rad2Deg;
                
                Vector2 direction2 = frog2.heroRenderer.transform.position - frog1.heroRenderer.transform.position;
                float angle2 = Mathf.Atan2(direction.y, direction.x) * Mathf.Rad2Deg;

                
                frog1.UpdateArrow(true,angle2);
                frog2.UpdateArrow(true,angle);
            }
            else
            {
                frog1.UpdateArrow(false);
                frog2.UpdateArrow(false);
            }
        }
    }
}