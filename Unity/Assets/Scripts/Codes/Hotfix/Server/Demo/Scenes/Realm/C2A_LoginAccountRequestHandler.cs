using System;
using System.Net;


namespace ET.Server
{
    [MessageHandler(SceneType.Account)]
    public class C2A_LoginAccountRequestHandler: AMRpcHandler<  C2A_LoginAccountRequest, A2C_LoginAccountResponse>
    {
        protected override async ETTask Run(Session session, C2A_LoginAccountRequest request, A2C_LoginAccountResponse response)
        {
            //测试
            Log.Debug($"C2A_LoginAccountRequestHandler ");
            await ETTask.CompletedTask;
        }
    }
}