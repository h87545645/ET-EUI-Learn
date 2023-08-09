﻿using System;

namespace ET.Client
{

    public static class SceneChangeHelper
    {
        // 场景切换协程
        public static async ETTask SceneChangeTo(Scene clientScene, string sceneName, long sceneInstanceId,long myId)
        {
            try
            {
                // clientScene.RemoveComponent<AIComponent>();
                clientScene.GetComponent<PlayerComponent>().MyId = myId;
                CurrentScenesComponent currentScenesComponent = clientScene.GetComponent<CurrentScenesComponent>();
                currentScenesComponent.Scene?.Dispose(); // 删除之前的CurrentScene，创建新的
                Scene currentScene = SceneFactory.CreateCurrentScene(sceneInstanceId, clientScene.Zone, sceneName, currentScenesComponent);
                UnitComponent unitComponent = currentScene.AddComponent<UnitComponent>();
         
                // 可以订阅这个事件中创建Loading界面
                EventSystem.Instance.Publish(clientScene, new EventType.SceneChangeStart());

                // 等待CreateMyUnit的消息
                Wait_CreateMyUnit waitCreateMyUnit = await clientScene.GetComponent<ObjectWait>().Wait<Wait_CreateMyUnit>();
                M2C_CreateMyUnit m2CCreateMyUnit = waitCreateMyUnit.Message;
                foreach (UnitInfo unitInfo in m2CCreateMyUnit.Units)
                {
                    if (unitComponent.Get(unitInfo.UnitId) != null)
                    {
                        continue;
                    }
                    Unit unit = UnitFactory.Create(currentScene, unitInfo);
                    unitComponent.Add(unit);
                }
                // Unit unit = UnitFactory.Create(currentScene, m2CCreateMyUnit.Unit);
                // unitComponent.Add(unit);
            
                // clientScene.RemoveComponent<AIComponent>();
            
                EventSystem.Instance.Publish(currentScene, new EventType.SceneChangeFinish());
                EventSystem.Instance.Publish(clientScene, new EventType.LobbyHideMatching());

                // 通知等待场景切换的协程
                clientScene.GetComponent<ObjectWait>().Notify(new Wait_SceneChangeFinish());
            }
            catch (Exception e)
            {
                Log.Error(e);
            }
            
        }
        
        public static async ETTask SinglePlaySceneChangeTo(Scene clientScene, string sceneName, long sceneInstanceId)
        {
            try
            {
                // clientScene.RemoveComponent<AIComponent>();
          
                CurrentScenesComponent currentScenesComponent = clientScene.GetComponent<CurrentScenesComponent>();
                currentScenesComponent.Scene?.Dispose(); // 删除之前的CurrentScene，创建新的
                Scene currentScene = SceneFactory.CreateCurrentScene(sceneInstanceId, clientScene.Zone, sceneName, currentScenesComponent);
                UnitComponent unitComponent = currentScene.AddComponent<UnitComponent>();
         
                // 可以订阅这个事件中创建Loading界面
                EventSystem.Instance.Publish(clientScene, new EventType.SceneChangeStart());

                PlayerComponent playerComponent = clientScene.GetComponent<PlayerComponent>();
                UnitInfo info = new UnitInfo();
                info.Type = (int)UnitType.Player;
                info.ConfigId = 1001;
                info.UnitId = 1001;
                info.PlayerName = playerComponent.MyInfo.NickName;
                
                Unit unit = UnitFactory.Create(currentScene, info);
                unit.isSinglePlay = true;
                unitComponent.Add(unit);
                clientScene.GetComponent<PlayerComponent>().MyId = unit.Id;
                // Unit unit = UnitFactory.Create(currentScene, m2CCreateMyUnit.Unit);
                // unitComponent.Add(unit);
            
                // clientScene.RemoveComponent<AIComponent>();
            
                EventSystem.Instance.Publish(currentScene, new EventType.SceneChangeFinish());
                EventSystem.Instance.Publish(clientScene, new EventType.LobbyHideMatching());

                // 通知等待场景切换的协程
                clientScene.GetComponent<ObjectWait>().Notify(new Wait_SceneChangeFinish());
                // EventSystem.Instance.Publish(currentScene, new EventType.SingleSceneMark());
                await ETTask.CompletedTask;

            }
            catch (Exception e)
            {
                Log.Error(e);
            }
            
        }
    }
}