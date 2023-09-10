using System;
using System.Threading;
using CommandLine;
using UnityEngine;
using System.Collections;
using AnyThinkAds.Api;

// using YooAsset;


namespace ET
{
	public class Init: MonoBehaviour
	{
		public HotUpdate Hot = null;
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
			Game.AddSingleton<GameRecord>();
	
			Game.AddSingleton<CoroutineLockComponent>();
			ETTask.ExceptionHandler += Log.Error;
			
			//会导致崩溃 原因位置
			// Screen.sleepTimeout = SleepTimeout.NeverSleep;
			
			StartCoroutine(startHot());
	
		}

		private void InitAnyThinkAds()
		{
			//广告初始化
			Game.AddSingleton<AnyThinkAdHelper>();
			ATSDKAPI.initSDK("a64b54aca97f87", "23498cc3f3876487a682a6407e1959ce");
			// ATSDKAPI.setLogDebug(true);
			ATSDKAPI.setChannel("unity3d_taptap_channel");
			AnyThinkAdHelper.Instance.addAutoLoadAdPlacementID();
			// await TimerComponent.Instance.WaitAsync(2000);
			// AnyThinkAdHelper.Instance.ShowActiveAd( (bool suc) =>
			// {
			// 	Debug.Log("------------------------ShowActiveAd cb");
			// });
		}

		private IEnumerator startHot()
		{
			yield return StartCoroutine(Hot.StartHot());
			Game.AddSingleton<CodeLoader>().Start();
			this.InitAnyThinkAds();
			AudioPlayManager.instance.Init();
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