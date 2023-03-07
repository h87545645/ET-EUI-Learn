


namespace ET.Client
{
    [MessageHandler(SceneType.Client)]
    public class M2C_FrogOperaHandler : AMHandler<M2C_FrogOpera>
    {
        protected override async ETTask Run(Session session, M2C_FrogOpera message)
        {

            switch ((FrogOpera)message.opera)
            {
                case FrogOpera.Charge:
                    EventSystem.Instance.Publish(session.DomainScene().CurrentScene(), new EventType.FrogEnterCharge() {unitId = message.Id});
                    break;
                case FrogOpera.ChargeCancle:
                    EventSystem.Instance.Publish(session.DomainScene().CurrentScene(), new EventType.FrogCancelCharge() {unitId = message.Id});
                    break;
                case FrogOpera.Jump:
                    EventSystem.Instance.Publish(session.DomainScene().CurrentScene(), new EventType.FrogJump() {unitId = message.Id , chargeTime = message.chargeTime});
                    break;
                case FrogOpera.Direction:
                    EventSystem.Instance.Publish(session.DomainScene().CurrentScene(), new EventType.FrogDirection() 
                            {unitId = message.Id , force = message.force, dir = (ET.FrogDirection)message.dir});
                    break;
            }
            await ETTask.CompletedTask;
        }
    }
}
