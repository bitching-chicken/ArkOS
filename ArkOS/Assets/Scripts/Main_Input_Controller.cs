using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.InputSystem;
using TMPro;

public class Main_Input_Controller : MonoBehaviour
{
    [Header("Start_Tip_Text Objects")]
    public TextMeshProUGUI Start_Tip_Text;
    public CanvasGroup Start_Tip_CanvasGroup;
    [Header("Direct_Get_Button Objects")]
    public GameObject Direct_Get_Button;
    public CanvasGroup Direct_Get_CanvasGroup;

    // Input System
    private PlayerInput playerInput;
    private Player_Input_Actions Main_Input;

    // FSM
    private string Main_UI_FSM = "IDLE";

    // Parameter
    private float fadeDuration = 0.8f;

    private void Awake()
    {
        // create input system
        playerInput = GetComponent<PlayerInput>();
       Main_Input = new Player_Input_Actions();

        // enable default map
        Main_Input.Main_UI.Enable();
        Main_Input.Main_UI.First_Touch.performed += Input_First_Touch;
        Main_Input.Main_UI.Back.performed += Input_Back;
    }

    // Input Actions
    public void Input_First_Touch(InputAction.CallbackContext context)
    {
        //Debug.Log(context);
        if (context.performed && Main_UI_FSM == "IDLE")
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
                new List<GameObject> { Direct_Get_Button }
            };
            List<List<CanvasGroup>> Canvas_Lists = new List<List<CanvasGroup>>()
            {
                new List<CanvasGroup> { Start_Tip_CanvasGroup },
                new List<CanvasGroup> { Direct_Get_CanvasGroup }
            };
            List<List<bool>> IsFadeIn_Lists = new List<List<bool>>()
            {
                new List<bool> { false },
                new List<bool> { true }
            };
            StartCoroutine(Fade_List(Object_Lists, Canvas_Lists, IsFadeIn_Lists));
            //Debug.Log("First_Touch!" + context.phase);
            //Main_Input.Main_UI.Disable();
        }
    }

    public void Input_Back(InputAction.CallbackContext context)
    {
        if (context.performed && Main_UI_FSM == "SELECT")
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
                new List<GameObject> { Direct_Get_Button },
                new List<GameObject> { Start_Tip_Text.gameObject }
            };
            List<List<CanvasGroup>> Canvas_Lists = new List<List<CanvasGroup>>()
            {
                new List<CanvasGroup> { Direct_Get_CanvasGroup },
                new List<CanvasGroup> { Start_Tip_CanvasGroup }
            };
            List<List<bool>> IsFadeIn_Lists = new List<List<bool>>()
            {
                new List<bool> { false },
                new List<bool> { true }
            };
            StartCoroutine(Fade_List(Object_Lists, Canvas_Lists, IsFadeIn_Lists));
        }
    }

    // Processing Function
    IEnumerator Fade_List2(List<int> Object_Lists)
    {
        yield return null;
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
