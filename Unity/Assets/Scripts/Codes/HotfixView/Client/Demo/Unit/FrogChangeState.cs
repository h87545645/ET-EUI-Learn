using UnityEngine;

namespace ET.Client
{
    [Event(SceneType.Current)]
    public class FrogChangeState: AEvent<EventType.ChangeFrogState>
    {
        protected override async ETTask Run(Scene scene, EventType.ChangeFrogState args)
        {
            Unit player = UnitHelper.GetMyUnitFromCurrentScene(scene.DomainScene());
            FrogComponent frogComponent = player.GetComponent<FrogComponent>();
            if (frogComponent == null)
            {
                return;
            }

            switch (args.state)
            {
                case FrogState.Standing:
                {
                    frogComponent.SetHeroineState(new StandingState(frogComponent));
                    break;
                }
                case FrogState.Charge:
                {
                    frogComponent.SetHeroineState(new ChargeState(frogComponent));
                    break;
                }
                case FrogState.Falling:
                {
                    frogComponent.SetHeroineState(new FallingState(frogComponent));
                    break;
                }
                case FrogState.Jumping:
                {
                    frogComponent.SetHeroineState(new JumpingState(frogComponent));
                    break;
                }
                case FrogState.Landing:
                {
                    frogComponent.SetHeroineState(new LandingState(frogComponent));
                    break;
                }
                case FrogState.Walking:
                {
                    frogComponent.SetHeroineState(new WalkingState(frogComponent));
                    break;
                }
            }
            await ETTask.CompletedTask;
        }
    }
}