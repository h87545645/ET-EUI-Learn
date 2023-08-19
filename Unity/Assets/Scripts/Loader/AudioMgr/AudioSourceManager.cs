using System.Collections.Generic;
using UnityEngine;

namespace ET
{

 
public class AudioSourceManager
{
    private List<AudioSource> _audioSources;
 
    private GameObject playLocation;
 
    public AudioSourceManager(GameObject playLocation)
    {
        this.playLocation = playLocation;
        Initial();
    }
    
    /// <summary>
    /// 初始化
    /// </summary>
    private void Initial()
    {
        _audioSources = new List<AudioSource>();
        
        // 初始化三个AudioSource
        for (int i = 0; i < 3; i++)
        {
            _audioSources.Add(playLocation.AddComponent<AudioSource>());
        }
    }
 
    /// <summary>
    /// 找到空闲的AudioSource
    /// </summary>
    /// <returns></returns>
    public AudioSource FindFreeAudioSource()
    {
        for (int i = 0; i < _audioSources.Count; i++)
        {
            if (!_audioSources[i].isPlaying)
            {
                return _audioSources[i];
            }
        }
        
        // 没有空闲的AudioSource，创建新的AudioSource
        AudioSource tempSource = playLocation.AddComponent<AudioSource>();
        
        // 添加
        _audioSources.Add(tempSource);
 
        return tempSource;
    }
 
    /// <summary>
    /// 释放多余的AudioSource【大于3个】
    /// </summary>
    public void ReleaseFreeAudioSource()
    {
        int freeCount = 0;
 
        List<AudioSource> tempSources = new List<AudioSource>();
        
        // 记录有多少AudioSource没有播放
        for (int i = 0; i < _audioSources.Count; i++)
        {
            if (!_audioSources[i].isPlaying)
            {
                // 如果空闲AudioSource大于3个
                if (++freeCount>3)
                {
                    tempSources.Add(_audioSources[i]);
                }
            }
        }
 
        // 释放多余的AudioSource
        for (int i = 0; i < tempSources.Count; i++)
        {
            _audioSources.Remove(tempSources[i]);
            GameObject.Destroy(tempSources[i]);
        }
        
        // 释放临时List<>
        tempSources.Clear();
        tempSources = null;
    }
}
}
