using System;

namespace ET.Client
{
    public static class MatchHelper
    {
        public static async ETTask StartMatchAsync(Scene zoneScene)
        {
            try
            {
                G2C_StartMatchResponse g2CStartMatch = await zoneScene.GetComponent<SessionComponent>().Session.Call(new C2G_StartMatchRequest()) as G2C_StartMatchResponse;
                await ETTask.CompletedTask;
                // zoneScene.GetComponent<PlayerComponent>().MyId = g2CEnterMap.MyId;

                // 等待场景切换完成
                // await zoneScene.GetComponent<ObjectWait>().Wait<WaitType.Wait_SceneChangeFinish>();
                //
                // Game.EventSystem.Publish(new EventType.EnterMapFinish() {ZoneScene = zoneScene});
            }
            catch (Exception e)
            {
                Log.Error(e);
            }	
        }
        
        public static async ETTask ExitMatchAsync(Scene zoneScene)
        {
            try
            {
                G2C_PlayerExitMatchResponse g2CPlayerExitMatch = await zoneScene.GetComponent<SessionComponent>().
                        Session.Call(new C2G_PlayerExitMatchRequest()) as G2C_PlayerExitMatchResponse;
                await ETTask.CompletedTask;

            }
            catch (Exception e)
            {
                Log.Error(e);
            }	
        }
    }
}