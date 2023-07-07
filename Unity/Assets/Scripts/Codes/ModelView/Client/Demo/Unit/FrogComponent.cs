using Unity.Mathematics;
using UnityEngine;
using UnityEngine.Rendering.Universal;

namespace ET.Client
{
    [ComponentOf(typeof(Unit))]
    public class FrogComponent: Entity, IAwake<GameObject , Unit>, IDestroy , IUpdate
    {
        public long unitId;
        public bool IsMyPlayer;
        public GameObject GameObject { get; set; }
        public BoxCollider2D collider2D;
        public SpriteRenderer heroRenderer;
        public Rigidbody2D heroRigidbody2D;
        public TextMesh playerName;
        public Light2D light;
        public Transform groundCheck;
        public LayerMask grond;
        public Transform Arrow;
        
        public Animator guideAnim;
        public Animator fragAnim;
        public float chargeTime = 0;
        public int currentCameraIndex = 0;
        
        
        //frog direction
        public FrogDirection direction = FrogDirection.None;
        public FrogDirection lastDirection = FrogDirection.None;
        //is frog on the ground
        public bool isGround = false;
        //is frog droping
        public bool isDrop = false;
        
        private Vector2 _lastPosition = Vector2.zero;
        public Vector2 LastPosition
        {
            get { return _lastPosition; }
            set
            {
                _lastPosition = value;
                if (this.IsMyPlayer)
                {
                    EventSystem.Instance.Publish(this.DomainScene(), new EventType.FrogLastPosition() { Position = new float2(value.x , value.y) });
                }
               
            }
        }
        
        private bool _isReady = false;
        public bool IsReady
        {
            get { return _isReady; }
            set
            {
                _isReady = value;
            }
        }
        
        public IBaseState _state;
    }
}

