

using UnityEngine;

namespace ET.Client
{
    [Event(SceneType.Process)]
    [FriendOf(typeof(FrogComponent))]
    public class FrogCollisionEnter2DHandler: AEvent<ET.EventType.FrogCollisionEnter2D>
    {
        protected override async ETTask Run(Scene scene, ET.EventType.FrogCollisionEnter2D args)
        {
            Scene curScene = scene.GetComponent<ClientSceneManagerComponent>().Get(1).CurrentScene();
            Unit player = curScene.GetComponent<UnitComponent>().Get(args.unitId);
           
            // Unit player = UnitHelper.GetMyUnitFromClientScene(scene.GetComponent<ClientSceneManagerComponent>().Get(1));
            if (args.isUp)
            {
                // var direction = transform.InverseTransformPoint(collision.contacts[0].point);
                int flag = player.GetComponent<FrogComponent>().heroRenderer.flipX  ? -1 : 1;
                player.GetComponent<FrogComponent>().heroRigidbody2D.velocity = 
                        new Vector2(player.GetComponent<FrogComponent>().chargeTime * 5 * flag,player.GetComponent<FrogComponent>().heroRigidbody2D.velocity.y);
            }
            else
            {
                // Game_Direction dir = args.isLeft  ? Game_Direction.Right : Game_Direction.Left;
                ET.FrogDirection dir = args.isLeft  ? ET.FrogDirection.Right : ET.FrogDirection.Left;
                if (player.GetComponent<FrogComponent>().direction == ET.FrogDirection.None)
                {
                    dir = player.GetComponent<FrogComponent>().heroRenderer.flipX ? ET.FrogDirection.Right : ET.FrogDirection.Left;
                }
                // player.GetComponent<FrogComponent>().OnFragDirection(dir , true);
                EventSystem.Instance.Publish(player.DomainScene(), new EventType.FrogDirection() { force = true, dir = dir , unitId = args.unitId});
                
                player.GetComponent<FrogComponent>().heroRigidbody2D.velocity = new Vector2(player.GetComponent<FrogComponent>().chargeTime * 5 * (int)dir,player.GetComponent<FrogComponent>().heroRigidbody2D.velocity.y);
            }
        }
    }
}