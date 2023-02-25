namespace ET.Client
{
	 [ComponentOf(typeof(UIBaseWindow))]
	public  class DlgFrogMenu :Entity,IAwake,IUILogic
	{

		public DlgFrogMenuViewComponent View { get => this.GetComponent<DlgFrogMenuViewComponent>();} 

		 

	}
}
