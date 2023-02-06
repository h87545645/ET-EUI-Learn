using System;

namespace ET
{
    public static class MatchHelper
    {
        public static async ETTask StartMatchAsync(Scene zoneScene)
        {
            try
            {
                G2C_StartMatchResponse g2CEnterMap = await zoneScene.GetComponent<SessionComponent>().Session.Call(new C2G_StartMatchRequest()) as G2C_StartMatchResponse;
                // zoneScene.GetComponent<PlayerComponent>().MyId = g2CEnterMap.MyId;
                
                // 等待场景切换完成
                await zoneScene.GetComponent<ObjectWait>().Wait<WaitType.Wait_SceneChangeFinish>();
                
                Game.EventSystem.Publish(new EventType.EnterMapFinish() {ZoneScene = zoneScene});
            }
            catch (Exception e)
            {
                Log.Error(e);
            }	
        }
    }
}