Shader "Custom/MetallicTitle_Enhanced" {
    Properties{
        [Header(Base Settings)]
        _MainTex("Texture", 2D) = "white" {}
        _InvertThreshold("Invert Threshold", Range(0,1)) = 0.1

        [Header(Metal Effects)]
        [HDR]_MetalColor("Metal Color", Color) = (1,0.8,0.3,1)
        _EdgeThickness("Edge Thickness", Range(0,0.1)) = 0.03
        _SpecularPower("Specular Power", Range(1,50)) = 25
        [HDR]_EmissionColor("Emission Color", Color) = (1,0.9,0.5,1)

        [Header(Contrast Solutions)]
        _BackGlowRadius("Back Glow Radius", Range(0,0.3)) = 0.15
        [HDR]_BackGlowColor("Back Glow Color", Color) = (1,0.7,0.2,1)
        _OutlineWidth("Outline Width", Range(0,0.05)) = 0.02
        _OutlineColor("Outline Color", Color) = (1,1,1,1)
    }

        SubShader{
            Tags {
                "Queue" = "Transparent"
                "RenderType" = "Transparent"
            }
            Blend SrcAlpha OneMinusSrcAlpha
            ZWrite Off

            Pass {
                CGPROGRAM
                #pragma vertex vert
                #pragma fragment frag
                #include "UnityCG.cginc"
                #include "Lighting.cginc"

                struct appdata {
                    float4 vertex : POSITION;
                    float2 uv : TEXCOORD0;
                };

                struct v2f {
                    float2 uv : TEXCOORD0;
                    float4 vertex : SV_POSITION;
                    float4 worldPos : TEXCOORD1;
                };

                sampler2D _MainTex;
                float4 _MainTex_ST;
                float _InvertThreshold;
                float4 _MetalColor;
                float _EdgeThickness;
                float _SpecularPower;
                float4 _EmissionColor;
                float _BackGlowRadius;
                float4 _BackGlowColor;
                float _OutlineWidth;
                float4 _OutlineColor;
                float4 _MainTex_TexelSize;

                v2f vert(appdata v) {
                    v2f o;
                    o.vertex = UnityObjectToClipPos(v.vertex);
                    o.uv = TRANSFORM_TEX(v.uv, _MainTex);
                    o.worldPos = mul(unity_ObjectToWorld, v.vertex);
                    return o;
                }

                // 边缘检测改进版（高斯模糊采样）
                float GetEdge(float2 uv, float width) {
                    float4 d = _MainTex_TexelSize.xyxy * float4(-1,-1,1,1) * width;

                    float edge = 0;
                    edge += tex2D(_MainTex, uv + d.xy).a;
                    edge += tex2D(_MainTex, uv + d.zy).a;
                    edge += tex2D(_MainTex, uv + d.xw).a;
                    edge += tex2D(_MainTex, uv + d.zw).a;
                    edge = saturate(edge - 4 * tex2D(_MainTex, uv).a);
                    return edge;
                }

                fixed4 frag(v2f i) : SV_Target {
                    // 基础采样
                    fixed4 col = tex2D(_MainTex, i.uv);
                    float alpha = col.a;

                    //=== 核心改进1：强制文字主体发亮 ===//
                    fixed3 baseColor = col.rgb;
                    if (length(baseColor) < _InvertThreshold && alpha > 0) {
                        // 反色后叠加金色亮度
                        baseColor = lerp(1 - baseColor, _MetalColor.rgb, 0.7);
                    }

                    //=== 核心改进2：三层边缘增强 ===//
                    // 1. 白色描边（最内层）
                    float outline = GetEdge(i.uv, _OutlineWidth) * 2;
                    fixed3 outlineColor = outline * _OutlineColor.rgb;

                    // 2. 金属边（中层）
                    float metalEdge = GetEdge(i.uv, _EdgeThickness);
                    float3 lightDir = normalize(float3(1,1,-0.5)); // 固定光源方向
                    float specular = pow(metalEdge, _SpecularPower) * 3;
                    fixed3 metalColor = metalEdge * _MetalColor.rgb + specular;

                    // 3. 背景辉光（最外层）
                    float backGlow = smoothstep(0, _BackGlowRadius, GetEdge(i.uv, _BackGlowRadius));
                    fixed3 glowColor = backGlow * _BackGlowColor.rgb;

                    //=== 核心改进3：动态自发光 ===//
                    float pulse = 0.5 + 0.5 * sin(_Time.y * 3);
                    fixed3 emission = _EmissionColor.rgb * pulse * alpha;

                    //=== 最终合成 ===//
                    fixed3 finalColor = baseColor;
                    finalColor = max(finalColor, outlineColor); // 描边叠加
                    finalColor = lerp(finalColor, metalColor, metalEdge); // 金属边
                    finalColor += glowColor * 2; // 背景辉光
                    finalColor += emission; // 自发光

                    return fixed4(finalColor, alpha);
                }
                ENDCG
            }
        }
            FallBack "Transparent/Diffuse"
}