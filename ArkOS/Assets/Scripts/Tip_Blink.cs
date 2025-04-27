using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using TMPro;

public class Tip_Blink : MonoBehaviour
{
    public float blinkSpeed = 1f;
    private TextMeshProUGUI text;

    // Start is called before the first frame update
    void Start()
    {
        text = GetComponent<TextMeshProUGUI>();
    }

    // Update is called once per frame
    void Update()
    {
        text.alpha = Mathf.PingPong(Time.time * blinkSpeed, 1f);
    }
}
