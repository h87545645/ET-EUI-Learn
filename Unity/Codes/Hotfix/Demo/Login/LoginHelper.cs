using System;
using LitJson;
using UnityEngine;

namespace ET
{
    public static class LoginHelper
    {
        public static async ETTask Login(Scene zoneScene, string address, string account, string password)
        {
            try
            {
                
                //2023.2.4 modify 修改登录流程，先与账号服务器通信，账号服务器将和数据库交互，对信息进行验证或注册，获取账户唯一标识AccountId
                //TODO 考虑加入账号中心服务器，处理顶号，创建删除角色等逻辑。
                A2C_LoginAccountResponse a2cAccount;
                Session acountSession = null;
                try
                {
                    //获取session对话，即为与目标进行连接
                    acountSession = zoneScene.GetComponent<NetKcpComponent>().Create(NetworkHelper.ToIPEndPoint(address));
                    {
                        //客户端向目标发送登录请求(Client to Realm)，监听并等待接收目标的回复消息
                        a2cAccount = (A2C_LoginAccountResponse) await acountSession.Call(new C2A_LoginAccountRequest() { Account = account, Password = password });
                    }
                    //查看响应码状态 
                    if (a2cAccount.Error != ErrorCode.ERR_Success)
                    {
                        Log.Error(a2cAccount.Error.ToString());
                        //TODO alter login err dialog
                        return;
                    }
                }
                finally
                {
                    //释放与Realm的会话，即释放连接
                    acountSession?.Dispose();
                }
                
                // 创建一个ETModel层的Session
                //R2C   Realm To Client  网关均衡负载服务器到客户端的消息实体类
                R2C_Login r2CLogin;
                //session对话，即为封装好的连接对象，session -> channel -> socket
                Session session = null;
                try
                {
                    //获取session对话，即为与目标进行连接
                    session = zoneScene.GetComponent<NetKcpComponent>().Create(NetworkHelper.ToIPEndPoint(address));
                    {
                        //客户端向目标发送登录请求(Client to Realm)，监听并等待接收目标的回复消息
                        r2CLogin = (R2C_Login) await session.Call(new C2R_Login() { Account = account, Password = password });
                    }
                }
                finally
                {
                    //释放与Realm的会话，即释放连接
                    session?.Dispose();
                }
                //================华丽的分割线=====================
                //以上过程即为上述步骤的1,2步，客户端和Realm完成交互
                //接收到了r2c消息实体中包含了后续用到的Key即为Token令牌


                // 创建一个gate Session,并且保存到SessionComponent中
                Session gateSession = zoneScene.GetComponent<NetKcpComponent>().Create(NetworkHelper.ToIPEndPoint(r2CLogin.Address));
                //做相应的配置工作  设置心跳
                gateSession.AddComponent<PingComponent>();
                zoneScene.AddComponent<SessionComponent>().Session = gateSession;
				
                //客户端向Gate网关发送Token令牌消息，请求进行验证，并接收反馈消息
                G2C_LoginGate g2CLoginGate = (G2C_LoginGate)await gateSession.Call(
                    new C2G_LoginGate() { Key = r2CLogin.Key, GateId = r2CLogin.GateId});

                Log.Debug("登陆gate成功!");

                Game.EventSystem.PublishAsync(new EventType.LoginFinish() {ZoneScene = zoneScene}).Coroutine();
            }
            catch (Exception e)
            {
                Log.Error(e);
            }
        } 
    }
}