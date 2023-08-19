using UnityEngine;

namespace ET
{

 
    public class SingleAudioClip
    {
        private AudioClip audioClip;
        private AudioSource audioSource;
 
        public SingleAudioClip(AudioClip audioClip)
        {
            this.audioClip = audioClip;
        }
 
        /// <summary>
        /// 初始化
        /// </summary>
        /// <param name="audioSource"></param>
        public void Initialize(AudioSource audioSource)
        {
            audioSource.clip = audioClip;
            this.audioSource = audioSource;
        }
 
        /// <summary>
        /// 播放AudioClip
        /// </summary>
        public void PlayAudio(bool isLoop = false)
        {
            audioSource.loop = isLoop;
            audioSource.Play();
        }
 
        /// <summary>
        /// 关闭AudioClip
        /// </summary>
        public void StopAudio()
        {
            audioSource.Stop();
        }
    }
}
