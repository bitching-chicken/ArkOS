Shader "Custom/Remove_Black" {
    Properties{
        _MainTex("Texture", 2D) = "white" {}
        _GoldThreshold("Gold Sensitivity", Range(0,1)) = 0.6    // 淡金色识别阈值
        _WhiteThreshold("White Threshold", Range(0.9,1)) = 0.95 // 白色识别阈值
        _EdgeSoftness("Edge Softness", Range(0,0.5)) = 0.1      // 边缘柔化
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
                float _GoldThreshold;
                float _WhiteThreshold;
                float _EdgeSoftness;

                v2f vert(appdata v) {
                    v2f o;
                    o.vertex = UnityObjectToClipPos(v.vertex);
                    o.uv = TRANSFORM_TEX(v.uv, _MainTex);
                    return o;
                }

                // 优化版淡金色检测（R主导+G辅助-B抑制）
                bool IsGold(fixed3 col) {
                    float goldScore = col.r * 1.1 + col.g * 0.5 - col.b * 0.3;
                    return goldScore > _GoldThreshold;
                }

                // 白色检测（考虑亮度与色偏）
                bool IsWhite(fixed3 col) {
                    float luminance = Luminance(col.rgb);
                    float colorVariance = abs(col.r - col.g) + abs(col.g - col.b);
                    return luminance > _WhiteThreshold && colorVariance < 0.1;
                }

                fixed4 frag(v2f i) : SV_Target {
                    fixed4 col = tex2D(_MainTex, i.uv);

                // 保留白色线条
                if (IsWhite(col.rgb)) {
                    return fixed4(1,1,1, col.a*0.5);
                }

                // 保留淡金色线条
                if (IsGold(col.rgb)) {
                    return fixed4(col.rgb, col.a);
                }

                // 黑色背景透明化（带边缘柔化）
                float alpha = 1 - smoothstep(0, _EdgeSoftness, Luminance(col.rgb));
                return fixed4(0,0,0, alpha * 0); // 完全透明
            }
            ENDCG
        }
        }
}