using System;
using System.Net;


namespace ET.Server
{
    [ActorMessageHandler(SceneType.Account)]
    public class R2A_LoginAccountRequestHandler: AMActorRpcHandler<Scene , R2A_LoginAccountRequest, A2R_LoginAccountResponse>
    {
        protected override async ETTask Run(Scene scene, R2A_LoginAccountRequest request, A2R_LoginAccountResponse response)
        {
            //判断是否在账号服务器中
            if (scene.DomainScene().SceneType != SceneType.Account)
            {
                Log.Error("当前未处于账号服务器中。。。。");
                response.Error = ErrorCode.ERR_SceneTypeError;//需要自行定义
                // session?.Dispose();
                return;
            }
            //判断密码是否为空
            if (string.IsNullOrEmpty(request.Account) || string.IsNullOrEmpty(request.Password))
            {
                response.Error = ErrorCode.ERR_AccountOrPasswordIsNull;
                // session?.Dispose();
                return;
            }
            //查询数据库 使用DBManagerComponent
            //DBManagerComponent挂载在Game.Scene全局下
            //这里的GetZoneDB里面的2代表的是2服 这里就写死了  代表ET2数据库的那个id 配表里可以找到
            var accounts = await DBManagerComponent.Instance.GetZoneDB(1)
                    .Query<Account>(d => d.AccountName.Equals(request.Account.Trim()));
            
            
            Account account = null;
            PlayerInfo player = null;
            //如果获取到的数据为空则证明没有该用户
            if (accounts == null || accounts.Count == 0)
            {
             
                
                //没有用户的话就注册。
                account = scene.AddChild<Account>();
                //赋值
                account.AccountName = request.Account.Trim();
                account.Password = request.Password.Trim();
                account.CreateTime = TimeHelper.ServerNow();
                account.AccountType = (int)AccountType.General;
                
                //存到数据库
                await DBManagerComponent.Instance.GetZoneDB(1).Save<Account>(account);
                
                //新建用户信息

                
                player = scene.AddChild<PlayerInfo>();
                // player = session.AddChildWithId<PlayerInfo>(account.Id);
                player.AccountId = account.Id;
                player.Coin = 0;
                player.Wins = 0;
                player.Loses = 0;
                player.NickName = account.AccountName;
                
                //存到数据库
                await DBManagerComponent.Instance.GetZoneDB(1).Save<PlayerInfo>(player);
            }
            else
            {
                //如果存在账号走这里
                account = accounts[0];
                scene.AddChild(account);
                var players = await DBManagerComponent.Instance.GetZoneDB(1)
                        .Query<PlayerInfo>(d => d.AccountId.Equals(account.Id));
                scene.AddChild(players[0]);
                
                //判断账号处于冻结还是正常
                if (account.AccountType == (int)AccountType.Black)
                {
                    response.Error = ErrorCode.ERR_AccountIsBlack;
                    // session?.Dispose();
                    account?.Dispose();
                    return;
                }
                //判断账号密码是否一致
                if (!account.Password.Equals(request.Password))
                {
                    response.Error = ErrorCode.ERR_PasswordError;
                    // session?.Dispose();
                    account.Dispose();
                    return;
                }
            }

            response.AccountId = account.Id;
            //如果可以走到这里就代表成功了
            account.Dispose();
        }
    }
}