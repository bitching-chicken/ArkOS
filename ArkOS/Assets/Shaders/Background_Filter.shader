Shader "Custom/BackgroundFilter" {
    Properties{
        _MainTex("Texture", 2D) = "black" {}  // 默认黑色背景
        _BlurRadius("Blur Radius", Range(0, 0.02)) = 0.006
        _Contrast("Contrast", Range(-0.3, 0.1)) = -0.08  // 更窄的对比度范围
        _GoldThreshold("Gold Threshold", Range(0,1)) = 0.7  // 金色识别阈值
        _GoldBoost("Gold Boost", Range(0,2)) = 1.2  // 金色增强
    }
    SubShader{
        Tags { "RenderType" = "Opaque" }
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
            float _BlurRadius;
            float _Contrast;
            float _GoldThreshold;
            float _GoldBoost;

            v2f vert(appdata v) {
                v2f o;
                o.vertex = UnityObjectToClipPos(v.vertex);
                o.uv = v.uv;
                return o;
            }

            // 判断是否是金色像素（RGB值加权计算）
            bool IsGold(fixed3 col) {
                float goldScore = col.r * 0.5 + col.g * 0.4 + col.b * 0.1;
                return goldScore > _GoldThreshold;
            }

            fixed4 frag(v2f i) : SV_Target {
                // 原始颜色采样
                fixed4 original = tex2D(_MainTex, i.uv);

                // 仅对非金色区域模糊（保护金色装饰）
                fixed4 blurred = original;
                if (!IsGold(original.rgb)) {
                    blurred = tex2D(_MainTex, i.uv) * 0.5;
                    blurred += tex2D(_MainTex, i.uv + float2(_BlurRadius, 0)) * 0.125;
                    blurred += tex2D(_MainTex, i.uv - float2(_BlurRadius, 0)) * 0.125;
                    blurred += tex2D(_MainTex, i.uv + float2(0, _BlurRadius)) * 0.125;
                    blurred += tex2D(_MainTex, i.uv - float2(0, _BlurRadius)) * 0.125;
                }

                // 智能对比度调整（黑色背景弱化，金色增强）
                fixed3 result = blurred.rgb;
                if (IsGold(original.rgb)) {
                    result = original.rgb * _GoldBoost;  // 金色提亮
                }
                else {
                    result = (result - 0.5) * (1.0 - _Contrast) + 0.5;  // 背景对比度调整
                    result = lerp(result, original.rgb, 0.3);  // 混合30%原始颜色保留细节
                }

                return fixed4(result, original.a);
            }
            ENDCG
        }
    }
}