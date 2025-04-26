using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class Title_Image_Anima : MonoBehaviour
{
    // Define parameters
    // For move anima
    public float amplitude = 5f; // ¸¡¶¯·ù¶È
    public float speed = 2f;

    // Start is called before the first frame update
    void Start()
    {

    }

    // Update is called once per frame
    void Update()
    {
        float offset = Mathf.Sin(Time.time * speed) * amplitude;
        transform.localPosition += Vector3.up * offset * Time.deltaTime;
    }
}
