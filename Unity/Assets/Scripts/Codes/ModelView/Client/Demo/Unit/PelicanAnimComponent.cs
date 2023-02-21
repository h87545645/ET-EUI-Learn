using UnityEngine;
namespace ET.Client
{
    public class PelicanAnimComponent : Entity,IAwake,IUpdate
    {
        public Animator animtor;

        public float animInterval = 10;

        public float animTimeCnt = 0;

    }
}

