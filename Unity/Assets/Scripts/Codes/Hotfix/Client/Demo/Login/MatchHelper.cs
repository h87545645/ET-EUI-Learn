using System;

namespace ET.Client
{
    public static class MatchHelper
    {
        public static async ETTask StartMatchAsync(Scene zoneScene)
        {
            try
            {
                EventSystem.Instance.Publish(zoneScene, new EventType.LobbyStartMatching());
                G2C_StartMatchResponse g2CStartMatch = await zoneScene.GetComponent<SessionComponent>().Session.Call(new C2G_StartMatchRequest()) as G2C_StartMatchResponse;
                EventSystem.Instance.Publish(zoneScene, new EventType.LobbyShowMatchingCancelBtn());
                await ETTask.CompletedTask;
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
                EventSystem.Instance.Publish(zoneScene, new EventType.LobbyHideMatching());
                await ETTask.CompletedTask;

            }
            catch (Exception e)
            {
                Log.Error(e);
            }	
        }
    }
}