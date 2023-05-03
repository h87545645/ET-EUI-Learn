using System.Collections.Generic;
using System.IO;
using System.Text.RegularExpressions;
using HybridCLR;

using UnityEngine;
using YooAsset;

namespace ET
{
    public static class HybridCLRHelper
    {
        public static void Load()
        {
            if (!Define.IsEditor)
            {
                /*
              * @Author: Simon
              * @Description:
              * @Date: 2023年04月11日 星期二 20:04:15
              * @Modify:修改为yooAssets 加载
              */
                
                var package = YooAssets.GetPackage("DefaultPackage");
                AssetInfo[] assetInfos = package.GetAssetInfos("AotDlls");
                foreach (var assetInfo in assetInfos)
                {
                    Debug.Log(assetInfo.AssetPath);
                    RawFileOperationHandle assHandle = package.LoadRawFileSync(assetInfo.Address);
                    byte[] assBytes = assHandle.GetRawFileData();
                    RuntimeApi.LoadMetadataForAOTAssembly(assBytes, HomologousImageMode.Consistent);
                    // RuntimeApi.LoadMetadataForAOTAssembly(assBytes, HomologousImageMode.SuperSet);
                }
                
             
                // string path = "Assets/Bundles/AotDlls";
                // if (Directory.Exists(path))
                // {
                //     DirectoryInfo direction = new DirectoryInfo(path);
                //     FileInfo[] files = direction.GetFiles("*");
                //     for (int i = 0; i < files.Length; i++)
                //     {
                //         //去除Unity内部.meta文件
                //         if (files[i].Name.EndsWith(".meta"))
                //             continue;
                //         if (files[i].Name.EndsWith(".bytes"))
                //         {
                //             string name = files[i].Name.Replace(".bytes", "");
                //             RawFileOperationHandle assHandle = package.LoadRawFileSync(name);
                //             byte[] assBytes = assHandle.GetRawFileData();
                //             RuntimeApi.LoadMetadataForAOTAssembly(assBytes, HomologousImageMode.Consistent);
                //         }
                //     }
                // }
            }
            else
            {
                Dictionary<string, UnityEngine.Object> dictionary = AssetsBundleHelper.LoadBundle("aotdlls.unity3d");
                foreach (var kv in dictionary)
                {
                    byte[] bytes = (kv.Value as TextAsset).bytes;
                    RuntimeApi.LoadMetadataForAOTAssembly(bytes, HomologousImageMode.Consistent);
                }
            }
    

          
   
        
        }
    }
}