namespace ET.Client
{
	 [ComponentOf(typeof(UIBaseWindow))]
	public  class DlgFragGameMainUI :Entity,IAwake,IUILogic,IUpdate
	{

		public DlgFragGameMainUIViewComponent View { get => this.GetComponent<DlgFragGameMainUIViewComponent>();} 

		// public delegate void ScrollRectDir(int dir);
		//
		// public static event ScrollRectDir scrollDir; 
		
		public float _lastTime = 0;

		public bool _onPointerDownStart = false;

	}
}
