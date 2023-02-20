using UnityEngine;
using System;

namespace ET.Client
{
    public class PelicanComponent: Entity, IAwake
    {
        public Transform transform;
        public SpriteRenderer pelicanRenderer;
        public PelicanAnimComponent animController;
        public DialogCompoent dialogCompoent;
        public Transform standPos;
        public float flySpeed = 1;

        public bool isFlying = false;
    
        // private delegate void PelicanCallBack();

        // private Action _calllback;

        public bool isVisible;
    }
}

