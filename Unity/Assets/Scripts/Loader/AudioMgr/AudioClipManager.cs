using System;
using System.IO;
using UnityEngine;
using YooAsset;

namespace ET
{

 
public class AudioClipManager
{
    private string[] audioClipNames;
 
    private SingleAudioClip[] singleAudioClips;
 
    public AudioClipManager()
    {
        Initial();
    }
 
    private void Initial()
    {
        ReadAudioClipName();
        LoadAudioClip();
    }
 
    /// <summary>
    /// 从txt文件中读取AudioClipName
    /// </summary>
    private void ReadAudioClipName()
    {
        var package = YooAssets.GetPackage("DefaultPackage");
        RawFileOperationHandle pdbHandle = package.LoadRawFileSync("AudioClips");
        string fileText = pdbHandle.GetRawFileText();
        string[] audios = fileText.Split(new string[] { "\r\n" }, StringSplitOptions.RemoveEmptyEntries);
        audioClipNames = audios;
    }
 
    /// <summary>
    /// 加载AudioClip
    /// </summary>
    private void LoadAudioClip()
    {
        // 初始化
        singleAudioClips = new SingleAudioClip[audioClipNames.Length];
        
        for (int i = 0; i < audioClipNames.Length; i++)
        {
            // 加载
            var package = YooAssets.GetPackage("DefaultPackage");
            AssetOperationHandle handle = package.LoadAssetSync<AudioClip>(audioClipNames[i]);
            AudioClip tempClip = handle.AssetObject as AudioClip;
            // 存储
            singleAudioClips[i] = new SingleAudioClip(tempClip);
        }
    }
 
    /// <summary>
    /// 通过AudioClipName获取SingleAudioClip
    /// </summary>
    /// <param name="audioClipName"></param>
    /// <returns></returns>
    public SingleAudioClip FindSingleAudioClip(string audioClipName)
    {
        for (int i = 0; i < audioClipNames.Length; i++)
        {
            // 如果找到
            if (audioClipNames[i].Equals(audioClipName))
            {
                return singleAudioClips[i];
            }
        }
        
        // 没有找到
        return null;
    }
}
}
