



namespace ET.Client
{
    [MessageHandler(SceneType.Client)]
    public class G2C_ReconnectHandler : AMHandler<G2C_Reconnect>
    {
        protected override async ETTask Run(Session session, G2C_Reconnect message)
        {

           
            await ETTask.CompletedTask;
        }
    }
}
