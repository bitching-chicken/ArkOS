using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.InputSystem;
using UnityEngine.InputSystem.EnhancedTouch;
using Touch = UnityEngine.InputSystem.EnhancedTouch.Touch;
using TMPro;

public class Main_Input_Controller : MonoBehaviour
{
    [Header("Start_Tip_Text Objects")]
    public TextMeshProUGUI Start_Tip_Text;
    public CanvasGroup Start_Tip_CanvasGroup;
    [Header("Battle_Get_Button Objects")]
    public GameObject Battle_Get_Button;
    public CanvasGroup Battle_Get_CanvasGroup;
    public GameObject Battle_Get_Left_Image;
    public CanvasGroup Battle_Get_Left_CanvasGroup;
    public GameObject Battle_Get_Right_Image;
    public CanvasGroup Battle_Get_Right_CanvasGroup;
    [Header("Direct_Get_Button Objects")]
    public GameObject Direct_Get_Button;
    public CanvasGroup Direct_Get_CanvasGroup;
    public GameObject Direct_Get_Left_Image;
    public CanvasGroup Direct_Get_Left_CanvasGroup;
    public GameObject Direct_Get_Right_Image;
    public CanvasGroup Direct_Get_Right_CanvasGroup;
    [Header("Backpack_Button Objects")]
    public GameObject Backpack_Button;
    public CanvasGroup Backpack_CanvasGroup;
    public GameObject Backpack_Left_Image;
    public CanvasGroup Backpack_Left_CanvasGroup;
    public GameObject Backpack_Right_Image;
    public CanvasGroup Backpack_Right_CanvasGroup;
    [Header("Engrave_Button Objects")]
    public GameObject Engrave_Button;
    public CanvasGroup Engrave_CanvasGroup;
    public GameObject Engrave_Left_Image;
    public CanvasGroup Engrave_Left_CanvasGroup;
    public GameObject Engrave_Right_Image;
    public CanvasGroup Engrave_Right_CanvasGroup;
    [Header("Setting_Button Objects")]
    public GameObject Setting_Button;
    public CanvasGroup Setting_CanvasGroup;
    public GameObject Setting_Left_Image;
    public CanvasGroup Setting_Left_CanvasGroup;
    public GameObject Setting_Right_Image;
    public CanvasGroup Setting_Right_CanvasGroup;
    [Header("SwipeBack Settings")]
    [SerializeField, Range(0f, 0.5f)]
    private float edgeThreshold = 0.05f; // 屏幕边缘阈值(5%)
    [SerializeField, Range(0f, 500f)]
    private float minSwipeDistance = 100f; // 最小滑动距离
    [SerializeField, Range(0f, 1f)]
    private float maxSwipeTime = 0.5f; // 最大滑动时间

    // Input System
    private PlayerInput playerInput;
    private Player_Input_Actions Main_Input;

    // FSM
    public static string Main_UI_FSM = "IDLE";
    public static int Curr_Sel_Button = 0;
    public static int Max_Sel_Button = 5;
    public static InputDevice CurrDevice;

    // Animation Parameter
    private float fadeDuration = 0.8f;
    private Vector2 touchStartPosition;
    private float touchStartTime;
    private bool touchStartedFromEdge;
    private float moveCooldown = 0.2f; // 移动冷却时间
    private float lastMoveTime;

    private void OnEnable()
    {
        EnhancedTouchSupport.Enable();
        Touch.onFingerDown += OnFingerDown;
        Touch.onFingerMove += OnFingerMove;
        Touch.onFingerUp += OnFingerUp;
    }

    private void OnDisable()
    {
        Touch.onFingerDown -= OnFingerDown;
        Touch.onFingerMove -= OnFingerMove;
        Touch.onFingerUp -= OnFingerUp;
        EnhancedTouchSupport.Disable();
    }

    private void Awake()
    {
        // create input system
        playerInput = GetComponent<PlayerInput>();
       Main_Input = new Player_Input_Actions();

        // enable default map
        Main_Input.Main_UI.Enable();
        Main_Input.Main_UI.First_Touch.performed += Input_First_Touch;
        Main_Input.Main_UI.Back.performed += Input_Back;
        Main_Input.Main_UI.Move.performed += Input_Move;
    }

    // Input Actions
    public void Input_First_Touch(InputAction.CallbackContext context)
    {
        //Debug.Log(context);
        if (context.performed && Main_UI_FSM == "IDLE")
        {
            CurrDevice = context.control.device;
            if (CurrDevice is not Touchscreen)
            {
                Curr_Sel_Button = 0;
                lastMoveTime = Time.time;
            }
            Main_UI_IDLE_TO_SELECT();
        }
    }

    public void Input_Back(InputAction.CallbackContext context)
    {
        if (context.performed && Main_UI_FSM == "SELECT")
        {
            CurrDevice = null;
            Main_UI_SELECT_TO_IDLE();
        }
    }

    public void Input_Move(InputAction.CallbackContext context)
    {
        if (Time.time - lastMoveTime < moveCooldown) return;
        if (context.performed && Main_UI_FSM == "SELECT" && CurrDevice is not Touchscreen)
        {
            int Next_Sel_Button = Curr_Sel_Button;
            Vector2 inputVector = context.ReadValue<Vector2>();
            // 移动当前所选的button
            if (inputVector.y > 0)
            {
                Next_Sel_Button -= 1;
            }
            else if (inputVector.y < 0)
            {
                Next_Sel_Button += 1;
            }
            if (Next_Sel_Button < 0)
            {
                Next_Sel_Button += Max_Sel_Button;
            }
            Next_Sel_Button = Next_Sel_Button % Max_Sel_Button;
            // invisible Curr, visible Next
            var (Curr_Left, Curr_Right, Curr_Left_Canvas, Curr_Right_Canvas) = Get_Select_Object(Curr_Sel_Button);
            var (Next_Left, Next_Right, Next_Left_Canvas, Next_Right_Canvas) = Get_Select_Object(Next_Sel_Button);
            /*
            List<List<GameObject>> Object_Lists = new List<List<GameObject>>()
            {
                new List<GameObject> { Curr_Left, Curr_Right },
                new List<GameObject> { Next_Left, Next_Right }
            };
            List<List<CanvasGroup>> Canvas_Lists = new List<List<CanvasGroup>>()
            {
                new List<CanvasGroup> { Curr_Left_Canvas, Curr_Right_Canvas },
                new List<CanvasGroup> { Next_Left_Canvas, Next_Right_Canvas }
            };
            List<List<bool>> IsFadeIn_Lists = new List<List<bool>>()
            {
                new List<bool> { false, false },
                new List<bool> { true, true }
            };
            StartCoroutine(Fade_List(Object_Lists, Canvas_Lists, IsFadeIn_Lists));
            */
            Curr_Left.SetActive(false);
            Curr_Right.SetActive(false);
            Curr_Left_Canvas.alpha = 0;
            Curr_Right_Canvas.alpha = 0;
            Next_Left.SetActive(true);
            Next_Right.SetActive(true);
            Next_Left_Canvas.alpha = 1;
            Next_Right_Canvas.alpha = 1;
            // Next -> Curr
            Curr_Sel_Button = Next_Sel_Button;
            lastMoveTime = Time.time;
            //Debug.Log(Curr_Sel_Button);
        }
    }

    private void OnFingerDown(Finger finger)
    {
        touchStartPosition = finger.screenPosition;
        touchStartTime = Time.time;

        // 检查是否从屏幕边缘开始
        touchStartedFromEdge = IsPositionNearEdge(touchStartPosition);
    }

    private void OnFingerMove(Finger finger)
    {
        // 可选：在移动过程中提供视觉反馈
    }

    private void OnFingerUp(Finger finger)
    {
        if (!touchStartedFromEdge) return;

        Vector2 touchEndPosition = finger.screenPosition;
        float touchDuration = Time.time - touchStartTime;
        float swipeDistance = Vector2.Distance(touchStartPosition, touchEndPosition);

        // 检查滑动是否满足条件
        if (touchDuration <= maxSwipeTime && swipeDistance >= minSwipeDistance)
        {
            Vector2 swipeDirection = (touchEndPosition - touchStartPosition).normalized;

            // 检查滑动方向是否朝向屏幕中心
            if (IsSwipeTowardCenter(swipeDirection, touchStartPosition))
            {
                // 触发返回操作
                //Debug.Log("Edge swipe back detected");
                // 这里可以调用你的返回功能
                ExecuteBackAction();
            }
        }
    }


    // Processing Function
    private void Main_UI_IDLE_TO_SELECT()
    {
        Main_UI_FSM = "SELECT";
        // typeA
        //StartCoroutine(FadeOut_FadeIn_Seq(Start_Tip_Text.gameObject, Start_Tip_CanvasGroup, Direct_Get_Button, Direct_Get_CanvasGroup));
        // typeB
        //StartCoroutine(FadeOut_Object(Start_Tip_Text.gameObject, Start_Tip_CanvasGroup));
        //StartCoroutine(FadeIn_Object(Direct_Get_Button, Direct_Get_CanvasGroup));
        // typeC
        List<List<GameObject>> Object_Lists = new List<List<GameObject>>()
        {
            new List<GameObject> { Start_Tip_Text.gameObject },
            new List<GameObject> { Battle_Get_Button, Battle_Get_Left_Image, Battle_Get_Right_Image, 
                                   Direct_Get_Button, Direct_Get_Left_Image, Direct_Get_Right_Image,
                                   Backpack_Button, Backpack_Left_Image, Backpack_Right_Image,
                                   Engrave_Button, Engrave_Left_Image, Engrave_Right_Image,
                                   Setting_Button, Setting_Left_Image, Setting_Right_Image }
        };
        List<List<CanvasGroup>> Canvas_Lists = new List<List<CanvasGroup>>()
        {
            new List<CanvasGroup> { Start_Tip_CanvasGroup },
            new List<CanvasGroup> { Battle_Get_CanvasGroup, Battle_Get_Left_CanvasGroup, Battle_Get_Right_CanvasGroup,
                                    Direct_Get_CanvasGroup, Direct_Get_Left_CanvasGroup, Direct_Get_Right_CanvasGroup,
                                    Backpack_CanvasGroup, Backpack_Left_CanvasGroup, Backpack_Right_CanvasGroup,
                                    Engrave_CanvasGroup, Engrave_Left_CanvasGroup, Engrave_Right_CanvasGroup,
                                    Setting_CanvasGroup, Setting_Left_CanvasGroup, Setting_Right_CanvasGroup }
        };
        List<List<bool>> IsFadeIn_Lists = new List<List<bool>>()
        {
            new List<bool> { false },
            new List<bool> { true, CurrDevice is not Touchscreen, CurrDevice is not Touchscreen,
                             true, false, false,
                             true, false, false,
                             true, false, false,
                             true, false, false }
        };
        StartCoroutine(Fade_List(Object_Lists, Canvas_Lists, IsFadeIn_Lists));
        //Debug.Log("First_Touch!" + context.phase);
        //Main_Input.Main_UI.Disable();
    }

    private void Main_UI_SELECT_TO_IDLE()
    {
        Main_UI_FSM = "IDLE";
        // typeA
        //StartCoroutine(FadeOut_FadeIn_Seq(Direct_Get_Button, Direct_Get_CanvasGroup, Start_Tip_Text.gameObject, Start_Tip_CanvasGroup));
        // typeB
        //StartCoroutine(FadeIn_Object(Start_Tip_Text.gameObject, Start_Tip_CanvasGroup));
        //StartCoroutine(FadeOut_Object(Direct_Get_Button, Direct_Get_CanvasGroup));
        // typeC
        List<List<GameObject>> Object_Lists = new List<List<GameObject>>()
        {
            new List<GameObject> { Battle_Get_Button, Battle_Get_Left_Image, Battle_Get_Right_Image,
                                   Direct_Get_Button, Direct_Get_Left_Image, Direct_Get_Right_Image,
                                   Backpack_Button, Backpack_Left_Image, Backpack_Right_Image,
                                   Engrave_Button, Engrave_Left_Image, Engrave_Right_Image,
                                   Setting_Button, Setting_Left_Image, Setting_Right_Image },
            new List<GameObject> { Start_Tip_Text.gameObject }
        };
        List<List<CanvasGroup>> Canvas_Lists = new List<List<CanvasGroup>>()
        {
            new List<CanvasGroup> { Battle_Get_CanvasGroup, Battle_Get_Left_CanvasGroup, Battle_Get_Right_CanvasGroup,
                                    Direct_Get_CanvasGroup, Direct_Get_Left_CanvasGroup, Direct_Get_Right_CanvasGroup,
                                    Backpack_CanvasGroup, Backpack_Left_CanvasGroup, Backpack_Right_CanvasGroup,
                                    Engrave_CanvasGroup, Engrave_Left_CanvasGroup, Engrave_Right_CanvasGroup,
                                    Setting_CanvasGroup, Setting_Left_CanvasGroup, Setting_Right_CanvasGroup },
            new List<CanvasGroup> { Start_Tip_CanvasGroup }
        };
        List<List<bool>> IsFadeIn_Lists = new List<List<bool>>()
        {
            new List<bool> { false, false, false,
                             false, false, false,
                             false, false, false,
                             false, false, false,
                             false, false, false },
            new List<bool> { true }
        };
        StartCoroutine(Fade_List(Object_Lists, Canvas_Lists, IsFadeIn_Lists));
    }

    IEnumerator Fade_List(List<List<GameObject>> Object_Lists, List<List<CanvasGroup>> Canvas_Lists, List<List<bool>> IsFadeIn_Lists)
    {
        for (int i = 0; i < Object_Lists.Count; i++)
        {
            yield return StartCoroutine(Fade_Objects(Object_Lists[i], Canvas_Lists[i], IsFadeIn_Lists[i]));
        }
    }

    IEnumerator Fade_Objects(List<GameObject> Object_List, List<CanvasGroup> Canvas_List, List<bool> IsFadeIn_List)
    {
        int completedCount = 0;
        List<Coroutine> coroutines = new List<Coroutine>();

        // 启动所有对象的淡出协程
        for (int i = 0; i < Object_List.Count; i++)
        {
            Coroutine coroutine = StartCoroutine(Fade_One_Object(Object_List[i], Canvas_List[i], IsFadeIn_List[i], () => completedCount++));
            coroutines.Add(coroutine);
        }

        // 等待所有对象淡出完成
        while (completedCount < Object_List.Count)
            yield return null;
    }

    IEnumerator Fade_One_Object(GameObject Object, CanvasGroup Canvas, bool IsFadeIn, System.Action onComplete)
    {
        if (IsFadeIn)
        {
            Canvas.alpha = 0;
            Object.SetActive(true);
        }
        else
        {
            Canvas.alpha = 1;
        }

        float elapsed = 0f;
        while (elapsed < fadeDuration)
        {
            if (IsFadeIn)
            {
                Canvas.alpha = Mathf.Lerp(0, 1, elapsed / fadeDuration);
            }
            else
            {
                Canvas.alpha = Mathf.Lerp(1, 0, elapsed / fadeDuration);
            }
            elapsed += Time.deltaTime;
            yield return null;
        }

        if (IsFadeIn)
        {
            Canvas.alpha = 1;
        }
        else
        {
            Canvas.alpha = 0;
            Object.SetActive(false);
        }
        onComplete?.Invoke();
    }

    private bool IsPositionNearEdge(Vector2 position)
    {
        // 将屏幕坐标转换为0-1范围
        Vector2 normalizedPosition = new Vector2(
            position.x / Screen.width,
            position.y / Screen.height);

        // 检查是否靠近任何屏幕边缘
        return normalizedPosition.x < edgeThreshold ||
               normalizedPosition.x > 1 - edgeThreshold ||
               normalizedPosition.y < edgeThreshold ||
               normalizedPosition.y > 1 - edgeThreshold;
    }

    private bool IsSwipeTowardCenter(Vector2 direction, Vector2 startPosition)
    {
        // 计算从触摸点到屏幕中心的方向
        Vector2 screenCenter = new Vector2(Screen.width / 2f, Screen.height / 2f);
        Vector2 toCenter = (screenCenter - startPosition).normalized;

        // 检查滑动方向是否大致朝向中心
        return Vector2.Dot(direction, toCenter) > 0.5f; // 0.5是可调整的阈值
    }

    private void ExecuteBackAction()
    {
        // 实现你的返回逻辑，例如：
        // - 返回上一级UI
        // - 关闭当前面板
        // - 返回游戏中的上一个状态
        //Debug.Log("Back action executed");
        if (Main_UI_FSM == "IDLE")
        {
            // 退出游戏 TODO
        }
        else if (Main_UI_FSM == "SELECT")
        {
            Main_UI_SELECT_TO_IDLE();
        }
    }

    private (GameObject Left, GameObject Right, CanvasGroup LeftCanvas, CanvasGroup RightCanvas) Get_Select_Object(int index)
    {
        if (index == 0)
        {
            return (Battle_Get_Left_Image, Battle_Get_Right_Image, Battle_Get_Left_CanvasGroup, Battle_Get_Right_CanvasGroup);
        }
        else if (index == 1)
        {
            return (Direct_Get_Left_Image, Direct_Get_Right_Image, Direct_Get_Left_CanvasGroup, Direct_Get_Right_CanvasGroup);
        }
        else if (index == 2)
        {
            return (Backpack_Left_Image, Backpack_Right_Image, Backpack_Left_CanvasGroup, Backpack_Right_CanvasGroup);
        }
        else if (index == 3)
        {
            return (Engrave_Left_Image, Engrave_Right_Image, Engrave_Left_CanvasGroup, Engrave_Right_CanvasGroup);
        }
        else if (index == 4)
        {
            return (Setting_Left_Image, Setting_Right_Image, Setting_Left_CanvasGroup, Setting_Right_CanvasGroup);
        }
        else
        {
            return (null, null, null, null);
        }
    }


    /*
    IEnumerator FadeOut_Object(GameObject Object, CanvasGroup Canvas)
    {
        Canvas.alpha = 1;
        float elapsed = 0f;
        while (elapsed < fadeDuration)
        {
            Canvas.alpha = Mathf.Lerp(1, 0, elapsed / fadeDuration);
            elapsed += Time.deltaTime;
            yield return null;
        }
        Canvas.alpha = 0;
        Object.SetActive(false);
    }

    IEnumerator FadeIn_Object(GameObject Object, CanvasGroup Canvas)
    {
        Canvas.alpha = 0;
        Object.SetActive(true);
        float elapsed = 0f;
        while (elapsed < fadeDuration)
        {
            Canvas.alpha = Mathf.Lerp(0, 1, elapsed / fadeDuration);
            elapsed += Time.deltaTime;
            yield return null;
        }
        Canvas.alpha = 1;
    }

    IEnumerator FadeOut_FadeIn_Seq(GameObject Object0, CanvasGroup Canvas0, GameObject Object1, CanvasGroup Canvas1)
    {
        yield return StartCoroutine(FadeOut_Object(Object0, Canvas0));
        yield return StartCoroutine(FadeIn_Object(Object1, Canvas1));
    }
    */
}
