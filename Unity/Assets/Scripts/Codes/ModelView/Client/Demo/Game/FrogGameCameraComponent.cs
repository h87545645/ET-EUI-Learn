namespace ET.Client
{
    [ComponentOf(typeof(Scene))]
    public class FrogGameCameraComponent: Entity, IAwake , IUpdate
    {
        public double screenHeight = 14;

        public int currentCameraIndex = 0;

        public bool enable = false;
    }
}