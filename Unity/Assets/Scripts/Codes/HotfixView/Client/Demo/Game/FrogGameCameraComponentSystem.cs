namespace ET.Client
{
    public static class FrogGameCameraComponentSystem
    {
        [ObjectSystem]
        public class FrogGameCameraComponentAwakeSystem : AwakeSystem<FrogGameCameraComponent>
        {
            protected override void Awake(FrogGameCameraComponent self)
            {
                // self.Awake();
            }
            
        }
    }
}

