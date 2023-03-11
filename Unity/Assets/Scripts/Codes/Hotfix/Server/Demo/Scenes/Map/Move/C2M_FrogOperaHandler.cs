

namespace ET.Server
{
    [ActorMessageHandler(SceneType.Map)]
    public class C2M_FrogOperaHandler : AMActorLocationHandler<Unit, C2M_FrogOpera>
    {
        protected override async ETTask Run(Unit unit, C2M_FrogOpera message)
        {
            // unit.FindPathMoveToAsync(message.Position).Coroutine();
            // 广播玩家操作
            M2C_FrogOpera m2CFrogOpera = new M2C_FrogOpera() {};
            m2CFrogOpera.Id = unit.Id;
            m2CFrogOpera.opera = message.opera;
            m2CFrogOpera.chargeTime = message.chargeTime;
            m2CFrogOpera.force = message.force;
            m2CFrogOpera.dir = message.dir;
            Room room = unit.DomainScene().GetComponent<RoomComponent>().Get(unit.RoomID);
            room.Broadcast(m2CFrogOpera);
            await ETTask.CompletedTask;
        }
    }
}