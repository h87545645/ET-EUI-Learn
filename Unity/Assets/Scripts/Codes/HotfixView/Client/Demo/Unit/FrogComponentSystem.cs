using System;
using UnityEngine;

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
        public class FrogComponentAwakeSystem : AwakeSystem<FrogComponent>
        {
            protected override void Awake(FrogComponent self)
            {
                self.Awake();
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
        

        public static void Awake(this FrogComponent self)
        {
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
        
        
        public static void OnGuide(this FrogComponent self)
        {
            self.LastPosition = new Vector2(-0.84f, -4.61f);
            self.heroRigidbody2D.gameObject.SetActive(false);
            self.guideAnim.gameObject.SetActive(true);
            self.guideAnim.SetTrigger("guide");
        }
        
        public static void SetRecordPos(this FrogComponent self)
        {
            self.heroRenderer.transform.position = self.LastPosition;
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