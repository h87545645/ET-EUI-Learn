
using UnityEngine;
using UnityEngine.EventSystems;
using UnityEngine.UI;

namespace ET
{
    public class ScrollRocker : ScrollRect 
    {
        
        // public EventTrigger eventTrigger;
        protected float mRadius = 0f;
        private int _lastDir = 0;

        // public delegate void ScrollRectDir(int dir);
        //
        // public static event ScrollRectDir onDir;

        
        
        // Start is called before the first frame update
        protected override void Start()
        {
            base.Start();
            mRadius = (transform as RectTransform).sizeDelta.x * 0.2f;
            // EventManger
        }

        public override void OnDrag(PointerEventData eventData)
        {
            base.OnDrag(eventData);
            var contentPostion = this.content.anchoredPosition;
            if (contentPostion.magnitude > mRadius)
            {
                contentPostion = contentPostion.normalized * mRadius;
                SetContentAnchoredPosition(contentPostion);
                int dir = contentPostion.x < 0 ?-1 : 1;
                if (_lastDir != dir)
                {
                    _lastDir = dir;
                    Mono2ETEventManager.OnScrollRectDir(dir);
                    EventSystem.Instance.Publish(Root.Instance.Scene, new ScrollRectDirectionEvent(){dir = dir});
                    // DlgFragGameMainUIViewComponent.ScrollRectDirEvent.inv
                    // EventSystem.Instance.Publish(self.DomainScene(), new EventType.FrogDirection() { Unit = _fragHore.unit , force = false, dir = ET.FrogDirection.None});
                    // EventCenter.PostEvent<Game_Direction,bool>(Game_Event.FragGameDirection, dir,false);
                    // onDir(_lastDir);
                }
            }
        }
    
        public override void OnEndDrag(PointerEventData eventData)
        {
            base.OnEndDrag(eventData);
            // EventCenter.PostEvent<Game_Direction,bool>(Game_Event.FragGameDirection, Game_Direction.None,false);
            // EventSystem.Instance.Publish(self.DomainScene(), new EventType.FrogDirection() { Unit = _fragHore.unit , force = false, dir = ET.FrogDirection.None});
            // Mono2ETEventManager.OnScrollRectDir(0);
            EventSystem.Instance.Publish(Root.Instance.Scene, new ScrollRectDirectionEvent(){dir = 0});
        }

        public void resetDir()
        {
            _lastDir = 0;
        }
    }
}

