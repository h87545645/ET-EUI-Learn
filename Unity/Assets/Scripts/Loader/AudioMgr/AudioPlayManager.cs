using System.Collections;
using System.Collections.Generic;
using UnityEngine;

namespace ET
{

 
    public class AudioPlayManager : MonoBehaviour
    {
        public static AudioPlayManager instance;
 
        private AudioSourceManager audioSourceManager;
        private AudioClipManager audioClipManager;

        private bool enable = false;
        private SingleAudioClip bgmClip = null;
    
        private void Start()
        {
            instance = this;
        }

        public void Init()
        {

            audioSourceManager = new AudioSourceManager(gameObject);
            audioClipManager = new AudioClipManager();
            enable = true;
        }
 
        private void Update()
        {
            if (enable)
            {
                audioSourceManager.ReleaseFreeAudioSource();
            }
        }
 
        /// <summary>
        /// 播放音频（一次）
        /// </summary>
        /// <param name="audioClipName"></param>
        public void PlayOnceAudio(string audioClipName)
        {
            AudioSource tempAudioSource = audioSourceManager.FindFreeAudioSource();
            SingleAudioClip tempSingleAudioClip = audioClipManager.FindSingleAudioClip(audioClipName);
        
            tempSingleAudioClip.Initialize(tempAudioSource);
        
            tempSingleAudioClip.PlayAudio();
        }
 
        /// <summary>
        /// 播放音乐（需要调用StopPlay关闭）
        /// </summary>
        /// <param name="audioClipName"></param>
        public SingleAudioClip PlayAudio(string audioClipName)
        {
            AudioSource tempAudioSource = audioSourceManager.FindFreeAudioSource();
            SingleAudioClip tempSingleAudioClip = audioClipManager.FindSingleAudioClip(audioClipName);
        
            tempSingleAudioClip.Initialize(tempAudioSource);
        
            tempSingleAudioClip.PlayAudio(true);
 
            return tempSingleAudioClip;
        }
        
        /// <summary>
        /// 播放bgm
        /// </summary>
        /// <param name="audioClipName"></param>
        /// <returns></returns>
        public SingleAudioClip PlayBgm(string audioClipName)
        {
            if (bgmClip != null)
            {
                bgmClip.StopAudio();
            }
            AudioSource tempAudioSource = audioSourceManager.FindFreeAudioSource();
            bgmClip = audioClipManager.FindSingleAudioClip(audioClipName);
        
            bgmClip.Initialize(tempAudioSource);
        
            bgmClip.PlayAudio(true);
 
            return bgmClip;
        } 
    }
}
