namespace ET
{
    [FriendClass(typeof(GateMapComponent))]
    public static class EnterMapHelper
    {
        public static async ETTask<Unit> EnterMap(Player player , Session session, Unit unit = null)
        {
            // Player player = session.GetComponent<SessionPlayerComponent>().GetMyPlayer();

            // 在Gate上动态创建一个Map Scene，把Unit从DB中加载放进来，然后传送到真正的Map中，这样登陆跟传送的逻辑就完全一样了
            GateMapComponent gateMapComponent = player.AddComponent<GateMapComponent>();
            gateMapComponent.Scene = await SceneFactory.Create(gateMapComponent, "GateMap", SceneType.Map);

            Scene scene = gateMapComponent.Scene;
			
            // 这里可以从DB中加载Unit
            if (unit == null)
            {
                unit = UnitFactory.Create(scene, player.Id, UnitType.Player);
                unit.AddComponent<UnitGateComponent, long>(session.InstanceId);
            }

            StartSceneConfig startSceneConfig = StartSceneConfigCategory.Instance.GetBySceneName(session.DomainZone(), "Map1");
            // response.MyId = player.Id;
            // reply();
           
            // 开始传送
            await TransferHelper.Transfer(unit, startSceneConfig.InstanceId, startSceneConfig.Name , player.UserID == 010101);
            return unit;
        }
                
    }
}