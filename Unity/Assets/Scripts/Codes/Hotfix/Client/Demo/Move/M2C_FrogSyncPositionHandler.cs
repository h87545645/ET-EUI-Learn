

namespace ET.Client
{
    [MessageHandler(SceneType.Client)]
    public class M2C_FrogSyncPositionHandler : AMHandler<M2C_FrogSyncPosition>
    {
        protected override async ETTask Run(Session session, M2C_FrogSyncPosition message)
        {
            Unit unit = session.DomainScene().CurrentScene().GetComponent<UnitComponent>().Get(message.Id);

            unit.Position = message.Position;
            await ETTask.CompletedTask;
        }
    }
}