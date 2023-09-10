using System;
using System.Net;
using System.Net.Sockets;


namespace ET.Client
{
    public static class LoginHelper
    {
        public static async ETTask<string[]> Login(Scene clientScene, string account, string password)
        {
            try
            {
                
                clientScene.RemoveComponent<RouterAddressComponent>();
                clientScene.RemoveComponent<NetClientComponent>();
                clientScene.RemoveComponent<SessionComponent>();
                // 获取路由跟realmDispatcher地址
                RouterAddressComponent routerAddressComponent = clientScene.GetComponent<RouterAddressComponent>();
                if (routerAddressComponent == null)
                {
                    routerAddressComponent = clientScene.AddComponent<RouterAddressComponent, string, int>(ConstValue.RouterHttpHost, ConstValue.RouterHttpPort);
                    await routerAddressComponent.Init();
                    
                    clientScene.AddComponent<NetClientComponent, AddressFamily>(routerAddressComponent.RouterManagerIPAddress.AddressFamily);
                }
                // 创建一个ETModel层的Session
                
                IPEndPoint realmAddress = routerAddressComponent.GetRealmAddress(account);




                //2023.2.4 modify 修改登录流程，先与账号服务器通信，账号服务器将和数据库交互，对信息进行验证或注册，获取账户唯一标识AccountId
                //TODO 考虑加入账号中心服务器，处理顶号，创建删除角色等逻辑。
             
                 // StartSceneConfig accountConfig = StartSceneConfigCategory.Instance.Account;
                 // String accountAddressString = accountConfig.InnerIPOutPort.ToString();
                 // //获取session对话，即为与目标进行连接
                 // IPEndPoint accountAddress = NetworkHelper.ToIPEndPoint(accountAddressString);
                 
                 // A2C_LoginAccountResponse a2cAccount;
                 // using (Session acountSession = await RouterHelper.CreateRouterSession(clientScene,accountAddress))
                 // {
                 //     a2cAccount = (A2C_LoginAccountResponse) await acountSession.Call(new C2A_LoginAccountRequest() { Account = account, Password = password });
                 // }
                 //
                 //
                 // //查看响应码状态 
                 // if (a2cAccount.Error != ErrorCode.ERR_Success)
                 // {
                 //     // Log.Error(a2cAccount.Error.ToString());
                 //     string errString = "";
                 //     switch (a2cAccount.Error)
                 //     {
                 //         case ErrorCode.ERR_AccountOrPasswordIsNull:
                 //             errString = "账号不能为空";
                 //             break;
                 //         case ErrorCode.ERR_PasswordError:
                 //             errString = "账号或密码不正确";
                 //             break;
                 //         case ErrorCode.ERR_AccountIsBlack:
                 //             errString = "账号被冻结";
                 //             break;
                 //
                 //     }
                 //     //TODO alter login err dialog
                 //     await EventSystem.Instance.PublishAsync(clientScene ,new EventType.AlertError() { Info = errString});
                 //     // zoneScene.GetComponent<UIComponent>().ShowWindow(WindowID.WindowID_Login);
                 //     return;
                 // }





                 R2C_Login r2CLogin;
                using (Session session = await RouterHelper.CreateRouterSession(clientScene, realmAddress))
                {
                    r2CLogin = (R2C_Login) await session.Call(new C2R_Login() { Account = account, Password = password });
                }
                //查看响应码状态 
                if (r2CLogin.Error != ErrorCode.ERR_Success)
                {
                    
                    //弹出错误弹窗
                    EventSystem.Instance.Publish(clientScene, new EventType.AlertError() { Info = r2CLogin.Message });
  
                    return null;
                }
                
                // StartSceneConfig accountConfig = ET.StartSceneConfigCategory.Instance.Account;
                // String accountAddressString = accountConfig.InnerIPOutPort.ToString();
                //获取session对话，即为与目标进行连接
                // IPEndPoint accountAddress = NetworkHelper.ToIPEndPoint("127.0.0.1:30006");
                //  
                // A2C_LoginAccountResponse a2cAccount;
                // using (Session acountSession = await RouterHelper.CreateRouterSession(clientScene,accountAddress))
                // {
                //     a2cAccount = (A2C_LoginAccountResponse) await acountSession.Call(new C2A_LoginAccountRequest() { Account = account, Password = password });
                // }
                clientScene.GetComponent<PlayerComponent>().MyInfo =  new PlayerInfo(r2CLogin.PlayerInfo);

                // 创建一个gate Session,并且保存到SessionComponent中
                Session gateSession = await RouterHelper.CreateRouterSession(clientScene, NetworkHelper.ToIPEndPoint(r2CLogin.Address));
                clientScene.AddComponent<SessionComponent>().Session = gateSession;
				
                G2C_LoginGate g2CLoginGate = (G2C_LoginGate)await gateSession.Call(
                    new C2G_LoginGate() { Key = r2CLogin.Key, GateId = r2CLogin.GateId , PlayerInfo = r2CLogin.PlayerInfo});

                Log.Debug("登陆gate成功!!");
                
                
                await EventSystem.Instance.PublishAsync(clientScene, new EventType.LoginFinish());
                return new []{account,password};
            }
            catch (Exception e)
            {
                Log.Error(e);
                return null;
            }
        } 
    }
}