using ET;
using ProtoBuf;
using System.Collections.Generic;
namespace ET
{
	[ResponseType(nameof(A2C_LoginAccountResponse))]
	[Message(OuterMessage.C2A_LoginAccountRequest)]
	[ProtoContract]
	public partial class C2A_LoginAccountRequest: ProtoObject, IRequest
	{
		[ProtoMember(1)]
		public int RpcId { get; set; }

		[ProtoMember(2)]
		public string Account { get; set; }

		[ProtoMember(3)]
		public string Password { get; set; }

	}

	[Message(OuterMessage.A2C_LoginAccountResponse)]
	[ProtoContract]
	public partial class A2C_LoginAccountResponse: ProtoObject, IResponse
	{
		[ProtoMember(1)]
		public int RpcId { get; set; }

		[ProtoMember(2)]
		public int Error { get; set; }

		[ProtoMember(3)]
		public string Message { get; set; }

		[ProtoMember(4)]
		public long AccountId { get; set; }

	}

	[ResponseType(nameof(G2C_StartMatchResponse))]
	[Message(OuterMessage.C2G_StartMatchRequest)]
	[ProtoContract]
	public partial class C2G_StartMatchRequest: ProtoObject, IRequest
	{
		[ProtoMember(1)]
		public int RpcId { get; set; }

		[ProtoMember(2)]
		public bool RobotMatch { get; set; }

	}

	[Message(OuterMessage.G2C_StartMatchResponse)]
	[ProtoContract]
	public partial class G2C_StartMatchResponse: ProtoObject, IResponse
	{
		[ProtoMember(1)]
		public int RpcId { get; set; }

		[ProtoMember(2)]
		public int Error { get; set; }

		[ProtoMember(3)]
		public string Message { get; set; }

	}

	[ResponseType(nameof(G2C_GetRankInfoResponse))]
	[Message(OuterMessage.C2G_GetRankInfoRequest)]
	[ProtoContract]
	public partial class C2G_GetRankInfoRequest: ProtoObject, IRequest
	{
		[ProtoMember(1)]
		public int RpcId { get; set; }

	}

	[Message(OuterMessage.G2C_GetRankInfoResponse)]
	[ProtoContract]
	public partial class G2C_GetRankInfoResponse: ProtoObject, IResponse
	{
		[ProtoMember(1)]
		public int RpcId { get; set; }

		[ProtoMember(2)]
		public int Error { get; set; }

		[ProtoMember(3)]
		public string Message { get; set; }

		[ProtoMember(4)]
		public List<GamePlayerInfo> Ranks { get; set; }

	}

	[ResponseType(nameof(G2C_GetRankInfoResponse))]
	[Message(OuterMessage.C2G_PlayerEditInfoRequest)]
	[ProtoContract]
	public partial class C2G_PlayerEditInfoRequest: ProtoObject, IRequest
	{
		[ProtoMember(1)]
		public int RpcId { get; set; }

		[ProtoMember(2)]
		public string Name { get; set; }

		[ProtoMember(3)]
		public long AccountId { get; set; }

	}

	[Message(OuterMessage.G2C_PlayerEditInfoResponse)]
	[ProtoContract]
	public partial class G2C_PlayerEditInfoResponse: ProtoObject, IResponse
	{
		[ProtoMember(1)]
		public int RpcId { get; set; }

		[ProtoMember(2)]
		public int Error { get; set; }

		[ProtoMember(3)]
		public string Message { get; set; }

	}

	[ResponseType(nameof(G2C_PlayerExitMatchResponse))]
	[Message(OuterMessage.C2G_PlayerExitMatchRequest)]
	[ProtoContract]
	public partial class C2G_PlayerExitMatchRequest: ProtoObject, IRequest
	{
		[ProtoMember(1)]
		public int RpcId { get; set; }

	}

	[Message(OuterMessage.G2C_PlayerExitMatchResponse)]
	[ProtoContract]
	public partial class G2C_PlayerExitMatchResponse: ProtoObject, IResponse
	{
		[ProtoMember(1)]
		public int RpcId { get; set; }

		[ProtoMember(2)]
		public int Error { get; set; }

		[ProtoMember(3)]
		public string Message { get; set; }

		[ProtoMember(4)]
		public long UserID { get; set; }

	}

	[Message(OuterMessage.C2G_PlayerExitRoomMessage)]
	[ProtoContract]
	public partial class C2G_PlayerExitRoomMessage: ProtoObject, IMessage
	{
		[ProtoMember(1)]
		public long RoomID { get; set; }

		[ProtoMember(2)]
		public long UserID { get; set; }

	}

	[Message(OuterMessage.C2M_PlayerExitRoom)]
	[ProtoContract]
	public partial class C2M_PlayerExitRoom: ProtoObject, IActorLocationMessage
	{
		[ProtoMember(1)]
		public int RpcId { get; set; }

	}

	[Message(OuterMessage.C2M_FrogOpera)]
	[ProtoContract]
	public partial class C2M_FrogOpera: ProtoObject, IActorLocationMessage
	{
		[ProtoMember(1)]
		public int RpcId { get; set; }

		[ProtoMember(2)]
		public int opera { get; set; }

		[ProtoMember(3)]
		public float chargeTime { get; set; }

		[ProtoMember(4)]
		public bool force { get; set; }

		[ProtoMember(5)]
		public int dir { get; set; }

	}

	[Message(OuterMessage.M2C_FrogOpera)]
	[ProtoContract]
	public partial class M2C_FrogOpera: ProtoObject, IActorMessage
	{
		[ProtoMember(1)]
		public long Id { get; set; }

		[ProtoMember(2)]
		public int opera { get; set; }

		[ProtoMember(3)]
		public float chargeTime { get; set; }

		[ProtoMember(4)]
		public bool force { get; set; }

		[ProtoMember(5)]
		public int dir { get; set; }

	}

	[Message(OuterMessage.C2M_FrogSyncPosition)]
	[ProtoContract]
	public partial class C2M_FrogSyncPosition: ProtoObject, IActorLocationMessage
	{
		[ProtoMember(1)]
		public int RpcId { get; set; }

		[ProtoMember(2)]
		public Unity.Mathematics.float3 Position { get; set; }

		[ProtoMember(3)]
		public long UserId { get; set; }

		[ProtoMember(4)]
		public int CameraIndex { get; set; }

	}

	[Message(OuterMessage.M2C_FrogSyncPosition)]
	[ProtoContract]
	public partial class M2C_FrogSyncPosition: ProtoObject, IActorMessage
	{
		[ProtoMember(1)]
		public long Id { get; set; }

		[ProtoMember(2)]
		public Unity.Mathematics.float3 Position { get; set; }

		[ProtoMember(3)]
		public int CameraIndex { get; set; }

	}

	[Message(OuterMessage.C2M_FrogGameOver)]
	[ProtoContract]
	public partial class C2M_FrogGameOver: ProtoObject, IActorLocationMessage
	{
		[ProtoMember(1)]
		public int RpcId { get; set; }

		[ProtoMember(2)]
		public long UserId { get; set; }

		[ProtoMember(3)]
		public int JumpCnt { get; set; }

	}

	[Message(OuterMessage.M2C_FrogGameOver)]
	[ProtoContract]
	public partial class M2C_FrogGameOver: ProtoObject, IActorMessage
	{
		[ProtoMember(1)]
		public long WinPlayerId { get; set; }

		[ProtoMember(2)]
		public long GameTime { get; set; }

		[ProtoMember(3)]
		public int JumpCnt { get; set; }

		[ProtoMember(4)]
		public long BestTime { get; set; }

		[ProtoMember(5)]
		public string PlayerName { get; set; }

		[ProtoMember(6)]
		public int WinCnt { get; set; }

	}

	[Message(OuterMessage.C2G_GameOverMessage)]
	[ProtoContract]
	public partial class C2G_GameOverMessage: ProtoObject, IMessage
	{
		[ProtoMember(1)]
		public long RoomID { get; set; }

	}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//demo follow
	[Message(OuterMessage.HttpGetRouterResponse)]
	[ProtoContract]
	public partial class HttpGetRouterResponse: ProtoObject
	{
		[ProtoMember(1)]
		public List<string> Realms { get; set; }

		[ProtoMember(2)]
		public List<string> Routers { get; set; }

	}

	[Message(OuterMessage.RouterSync)]
	[ProtoContract]
	public partial class RouterSync: ProtoObject
	{
		[ProtoMember(1)]
		public uint ConnectId { get; set; }

		[ProtoMember(2)]
		public string Address { get; set; }

	}

	[ResponseType(nameof(M2C_TestResponse))]
	[Message(OuterMessage.C2M_TestRequest)]
	[ProtoContract]
	public partial class C2M_TestRequest: ProtoObject, IActorLocationRequest
	{
		[ProtoMember(1)]
		public int RpcId { get; set; }

		[ProtoMember(2)]
		public string request { get; set; }

	}

	[Message(OuterMessage.M2C_TestResponse)]
	[ProtoContract]
	public partial class M2C_TestResponse: ProtoObject, IActorLocationResponse
	{
		[ProtoMember(1)]
		public int RpcId { get; set; }

		[ProtoMember(2)]
		public int Error { get; set; }

		[ProtoMember(3)]
		public string Message { get; set; }

		[ProtoMember(4)]
		public string response { get; set; }

	}

	[ResponseType(nameof(Actor_TransferResponse))]
	[Message(OuterMessage.Actor_TransferRequest)]
	[ProtoContract]
	public partial class Actor_TransferRequest: ProtoObject, IActorLocationRequest
	{
		[ProtoMember(1)]
		public int RpcId { get; set; }

		[ProtoMember(2)]
		public int MapIndex { get; set; }

	}

	[Message(OuterMessage.Actor_TransferResponse)]
	[ProtoContract]
	public partial class Actor_TransferResponse: ProtoObject, IActorLocationResponse
	{
		[ProtoMember(1)]
		public int RpcId { get; set; }

		[ProtoMember(2)]
		public int Error { get; set; }

		[ProtoMember(3)]
		public string Message { get; set; }

	}

	[ResponseType(nameof(G2C_EnterMap))]
	[Message(OuterMessage.C2G_EnterMap)]
	[ProtoContract]
	public partial class C2G_EnterMap: ProtoObject, IRequest
	{
		[ProtoMember(1)]
		public int RpcId { get; set; }

	}

	[Message(OuterMessage.G2C_EnterMap)]
	[ProtoContract]
	public partial class G2C_EnterMap: ProtoObject, IResponse
	{
		[ProtoMember(1)]
		public int RpcId { get; set; }

		[ProtoMember(2)]
		public int Error { get; set; }

		[ProtoMember(3)]
		public string Message { get; set; }

// 自己unitId
		[ProtoMember(4)]
		public long MyId { get; set; }

	}

	[Message(OuterMessage.MoveInfo)]
	[ProtoContract]
	public partial class MoveInfo: ProtoObject
	{
		[ProtoMember(1)]
		public List<Unity.Mathematics.float3> Points { get; set; }

		[ProtoMember(2)]
		public Unity.Mathematics.quaternion Rotation { get; set; }

		[ProtoMember(3)]
		public int TurnSpeed { get; set; }

	}

	[Message(OuterMessage.UnitInfo)]
	[ProtoContract]
	public partial class UnitInfo: ProtoObject
	{
		[ProtoMember(1)]
		public long UnitId { get; set; }

		[ProtoMember(2)]
		public int ConfigId { get; set; }

		[ProtoMember(3)]
		public int Type { get; set; }

		[ProtoMember(4)]
		public Unity.Mathematics.float3 Position { get; set; }

		[ProtoMember(5)]
		public Unity.Mathematics.float3 Forward { get; set; }

		[MongoDB.Bson.Serialization.Attributes.BsonDictionaryOptions(MongoDB.Bson.Serialization.Options.DictionaryRepresentation.ArrayOfArrays)]
		[ProtoMember(6)]
		public Dictionary<int, long> KV { get; set; }
		[ProtoMember(7)]
		public MoveInfo MoveInfo { get; set; }

		[ProtoMember(8)]
		public long UserId { get; set; }

		[ProtoMember(9)]
		public long RoomId { get; set; }

		[ProtoMember(10)]
		public long PlayerId { get; set; }

		[ProtoMember(11)]
		public string PlayerName { get; set; }

	}

	[Message(OuterMessage.GamePlayerInfo)]
	[ProtoContract]
	public partial class GamePlayerInfo: ProtoObject
	{
		[ProtoMember(1)]
		public long AccountId { get; set; }

		[ProtoMember(2)]
		public string NickName { get; set; }

		[ProtoMember(3)]
		public int Wins { get; set; }

		[ProtoMember(4)]
		public int Loses { get; set; }

		[ProtoMember(5)]
		public long Coin { get; set; }

		[ProtoMember(6)]
		public long BestTime { get; set; }

		[ProtoMember(7)]
		public long BestJumpCnt { get; set; }

	}

	[Message(OuterMessage.M2C_CreateUnits)]
	[ProtoContract]
	public partial class M2C_CreateUnits: ProtoObject, IActorMessage
	{
		[ProtoMember(1)]
		public List<UnitInfo> Units { get; set; }

	}

	[Message(OuterMessage.M2C_CreateMyUnit)]
	[ProtoContract]
	public partial class M2C_CreateMyUnit: ProtoObject, IActorMessage
	{
		[ProtoMember(1)]
		public List<UnitInfo> Units { get; set; }

	}

	[Message(OuterMessage.M2C_StartSceneChange)]
	[ProtoContract]
	public partial class M2C_StartSceneChange: ProtoObject, IActorMessage
	{
		[ProtoMember(1)]
		public long SceneInstanceId { get; set; }

		[ProtoMember(2)]
		public string SceneName { get; set; }

		[ProtoMember(3)]
		public long MyId { get; set; }

	}

	[Message(OuterMessage.M2C_RemoveUnits)]
	[ProtoContract]
	public partial class M2C_RemoveUnits: ProtoObject, IActorMessage
	{
		[ProtoMember(2)]
		public List<long> Units { get; set; }

	}

	[Message(OuterMessage.C2M_PathfindingResult)]
	[ProtoContract]
	public partial class C2M_PathfindingResult: ProtoObject, IActorLocationMessage
	{
		[ProtoMember(1)]
		public int RpcId { get; set; }

		[ProtoMember(2)]
		public Unity.Mathematics.float3 Position { get; set; }

	}

	[Message(OuterMessage.C2M_Stop)]
	[ProtoContract]
	public partial class C2M_Stop: ProtoObject, IActorLocationMessage
	{
		[ProtoMember(1)]
		public int RpcId { get; set; }

	}

	[Message(OuterMessage.M2C_PathfindingResult)]
	[ProtoContract]
	public partial class M2C_PathfindingResult: ProtoObject, IActorMessage
	{
		[ProtoMember(1)]
		public long Id { get; set; }

		[ProtoMember(2)]
		public Unity.Mathematics.float3 Position { get; set; }

		[ProtoMember(3)]
		public List<Unity.Mathematics.float3> Points { get; set; }

	}

	[Message(OuterMessage.M2C_Stop)]
	[ProtoContract]
	public partial class M2C_Stop: ProtoObject, IActorMessage
	{
		[ProtoMember(1)]
		public int Error { get; set; }

		[ProtoMember(2)]
		public long Id { get; set; }

		[ProtoMember(3)]
		public Unity.Mathematics.float3 Position { get; set; }

		[ProtoMember(4)]
		public Unity.Mathematics.quaternion Rotation { get; set; }

	}

	[ResponseType(nameof(G2C_Ping))]
	[Message(OuterMessage.C2G_Ping)]
	[ProtoContract]
	public partial class C2G_Ping: ProtoObject, IRequest
	{
		[ProtoMember(1)]
		public int RpcId { get; set; }

	}

	[Message(OuterMessage.G2C_Ping)]
	[ProtoContract]
	public partial class G2C_Ping: ProtoObject, IResponse
	{
		[ProtoMember(1)]
		public int RpcId { get; set; }

		[ProtoMember(2)]
		public int Error { get; set; }

		[ProtoMember(3)]
		public string Message { get; set; }

		[ProtoMember(4)]
		public long Time { get; set; }

	}

	[Message(OuterMessage.G2C_Test)]
	[ProtoContract]
	public partial class G2C_Test: ProtoObject, IMessage
	{
	}

	[Message(OuterMessage.G2C_Reconnect)]
	[ProtoContract]
	public partial class G2C_Reconnect: ProtoObject, IMessage
	{
	}

	[ResponseType(nameof(M2C_Reload))]
	[Message(OuterMessage.C2M_Reload)]
	[ProtoContract]
	public partial class C2M_Reload: ProtoObject, IRequest
	{
		[ProtoMember(1)]
		public int RpcId { get; set; }

		[ProtoMember(2)]
		public string Account { get; set; }

		[ProtoMember(3)]
		public string Password { get; set; }

	}

	[Message(OuterMessage.M2C_Reload)]
	[ProtoContract]
	public partial class M2C_Reload: ProtoObject, IResponse
	{
		[ProtoMember(1)]
		public int RpcId { get; set; }

		[ProtoMember(2)]
		public int Error { get; set; }

		[ProtoMember(3)]
		public string Message { get; set; }

	}

	[ResponseType(nameof(R2C_Login))]
	[Message(OuterMessage.C2R_Login)]
	[ProtoContract]
	public partial class C2R_Login: ProtoObject, IRequest
	{
		[ProtoMember(1)]
		public int RpcId { get; set; }

		[ProtoMember(2)]
		public string Account { get; set; }

		[ProtoMember(3)]
		public string Password { get; set; }

	}

	[Message(OuterMessage.R2C_Login)]
	[ProtoContract]
	public partial class R2C_Login: ProtoObject, IResponse
	{
		[ProtoMember(1)]
		public int RpcId { get; set; }

		[ProtoMember(2)]
		public int Error { get; set; }

		[ProtoMember(3)]
		public string Message { get; set; }

		[ProtoMember(4)]
		public string Address { get; set; }

		[ProtoMember(5)]
		public long Key { get; set; }

		[ProtoMember(6)]
		public long GateId { get; set; }

		[ProtoMember(7)]
		public GamePlayerInfo PlayerInfo { get; set; }

	}

	[ResponseType(nameof(G2C_LoginGate))]
	[Message(OuterMessage.C2G_LoginGate)]
	[ProtoContract]
	public partial class C2G_LoginGate: ProtoObject, IRequest
	{
		[ProtoMember(1)]
		public int RpcId { get; set; }

		[ProtoMember(2)]
		public long Key { get; set; }

		[ProtoMember(3)]
		public long GateId { get; set; }

		[ProtoMember(4)]
		public GamePlayerInfo PlayerInfo { get; set; }

	}

	[Message(OuterMessage.G2C_LoginGate)]
	[ProtoContract]
	public partial class G2C_LoginGate: ProtoObject, IResponse
	{
		[ProtoMember(1)]
		public int RpcId { get; set; }

		[ProtoMember(2)]
		public int Error { get; set; }

		[ProtoMember(3)]
		public string Message { get; set; }

		[ProtoMember(4)]
		public long PlayerId { get; set; }

	}

	[Message(OuterMessage.G2C_TestHotfixMessage)]
	[ProtoContract]
	public partial class G2C_TestHotfixMessage: ProtoObject, IMessage
	{
		[ProtoMember(1)]
		public string Info { get; set; }

	}

	[ResponseType(nameof(M2C_TestRobotCase))]
	[Message(OuterMessage.C2M_TestRobotCase)]
	[ProtoContract]
	public partial class C2M_TestRobotCase: ProtoObject, IActorLocationRequest
	{
		[ProtoMember(1)]
		public int RpcId { get; set; }

		[ProtoMember(2)]
		public int N { get; set; }

	}

	[Message(OuterMessage.M2C_TestRobotCase)]
	[ProtoContract]
	public partial class M2C_TestRobotCase: ProtoObject, IActorLocationResponse
	{
		[ProtoMember(1)]
		public int RpcId { get; set; }

		[ProtoMember(2)]
		public int Error { get; set; }

		[ProtoMember(3)]
		public string Message { get; set; }

		[ProtoMember(4)]
		public int N { get; set; }

	}

	[ResponseType(nameof(M2C_TransferMap))]
	[Message(OuterMessage.C2M_TransferMap)]
	[ProtoContract]
	public partial class C2M_TransferMap: ProtoObject, IActorLocationRequest
	{
		[ProtoMember(1)]
		public int RpcId { get; set; }

	}

	[Message(OuterMessage.M2C_TransferMap)]
	[ProtoContract]
	public partial class M2C_TransferMap: ProtoObject, IActorLocationResponse
	{
		[ProtoMember(1)]
		public int RpcId { get; set; }

		[ProtoMember(2)]
		public int Error { get; set; }

		[ProtoMember(3)]
		public string Message { get; set; }

	}

	[ResponseType(nameof(G2C_Benchmark))]
	[Message(OuterMessage.C2G_Benchmark)]
	[ProtoContract]
	public partial class C2G_Benchmark: ProtoObject, IRequest
	{
		[ProtoMember(1)]
		public int RpcId { get; set; }

	}

	[Message(OuterMessage.G2C_Benchmark)]
	[ProtoContract]
	public partial class G2C_Benchmark: ProtoObject, IResponse
	{
		[ProtoMember(1)]
		public int RpcId { get; set; }

		[ProtoMember(2)]
		public int Error { get; set; }

		[ProtoMember(3)]
		public string Message { get; set; }

	}

	public static class OuterMessage
	{
		 public const ushort C2A_LoginAccountRequest = 10002;
		 public const ushort A2C_LoginAccountResponse = 10003;
		 public const ushort C2G_StartMatchRequest = 10004;
		 public const ushort G2C_StartMatchResponse = 10005;
		 public const ushort C2G_GetRankInfoRequest = 10006;
		 public const ushort G2C_GetRankInfoResponse = 10007;
		 public const ushort C2G_PlayerEditInfoRequest = 10008;
		 public const ushort G2C_PlayerEditInfoResponse = 10009;
		 public const ushort C2G_PlayerExitMatchRequest = 10010;
		 public const ushort G2C_PlayerExitMatchResponse = 10011;
		 public const ushort C2G_PlayerExitRoomMessage = 10012;
		 public const ushort C2M_PlayerExitRoom = 10013;
		 public const ushort C2M_FrogOpera = 10014;
		 public const ushort M2C_FrogOpera = 10015;
		 public const ushort C2M_FrogSyncPosition = 10016;
		 public const ushort M2C_FrogSyncPosition = 10017;
		 public const ushort C2M_FrogGameOver = 10018;
		 public const ushort M2C_FrogGameOver = 10019;
		 public const ushort C2G_GameOverMessage = 10020;
		 public const ushort HttpGetRouterResponse = 10021;
		 public const ushort RouterSync = 10022;
		 public const ushort C2M_TestRequest = 10023;
		 public const ushort M2C_TestResponse = 10024;
		 public const ushort Actor_TransferRequest = 10025;
		 public const ushort Actor_TransferResponse = 10026;
		 public const ushort C2G_EnterMap = 10027;
		 public const ushort G2C_EnterMap = 10028;
		 public const ushort MoveInfo = 10029;
		 public const ushort UnitInfo = 10030;
		 public const ushort GamePlayerInfo = 10031;
		 public const ushort M2C_CreateUnits = 10032;
		 public const ushort M2C_CreateMyUnit = 10033;
		 public const ushort M2C_StartSceneChange = 10034;
		 public const ushort M2C_RemoveUnits = 10035;
		 public const ushort C2M_PathfindingResult = 10036;
		 public const ushort C2M_Stop = 10037;
		 public const ushort M2C_PathfindingResult = 10038;
		 public const ushort M2C_Stop = 10039;
		 public const ushort C2G_Ping = 10040;
		 public const ushort G2C_Ping = 10041;
		 public const ushort G2C_Test = 10042;
		 public const ushort G2C_Reconnect = 10043;
		 public const ushort C2M_Reload = 10044;
		 public const ushort M2C_Reload = 10045;
		 public const ushort C2R_Login = 10046;
		 public const ushort R2C_Login = 10047;
		 public const ushort C2G_LoginGate = 10048;
		 public const ushort G2C_LoginGate = 10049;
		 public const ushort G2C_TestHotfixMessage = 10050;
		 public const ushort C2M_TestRobotCase = 10051;
		 public const ushort M2C_TestRobotCase = 10052;
		 public const ushort C2M_TransferMap = 10053;
		 public const ushort M2C_TransferMap = 10054;
		 public const ushort C2G_Benchmark = 10055;
		 public const ushort G2C_Benchmark = 10056;
	}
}
