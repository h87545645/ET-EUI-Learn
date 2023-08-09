using System;
using Unity.Mathematics;
using UnityEngine;
using UnityEngine.Rendering.Universal;

namespace ET.Client
{
    [FriendOf(typeof(FrogComponent))]
    public static class FrogComponentSystem
    {
        [ObjectSystem]
        public class FrogComponentDestroySystem: DestroySystem<FrogComponent>
        {
         
            protected override void Destroy(FrogComponent self)
            {
                UnityEngine.Object.Destroy(self.GameObject);
            }
        }
        
        [ObjectSystem]
        public class FrogComponentAwakeSystem : AwakeSystem<FrogComponent , GameObject ,Unit>
        {
            protected override void Awake(FrogComponent self , GameObject go , Unit unit)
            {
                self.Awake(go , unit);
            }
        }
        
        [ObjectSystem]
        public class FrogComponentUpdateSystem : UpdateSystem<FrogComponent>
        {
            protected override void Update(FrogComponent self)
            {
                self.Update();
            }
        }
        

        public static void Awake(this FrogComponent self ,  GameObject go ,Unit unit)
        {
            self.GameObject = go;
            Scene curr = self.DomainScene();
            long playerId = unit.PlayerId;
            long unitId = unit.Id;
            float3 position = unit.Position;
            self.unitId = unitId;
            if ( playerId == curr.Parent.GetParent<Scene>().GetComponent<PlayerComponent>().MyId)
            {
                self.IsMyPlayer = true;
                go.GetComponent<MonoBridge>().IsMyPlayer = true;
            }
            go.GetComponent<MonoBridge>().BelongToUnitId = self.Parent.Id;
            self.playerName = self.GameObject.transform.Find("FrogMove").Find("PlayerName").GetComponent<TextMesh>();
            self.heroRenderer = self.GameObject.transform.Find("FrogMove").GetComponent<SpriteRenderer>();
            self.heroRigidbody2D = self.GameObject.GetComponentInChildren<Rigidbody2D>();
            self.heroRigidbody2D.transform.position = new Vector3(x: position.x, y: position.y, z: position.z);
            self.collider2D = self.GameObject.GetComponentInChildren<BoxCollider2D>();
            self.light = self.GameObject.GetComponentInChildren(typeof(Light2D)) as Light2D;
            self.light.gameObject.SetActive(false);
            self.groundCheck = self.GameObject.transform.Find("FrogMove/groundCheck");
            self.grond = LayerMask.GetMask("platfrom");
            self.guideAnim = self.GameObject.transform.Find("frog_guide").GetComponent<Animator>();
            self.fragAnim = self.GameObject.transform.Find("FrogMove").GetComponent<Animator>();
            self.Arrow = self.GameObject.transform.Find("FrogMove/arrow");
            self.Arrow.gameObject.SetActive(false);


            self.playerName.text = unit.PlayerName;
            self._state = new StandingState(self);
            self.IsReady = true;
            
            //get frag last position record
            // self.LastPosition = FragGameRecord.GetInstance().reocrd.playerPosition;
        }
        
        public static void SetHeroineState(this FrogComponent self,IBaseState newState)
        {
            self._state = newState;
        }
        
        public static void HandleInput() { }
        
        public static void Update(this FrogComponent self)
        {
            
            Debug.DrawRay(new Vector3(self.heroRigidbody2D.transform.position.x + self.collider2D.size.x * 0.49f * self.heroRigidbody2D.transform.localScale.x, self.heroRigidbody2D.transform.position.y - 
                self.collider2D.size.y/2*self.heroRigidbody2D.transform.localScale.y, self.heroRigidbody2D.transform.position.z), Vector2.down * 0.11f, Color.red);
            RaycastHit2D hit = Physics2D.Raycast(new Vector3(self.heroRigidbody2D.transform.position.x + self.collider2D.size.x * 0.5f * self.heroRigidbody2D.transform.localScale.x, self.heroRigidbody2D.transform.position.y , self.heroRigidbody2D.transform.position.z) ,
                Vector2.down, 0.11f + self.collider2D.size.y / 2 * self.heroRigidbody2D.transform.localScale.y, 1 << 3);
            RaycastHit2D hit2 = Physics2D.Raycast(new Vector3(self.heroRigidbody2D.transform.position.x - self.collider2D.size.x * 0.5f * self.heroRigidbody2D.transform.localScale.x, self.heroRigidbody2D.transform.position.y , self.heroRigidbody2D.transform.position.z) ,
                Vector2.down, 0.11f + self.collider2D.size.y / 2 * self.heroRigidbody2D.transform.localScale.y, 1 << 3);
            if (hit.collider != null  || hit2.collider != null)
            {
                self.isGround = true;
            }
            else
            {
                self.isGround = false;
            }

            self.isDrop = self.heroRigidbody2D.velocity.y < -0.05;
            // Debug.Log("velocity : " + heroRigidbody2D.velocity.y);
            // Debug.Log(" isGroud : " + isGround + "  isDrop: " + isDrop + " heroRigidbody2D.velocity: " +heroRigidbody2D.velocity);

            self._state.HandleInput();
            // AnimatorClipInfo[] info = fragAnim.GetCurrentAnimatorClipInfo(0);
            // Debug.Log("walk state anim "+ info[0].clip.name);
        }

        public static void UpdateArrow(this FrogComponent self , bool isShow , float angle = 0)
        {
            if (isShow)
            {
                self.Arrow.gameObject.SetActive(true);
                self.Arrow.rotation = Quaternion.AngleAxis(angle, Vector3.forward);;
            }
            else
            {
                self.Arrow.gameObject.SetActive(false);
            }
        }
        
        // public static void UpdateArrow(this FrogComponent self , bool isShow , Transform other)
        // {
        //     if (isShow)
        //     {
        //         self.Arrow.gameObject.SetActive(true);
        //         self.Arrow.LookAt(other);
        //     }
        //     else
        //     {
        //         self.Arrow.gameObject.SetActive(false);
        //     }
        // }
        
        public static void Back2LastPos(this FrogComponent self)
        {
            self.heroRenderer.transform.position = new Vector3(self.LastPosition.x, self.LastPosition.y + 1, self.heroRenderer.transform.position.z);
        }
        
        
        public static void OnGuide(this FrogComponent self)
        {
            self.CurrentPosition = new Vector2(-0.84f, -4.61f);
            self.heroRigidbody2D.gameObject.SetActive(false);
            self.guideAnim.gameObject.SetActive(true);
            self.guideAnim.SetTrigger("guide");
        }
        
        public static void SetRecordPos(this FrogComponent self)
        {
            self.heroRenderer.transform.position = self.CurrentPosition;
        }

        public static void OnLight(this FrogComponent self,bool on)
        {
            self.light.gameObject.SetActive(on);
        }
        
        public static IBaseState GetState(this FrogComponent self)
        {
            return self._state;
        }
        
    }
}