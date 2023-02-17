using System;
using System.Net;


namespace ET.Server
{
	[MessageHandler(SceneType.Realm)]
	public class C2R_LoginHandler : AMRpcHandler<C2R_Login, R2C_Login>
	{
		protected override async ETTask Run(Session session, C2R_Login request, R2C_Login response)
		{
			//这里先和账户服通信
			
			StartSceneConfig accountConfig = StartSceneConfigCategory.Instance.Account;
			Log.Debug($"account address: {MongoHelper.ToJson(accountConfig)}");
			// 向gate请求一个key,客户端可以拿着这个key连接gate
			A2R_LoginAccountResponse A2RLoginAccountResponse = (A2R_LoginAccountResponse) await ActorMessageSenderComponent.Instance.Call(
				accountConfig.InstanceId, new R2A_LoginAccountRequest() {Account = request.Account ,  Password = request.Password});
			
			//查看响应码状态 
			if (A2RLoginAccountResponse.Error != ErrorCode.ERR_Success)
			{
				// Log.Error(a2cAccount.Error.ToString());
				string errString = "";
				switch (A2RLoginAccountResponse.Error)
				{
					case ErrorCode.ERR_AccountOrPasswordIsNull:
						errString = "账号不能为空";
						break;
					case ErrorCode.ERR_PasswordError:
						errString = "账号或密码不正确";
						break;
					case ErrorCode.ERR_AccountIsBlack:
						errString = "账号被冻结";
						break;
                
				}

				// response.Message = errString;
				// response.Error = A2RLoginAccountResponse.Error;
				// return;
			}
			
			// 随机分配一个Gate
			StartSceneConfig config = RealmGateAddressHelper.GetGate(session.DomainZone());
			Log.Debug($"gate address: {MongoHelper.ToJson(config)}");
			
			// 向gate请求一个key,客户端可以拿着这个key连接gate
			G2R_GetLoginKey g2RGetLoginKey = (G2R_GetLoginKey) await ActorMessageSenderComponent.Instance.Call(
				config.InstanceId, new R2G_GetLoginKey() {Account = request.Account});

			response.Address = config.InnerIPOutPort.ToString();
			response.Key = g2RGetLoginKey.Key;
			response.GateId = g2RGetLoginKey.GateId;
		}
	}
}
