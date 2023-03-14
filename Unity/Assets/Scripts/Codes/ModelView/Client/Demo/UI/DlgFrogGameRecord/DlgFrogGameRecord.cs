namespace ET.Client
{
	 [ComponentOf(typeof(UIBaseWindow))]
	public  class DlgFrogGameRecord :Entity,IAwake,IUILogic
	{

		public DlgFrogGameRecordViewComponent View { get => this.GetComponent<DlgFrogGameRecordViewComponent>();} 

		 

	}
}
