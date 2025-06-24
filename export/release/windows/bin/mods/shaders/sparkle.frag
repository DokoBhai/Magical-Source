#pragma header

uniform float iTime;
uniform float uFade;

vec2 uv = openfl_TextureCoordv.xy;
vec2 fragCoord = uv * openfl_TextureSize;
vec2 iResolution = openfl_TextureSize;

#ifdef GL_ES
precision mediump float;
#endif

float random(vec2 par){
   return fract(sin(dot(par.xy, vec2(12.9898, 78.233))) * 43758.5453);
}

vec2 random2(vec2 par){
    float rand = random(par);
    return vec2(rand, random(par + rand));
}

void main()
{
    float widthHeightRatio = iResolution.x / iResolution.y;
    
    float t = iTime * 0.01;
    float dist = 0.0;
    float layers = 16.0;
    float scale = 32.0;
    float depth;
    float phase;
    float rotationAngle = iTime * -0.01;
    
    vec2 local_uv;
    vec2 index;
    vec2 pos;
    vec2 seed;
    vec2 centre = vec2(0.5, 0.5);
    
    mat2 rotation = mat2(cos(rotationAngle), -sin(rotationAngle), 
                         sin(rotationAngle),  cos(rotationAngle));
    
    vec2 uv_centered = uv;
    for(float i = 0.0; i < layers; i++){
        depth = fract(i/layers + t);
        
        centre.x = 0.5 + 0.1 * cos(t) * depth;
        centre.y = 0.5 + 0.1 * sin(t) * depth;
        
        uv_centered = centre - uv;
        uv_centered.y /= widthHeightRatio;
        uv_centered *= rotation;
        uv_centered *= mix(scale, 0.0, depth);
        
        index = floor(uv_centered);
        seed = 20.0 * i + index;
        local_uv = fract(i + uv_centered) - 0.5;
        pos = 0.8 * (random2(seed) - 0.5);
        phase = 128.0 * random(seed);
        
        dist += pow(abs(1.0 - length(local_uv - pos)), 50.0 + 20.0 * sin(phase + 8.0 * iTime)) 
              * min(1.0, depth * 2.0);
    }
    
    float glow = dist * uFade;
    float alpha = smoothstep(0.05, 0.3, glow);
    gl_FragColor = vec4(vec3(glow), alpha);
}
