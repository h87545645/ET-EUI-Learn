namespace ET.Client
{
	 [ComponentOf(typeof(UIBaseWindow))]
	public  class DlgWatchAd :Entity,IAwake,IUILogic
	{

		public DlgWatchAdViewComponent View { get => this.GetComponent<DlgWatchAdViewComponent>();} 

		 

	}
}
