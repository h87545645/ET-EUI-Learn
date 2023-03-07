using UnityEngine;
using System;


namespace ET.Client
{
    [ComponentOf(typeof(Unit))]
    public class PelicanComponent: Entity, IAwake<GameObject>
    {
        // public Pelican pelican;
        public GameObject GameObject { get; set; }
        
        
        // public Transform transform;
        public SpriteRenderer pelicanRenderer;
        public PelicanAnimComponent animController;
        public DialogCompoent dialogCompoent;
        public Transform standPos;
        public float flySpeed = 10;

        public bool isFlying = false;
    
        // public delegate void PelicanCallBack();
        //
        // private PelicanCallBack _hotfixCallback;

        // public Action callBack;

        public bool isVisible;
    }
}

