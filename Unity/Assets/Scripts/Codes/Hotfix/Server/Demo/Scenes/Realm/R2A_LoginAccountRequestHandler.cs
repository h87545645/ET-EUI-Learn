using System;
using System.Net;


namespace ET.Server
{
    [ActorMessageHandler(SceneType.Account)]
    // [FriendOf(typeof(DBComponent))]
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
            GamePlayerInfo player = null;
            
            //如果获取到的数据为空则证明没有该用户
            if (accounts == null || accounts.Count == 0)
            {

                
                //没有用户的话就注册。
                // account = scene.AddChild<Account>();
                account = new Account();
                account.Id = IdGenerater.Instance.GenerateId();
                //赋值
                account.AccountName = request.Account.Trim();
                account.Password = request.Password.Trim();
                account.CreateTime = TimeHelper.ServerNow();
                account.AccountType = (int)AccountType.General;
                
                //存到数据库
                await DBManagerComponent.Instance.GetZoneDB(1).Save<Account>(account);
                
                //新建用户信息

                var allAccountList = await DBManagerComponent.Instance.GetZoneDB(1)
                        .Query<Account>(d => true);
                // player = scene.AddChild<PlayerInfo>();
                // player = session.AddChildWithId<PlayerInfo>(account.Id);

                player = new GamePlayerInfo();
                player.AccountId = account.Id;
                player.Coin = 0;
                player.Wins = 0;
                player.Loses = 0;
                player.NickName = "Player_"+allAccountList.Count;
                player.BestTime = -1;
                player.BestJumpCnt = -1;
                
                //存到数据库
                PlayerInfo pInfo = new PlayerInfo(player);
                pInfo.Id = IdGenerater.Instance.GenerateId();
                await DBManagerComponent.Instance.GetZoneDB(1).Save<PlayerInfo>(pInfo);
            }
            else
            {
                //如果存在账号走这里
                account = accounts[0];
                // scene.AddChild(account);
                var players = await DBManagerComponent.Instance.GetZoneDB(1)
                        .Query<PlayerInfo>(d => d.AccountId.Equals(account.Id));
                // scene.AddChild(players[0]);
                player = new GamePlayerInfo();
                player.AccountId = players[0].AccountId;
                player.Coin = players[0].Coin;
                player.Wins = players[0].Wins;
                player.Loses = players[0].Loses;
                player.NickName = players[0].NickName;
                player.BestTime = players[0].BestTime;
                player.BestJumpCnt = players[0].BestJumpCnt;
                
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
            response.PlayerInfo = player ;
            //如果可以走到这里就代表成功了
            account.Dispose();
        }
    }
}