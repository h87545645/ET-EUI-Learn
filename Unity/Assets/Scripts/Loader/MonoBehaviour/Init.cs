using System;
using System.Threading;
using CommandLine;
using UnityEngine;
// using YooAsset;


namespace ET
{
	public class Init: MonoBehaviour
	{
		// [LabelText("资源服地址")] public string HotfixResUrl = "http://127.0.0.1:8088";
		//
		// [InfoBox("例如v1.0")]
		// [LabelText("版本标识")] public string Version = "v0.0.1";
		//
		// [LabelText("资源模式")]
		// public YooAssets.EPlayMode PlayMode = YooAssets.EPlayMode.EditorSimulateMode;
		private void Start()
		{
			DontDestroyOnLoad(gameObject);
			
			AppDomain.CurrentDomain.UnhandledException += (sender, e) =>
			{
				Log.Error(e.ExceptionObject.ToString());
			};
				
			Game.AddSingleton<MainThreadSynchronizationContext>();

			// 命令行参数
			string[] args = "".Split(" ");
			Parser.Default.ParseArguments<Options>(args)
				.WithNotParsed(error => throw new Exception($"命令行格式错误! {error}"))
				.WithParsed(Game.AddSingleton);
			
			Game.AddSingleton<TimeInfo>();
			Game.AddSingleton<Logger>().ILog = new UnityLogger();
			Game.AddSingleton<ObjectPool>();
			Game.AddSingleton<IdGenerater>();
			Game.AddSingleton<EventSystem>();
			Game.AddSingleton<TimerComponent>();
			Game.AddSingleton<CoroutineLockComponent>();
			
			ETTask.ExceptionHandler += Log.Error;

			Game.AddSingleton<CodeLoader>().Start();
			

		}

		private void Update()
		{
			Game.Update();
		}

		private void LateUpdate()
		{
			Game.LateUpdate();
			Game.FrameFinishUpdate();
		}

		private void OnApplicationQuit()
		{
			Game.Close();
		}
	}
}