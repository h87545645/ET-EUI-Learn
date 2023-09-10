

using System;
using System.Collections;
using UnityEngine;
using YooAsset;

namespace ET
{
    public class HotUpdate : MonoBehaviour
    {
        public EPlayMode PlayMod = EPlayMode.EditorSimulateMode;

        public DlgHotUpdateUI hotUI;
        
        private string platform = string.Empty;
        
        public IEnumerator StartHot()
        {
            // 初始化资源系统
            YooAssets.Initialize();

            // 创建默认的资源包
            var package = YooAssets.CreatePackage("DefaultPackage");

            // 设置该资源包为默认的资源包，可以使用YooAssets相关加载接口加载该资源包内容。
            YooAssets.SetDefaultPackage(package);
            
#if UNITY_ANDROID
            platform = "Android";
#elif UNITY_IOS
			platform = "IOS";
#elif UNITY_STANDALONE_WIN
			platform = "Windows";
#elif UNITY_STANDALONE_OSX
			platform = "MacOS";
#elif UNITY_STANDALONE_LINUX
			platform = "Linux";
#else
			activePlatform = string.Empty;
#endif
            //显示hotupdate UI
            // scene.GetComponent<UIComponent>().ShowWindow(WindowID.WindowID_Matching);
            this.hotUI.gameObject.SetActive(true);
            
            if (this.PlayMod == EPlayMode.EditorSimulateMode)
            {
                var initParameters = new EditorSimulateModeParameters();
                initParameters.SimulateManifestFilePath = EditorSimulateModeHelper.SimulateBuild("DefaultPackage");
                yield return package.InitializeAsync(initParameters);
            }else if (this.PlayMod == EPlayMode.HostPlayMode)
            {
                
                
                var initParameters = new HostPlayModeParameters();
                initParameters.QueryServices = new QueryStreamingAssetsFileServices();
                initParameters.DefaultHostServer = "https://forg-game-1316228094.cos.ap-chengdu.myqcloud.com/taptap/"+ platform;
                initParameters.FallbackHostServer = "https://forg-game-1316228094.cos.ap-chengdu.myqcloud.com/taptap/"+ platform;
                yield return package.InitializeAsync(initParameters);
            }else if (this.PlayMod == EPlayMode.OfflinePlayMode)
            {
                var initParameters = new OfflinePlayModeParameters();
                yield return package.InitializeAsync(initParameters);
            }
            
            //获取资源版本
            var operation = package.UpdatePackageVersionAsync();
            yield return operation;
            if (operation.Status != EOperationStatus.Succeed)
            {
                //更新失败
                Debug.LogError(operation.Error);
                yield break;
            }
            string packageVersion = operation.PackageVersion;
            //更新成功
            Debug.Log($"Updated package Version : {packageVersion}");
            //更新资源清单
            var operation2 = package.UpdatePackageManifestAsync(packageVersion);
            yield return operation2;

            if (operation2.Status != EOperationStatus.Succeed)
            {
                //更新失败
                Debug.LogError(operation2.Error);
                yield break;
            }
            
            //下载补丁包
            yield return this.Download();
            //TODO 判断是否下载成功
            
            this.hotUI.gameObject.SetActive(false);
        }
        
        IEnumerator Download()
        {
            int downloadingMaxNum = 10;
            int failedTryAgain = 3;
            int timeout = 60;
            var package = YooAssets.GetPackage("DefaultPackage");
            var downloader = package.CreateResourceDownloader(downloadingMaxNum, failedTryAgain, timeout);
    
            //没有需要下载的资源
            if (downloader.TotalDownloadCount == 0)
            {        
                this.hotUI.percent.SetText( string.Format("{0}%" , 100));
                this.hotUI.progress.value = 1;
                yield break;
            }

            //需要下载的文件总数和总大小
            int totalDownloadCount = downloader.TotalDownloadCount;
            long totalDownloadBytes = downloader.TotalDownloadBytes;    

            //注册回调方法
            downloader.OnDownloadErrorCallback = OnDownloadErrorFunction;
            downloader.OnDownloadProgressCallback = OnDownloadProgressUpdateFunction;
            downloader.OnDownloadOverCallback = OnDownloadOverFunction;
            downloader.OnStartDownloadFileCallback = OnStartDownloadFileFunction;

            //开启下载
            downloader.BeginDownload();
            yield return downloader;

            //检测下载结果
            if (downloader.Status == EOperationStatus.Succeed)
            {
                //下载成功
            }
            else
            {
                //下载失败
            }
        }

        /// <summary>
        /// start donwload
        /// </summary>
        /// <param name="filename"></param>
        /// <param name="sizebytes"></param>
        /// <exception cref="NotImplementedException"></exception>
        private void OnStartDownloadFileFunction(string filename, long sizebytes)
        {
            string info = string.Format("start donwload file : {0}, size : {1} ", filename, sizebytes);
            Debug.Log(info);
            this.hotUI.dowoLoadInfoText.SetText(info);
        }

        /// <summary>
        /// DownloadOver
        /// </summary>
        /// <param name="issucceed"></param>
        /// <exception cref="NotImplementedException"></exception>
        private void OnDownloadOverFunction(bool issucceed)
        {
            string info = string.Format("DownloadOver " + (issucceed? "succeed" : "fail"));
            Debug.Log(info);
            this.hotUI.percent.SetText( string.Format("{0}%" , 100));
            this.hotUI.progress.value = 1;
            this.hotUI.dowoLoadInfoText.SetText(info);
        }

        private void OnDownloadProgressUpdateFunction(int totaldownloadcount, int currentdownloadcount, long totaldownloadbytes, long currentdownloadbytes)
        {
            float per = (float)(currentdownloadcount) / (float)(totaldownloadcount);
            string perStr = (per*100).ToString("F2");
            this.hotUI.progress.value = per;
            this.hotUI.percent.SetText( string.Format("{0}%" , perStr));
            string info = string.Format("Download totaldownloadcount : {0}, currentdownloadcount : {1} , totaldownloadbytes : {2} , currentdownloadbytes : {3} , percent : {4}", 
                totaldownloadcount, currentdownloadcount,totaldownloadbytes,currentdownloadbytes , per);
            this.hotUI.dowoLoadInfoText.SetText(info);
            Debug.Log(info);
            
        }

        private void OnDownloadErrorFunction(string filename, string error)
        {
            string info = string.Format("DownloadError!");
            Debug.Log(info);
            this.hotUI.dowoLoadInfoText.SetText(info);
        }
    } 
    
    // 内置文件查询服务类
    public class QueryStreamingAssetsFileServices : IQueryServices
    {
        public bool QueryStreamingAssets(string fileName)
        {
            // StreamingAssetsHelper.cs是太空战机里提供的一个查询脚本。
            string buildinFolderName = YooAssets.GetStreamingAssetBuildinFolderName();
            return StreamingAssetsHelper.FileExists($"{buildinFolderName}/{fileName}");
        }
    }
}

