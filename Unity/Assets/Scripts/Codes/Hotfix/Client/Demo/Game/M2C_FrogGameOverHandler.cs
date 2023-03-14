

namespace ET.Client
{
    [MessageHandler(SceneType.Client)]
    public class M2C_FrogGameOverHandler : AMHandler<M2C_FrogGameOver>
    {
        protected override async ETTask Run(Session session, M2C_FrogGameOver message)
        {
            //游戏结束 弹出结算
            EventSystem.Instance.Publish(session.ClientScene(), new EventType.GameOverPopRecord(){msg = message});
        }
    }
}