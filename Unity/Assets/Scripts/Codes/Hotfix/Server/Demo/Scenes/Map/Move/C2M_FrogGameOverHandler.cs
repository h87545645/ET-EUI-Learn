

namespace ET.Server
{
    [ActorMessageHandler(SceneType.Map)]
    public class C2M_FrogGameOverHandler : AMActorLocationHandler<Unit, C2M_FrogGameOver>
    {
        protected override async ETTask Run(Unit unit, C2M_FrogGameOver message)
        {
            // //记录操作到数据库
            // var accounts = await DBManagerComponent.Instance.GetZoneDB(1)
            //         .Query<Account>(d => d.AccountName.Equals(request.Account.Trim()));
            // // 广播玩家操作
            // Room room = Game.Scene.GetComponent<RoomComponent>().Get(gamer.RoomID);
            //
            //
            // M2C_FrogOpera m2CFrogOpera = new M2C_FrogOpera() {};
            // m2CFrogOpera.Id = unit.Id;
            // m2CFrogOpera.opera = message.opera;
            // m2CFrogOpera.chargeTime = message.chargeTime;
            // m2CFrogOpera.force = message.force;
            // m2CFrogOpera.dir = message.dir;
            // MessageHelper.FrogBroadcast(unit, m2CFrogOpera);
            // await ETTask.CompletedTask;
        }
    }
}