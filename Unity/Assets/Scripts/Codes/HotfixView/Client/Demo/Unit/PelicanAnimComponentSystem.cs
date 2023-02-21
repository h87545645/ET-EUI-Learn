using UnityEngine;
using Random = System.Random;

namespace ET.Client
{
    [FriendOf(typeof(PelicanAnimComponent))]
    public static class PelicanAnimComponentSystem
    {
        [ObjectSystem]
        public class PelicanAnimComponentSystemAwakeSystem : AwakeSystem<PelicanAnimComponent>
        {
            protected override void Awake(PelicanAnimComponent self)
            {
                // self.Awake();
                // if (self.animtor == null)
                // {
                //     self.animtor = GetComponent<Animator>();
                // }
                // InvokeRepeating("RandomIdelAnim", 7, 10);
                self.animTimeCnt = self.animInterval;
                // self.animtor = self.GetChild<Pelican>()
                self.GetParent<Unit>().GetComponent<GameObjectComponent>().GameObject.GetComponent<Animator>();
            }
        }
        
        [ObjectSystem]
        public class FrogComponentUpdateSystem : UpdateSystem<PelicanAnimComponent>
        {
            protected override void Update(PelicanAnimComponent self)
            {
                self.animTimeCnt -= Time.deltaTime;
                if (self.animTimeCnt <= 0)
                {
                    self.animTimeCnt = self.animInterval;
                    self.RandomIdelAnim();
                }
            }
        }
        public static void Speak(this PelicanAnimComponent self)
        {
            self.animtor.SetBool("speak",true);
        }

        public static void FinishSpeak(this PelicanAnimComponent self)
        {
            self.animtor.SetBool("speak",false);
            self.animtor.SetBool("idle",true);
        }

        public static void Fly(this PelicanAnimComponent self)
        {
            self.animtor.SetBool("fly",true);
        }

        public static void FlyEnd(this PelicanAnimComponent self)
        {
            self.animtor.SetBool("fly",false);
            self.animtor.SetBool("idle",true);
        }

        public static void RandomIdelAnim(this PelicanAnimComponent self)
        {
            Random rd = new Random();
            string idleAnim = rd.Next(10) % 10 < 5 ? "idle1" : "idle2";
            self.animtor.SetTrigger(idleAnim);
        }
    }
}

