using System;

namespace ET
{
    public class C2A_LoginAccountRequestHandler: AMRpcHandler<C2A_LoginAccountRequest, A2C_LoginAccountResponse>
    {
        protected override async ETTask Run(Session session, C2A_LoginAccountRequest request, A2C_LoginAccountResponse response, Action reply)
        {
            //判断是否在账号服务器中
            if (session.DomainScene().SceneType != SceneType.Account)
            {
                Log.Error("当前未处于账号服务器中。。。。");
                response.Error = ErrorCode.ERR_SceneTypeError;//需要自行定义
                reply();
                // session?.Dispose();
                return;
            }
            //判断密码是否为空
            if (string.IsNullOrEmpty(request.Account) || string.IsNullOrEmpty(request.Password))
            {
                response.Error = ErrorCode.ERR_AccountOrPasswordIsNull;
                reply();
                // session?.Dispose();
                return;
            }
            //查询数据库 使用DBManagerComponent
            //DBManagerComponent挂载在Game.Scene全局下
            //这里的GetZoneDB里面的2代表的是2服 这里就写死了  代表ET2数据库的那个id 配表里可以找到
            var accounts = await DBManagerComponent.Instance.GetZoneDB(2)
                    .Query<Account>(d => d.AccountName.Equals(request.Account.Trim()));
            
            
            Account account = null;
            UserInfo user = null;
            //如果获取到的数据为空则证明没有该用户
            if (accounts == null || accounts.Count == 0)
            {
             
                
                //没有用户的话就注册。
                account = session.AddChild<Account>();
                //赋值
                account.AccountName = request.Account.Trim();
                account.Password = request.Password.Trim();
                account.CreateTime = TimeHelper.ServerNow();
                account.AccountType = (int)AccountType.General;
                
                //存到数据库
                await DBManagerComponent.Instance.GetZoneDB(2).Save<Account>(account);
                
                //新建用户信息

                
                user = session.AddChild<UserInfo>();
                // user = session.AddChildWithId<UserInfo>(account.Id);
                user.AccountId = account.Id;
                user.Coin = 0;
                user.Wins = 0;
                user.Loses = 0;
                user.NickName = account.AccountName;
                
                //存到数据库
                await DBManagerComponent.Instance.GetZoneDB(2).Save<UserInfo>(user);
            }
            else
            {
                //如果存在账号走这里
                account = accounts[0];
                session.AddChild(account);
                var users = await DBManagerComponent.Instance.GetZoneDB(2)
                        .Query<UserInfo>(d => d.AccountId.Equals(account.Id));
                session.AddChild(users[0]);
                
                //判断账号处于冻结还是正常
                if (account.AccountType == (int)AccountType.Black)
                {
                    response.Error = ErrorCode.ERR_AccountIsBlack;
                    reply();
                    // session?.Dispose();
                    account?.Dispose();
                    return;
                }
                //判断账号密码是否一致
                if (!account.Password.Equals(request.Password))
                {
                    response.Error = ErrorCode.ERR_PasswordError;
                    reply();
                    // session?.Dispose();
                    account.Dispose();
                    return;
                }
            }
            //如果可以走到这里就代表成功了
            account.Dispose();
            reply();
        }
    }
}