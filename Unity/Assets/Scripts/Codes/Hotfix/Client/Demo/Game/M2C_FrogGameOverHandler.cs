

using System.Collections.Generic;

namespace ET.Client
{
    [MessageHandler(SceneType.Client)]
    public class M2C_FrogGameOverHandler : AMHandler<M2C_FrogGameOver>
    {
        protected override async ETTask Run(Session session, M2C_FrogGameOver message)
        {
            //游戏结束 弹出结算
            EventSystem.Instance.Publish(session.ClientScene(), new EventType.GameOverPopRecord(){msg = message});
            
            //通知gate 回收房间
            Unit player =  UnitHelper.GetMyUnitFromClientScene(session.DomainScene());
            C2G_GameOverMessage c2GGameOverMessage = new C2G_GameOverMessage(){RoomID = player.RoomID};
            player.ClientScene().GetComponent<SessionComponent>().Session.Send(c2GGameOverMessage);
            
            //删除unit
       
            UnitComponent unitComponent = session.DomainScene().CurrentScene()?.GetComponent<UnitComponent>();
            if (unitComponent == null)
            {
                return;
            }
            unitComponent.RemoveAll();
            // foreach (KeyValuePair<long,Unit> kvp in unitComponent.GetAll())
            // {
            //     unitComponent.Remove(kvp.Key);
            // }
            await ETTask.CompletedTask;
        }
    }
}