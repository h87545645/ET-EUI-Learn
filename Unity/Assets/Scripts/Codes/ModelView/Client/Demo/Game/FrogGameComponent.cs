using UnityEngine;
using UnityEngine.Rendering.Universal;

namespace ET.Client
{
    // public enum FrogGameType
    // {
    //     Single,
    //     Multiplayer,
    // }
    
    [ComponentOf(typeof(Scene))]
    public class FrogGameComponent: Entity, IAwake , IUpdate
    {
        // public FragGameCameraCtrl fragGameCameraCtrl;
        //
        // public FragHero fragHero;
        

        // public Pelican pelican;

        public Light2D globalLight;

        // public FragGameCompleted completedPanel;
        //
        // public FragInputCtrl inputCtrl;

        // private long _totalPlayTime = 0;

        // private float _curLevelTime = 0;
        //
        // private bool _levelLongStay = false;

        // private bool _isAlreadyGuide = true;

        public bool _isCompleted = false;

        // public bool isSinglePlay = false;
    }
}

