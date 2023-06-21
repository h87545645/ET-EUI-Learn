namespace ET.Client
{
	 [ComponentOf(typeof(UIBaseWindow))]
	public  class DlgMatching :Entity,IAwake,IUILogic
	{

		public DlgMatchingViewComponent View { get => this.GetComponent<DlgMatchingViewComponent>();} 

		 

	}
}
