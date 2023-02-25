using UnityEngine;

namespace ET.Client
{
    [Event(SceneType.Current)]
    public class AfterUnitCreate_CreateUnitView: AEvent<EventType.AfterUnitCreate>
    {
        protected override async ETTask Run(Scene scene, EventType.AfterUnitCreate args)
        {
            Unit unit = args.Unit;
            // Unit View层
            // 这里可以改成异步加载，demo就不搞了
            GameObject bundleGameObject = (GameObject)ResourcesComponent.Instance.GetAsset("Unit.unity3d", "Unit");
            //todo 根据unit类型生成玩家或者npc
            /*
             *@Author: TimTian
             *@Description:
             *@Date: 2023年02月25日 星期六 13:02:31
             *@Modify:
             */
            if (unit.Type == UnitType.NPC)
            {
                unit.AddComponent<PelicanComponent>();
            }
            else
            {
		        
            }
            GameObject prefab = bundleGameObject.Get<GameObject>("Skeleton");
	        
            GameObject go = UnityEngine.Object.Instantiate(prefab, GlobalComponent.Instance.Unit, true);
            go.transform.position = unit.Position;
            unit.AddComponent<GameObjectComponent>().GameObject = go;
            unit.AddComponent<AnimatorComponent>();
            await ETTask.CompletedTask;
        }
    }
}