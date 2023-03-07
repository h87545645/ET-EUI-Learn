namespace ET
{
    public class UnitEnableCamera: AEvent<FrogEnableCamera> 
    {
        // public FragGameCameraCtrl = null;
        protected override async ETTask Run(Scene scene, FrogEnableCamera args)
        {
            // args.go.GetComponent<FragGameCameraCtrl>().enabled = args.enable;
            args.go.AddComponent<FragGameCameraCtrl>();
        }  
    }
}

