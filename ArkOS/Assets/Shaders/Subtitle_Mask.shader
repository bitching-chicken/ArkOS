Shader "Custom/Subtitle_Mask" {
    Properties{
        _MainTex("Texture", 2D) = "white" {}
        _TextColor("Text Color", Color) = (1,0.9,0.5,1)    // 文字目标颜色（默认白）
        _GoldThreshold("Gold Threshold", Range(0,1)) = 0.7  // 金色识别阈值
        _GrayCutoff("Background Cutoff", Range(0,1)) = 0.4  // 背景灰阶阈值
        _WatermarkCutoff("Watermark Cutoff", Range(0.9,1)) = 0.98 // 水印去除阈值
    }
        SubShader{
            Tags {
                "Queue" = "Transparent"
                "RenderType" = "Transparent"
            }
            Blend SrcAlpha OneMinusSrcAlpha
            LOD 100

            Pass {
                CGPROGRAM
                #pragma vertex vert
                #pragma fragment frag
                #include "UnityCG.cginc"

                struct appdata {
                    float4 vertex : POSITION;
                    float2 uv : TEXCOORD0;
                };

                struct v2f {
                    float2 uv : TEXCOORD0;
                    float4 vertex : SV_POSITION;
                };

                sampler2D _MainTex;
                float4 _MainTex_ST;
                fixed4 _TextColor;
                float _GoldThreshold;
                float _GrayCutoff;
                float _WatermarkCutoff;

                v2f vert(appdata v) {
                    v2f o;
                    o.vertex = UnityObjectToClipPos(v.vertex);
                    o.uv = TRANSFORM_TEX(v.uv, _MainTex);
                    return o;
                }

                // 判断是否是金色像素
                bool IsGold(fixed3 col) {
                    float goldness = col.r * 0.6 + col.g * 0.3 - col.b * 0.1;
                    return goldness > _GoldThreshold;
                }

                fixed4 frag(v2f i) : SV_Target {
                    fixed4 col = tex2D(_MainTex, i.uv);

                // 去除水印（白色区域）
                if (col.r > _WatermarkCutoff &&
                    col.g > _WatermarkCutoff &&
                    col.b > _WatermarkCutoff) {
                    return fixed4(0,0,0,0);
                }

                // 背景透明化（淡灰色区域）
                float gray = Luminance(col.rgb);
                if (gray > _GrayCutoff) {
                    return fixed4(0,0,0,0);
                }

                // 金色线条保留
                if (IsGold(col.rgb)) {
                    return col; // 保持原金色
                }

                // 黑色文字替换为目标色
                if (gray < 0.2) {
                    return fixed4(_TextColor.rgb, col.a);
                }

                // 其他情况透明
                return fixed4(0,0,0,0);
            }
            ENDCG
        }
        }
}