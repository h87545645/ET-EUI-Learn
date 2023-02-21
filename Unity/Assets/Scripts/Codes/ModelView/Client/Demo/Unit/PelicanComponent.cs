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
    
        // public delegate void PelicanCallBack();
        //
        // private PelicanCallBack _hotfixCallback;

        // public Action callBack;

        public bool isVisible;
    }
}

