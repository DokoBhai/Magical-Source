// Automatically converted with https://github.com/TheLeerName/ShadertoyToFlixel

#pragma header

#define iResolution vec3(openfl_TextureSize, 0.)
uniform float iTime;
#define iChannel0 bitmap
#define texture flixel_texture2D

// end of ShadertoyToFlixel header

// I started working a bit on the colors of Remix 2, ended up with something like this. :)
// Remix 2 here: https://www.shadertoy.com/view/MtcGD7
// Remix 1 here: https://www.shadertoy.com/view/llc3DM
// Original here: https://www.shadertoy.com/view/XsXXRN

float rand(vec2 n) {
    return fract(sin(cos(dot(n, vec2(12.9898,12.1414)))) * 83758.5453);
}

float noise(vec2 n) {
    const vec2 d = vec2(0.0, 1.0);
    vec2 b = floor(n), f = smoothstep(vec2(0.0), vec2(1.0), fract(n));
    return mix(mix(rand(b), rand(b + d.yx), f.x), mix(rand(b + d.xy), rand(b + d.yy), f.x), f.y);
}

float fbm(vec2 n) {
    float total = 0.0, amplitude = 1.0;
    for (int i = 0; i <5; i++) {
        total += noise(n) * amplitude;
        n += n*1.7;
        amplitude *= 0.47;
    }
    return total;
}

void mainImage( out vec4 fragColor, in vec2 fragCoord ) {

    // Chemical green fire colors
    const vec3 c1 = vec3(0.0, 0.3, 0.0);    // dark green
    const vec3 c2 = vec3(0.1, 0.8, 0.1);    // bright green
    const vec3 c3 = vec3(0.2, 1.0, 0.4);    // neon green
    const vec3 c4 = vec3(0.7, 1.0, 0.5);    // yellow-green
    const vec3 c5 = vec3(0.0, 0.2, 0.0);    // deep green
    const vec3 c6 = vec3(0.2, 0.8, 0.2);    // mid green

    vec2 speed = vec2(0.1, 0.9);
    float shift = 1.327+sin(iTime*2.0)/2.4;
    float alpha = 1.0;
    
	float dist = 3.5-sin(iTime*0.4)/1.89;
    
    vec2 uv = fragCoord.xy / iResolution.xy;
    vec2 p = fragCoord.xy * dist / iResolution.xx;
    p += sin(p.yx*4.0+vec2(.2,-.3)*iTime)*0.04;
    p += sin(p.yx*8.0+vec2(.6,+.1)*iTime)*0.01;
    
    p.x -= iTime/1.1;
    float q = fbm(p - iTime * 0.3+1.0*sin(iTime+0.5)/2.0);
    float qb = fbm(p - iTime * 0.4+0.1*cos(iTime)/2.0);
    float q2 = fbm(p - iTime * 0.44 - 5.0*cos(iTime)/2.0) - 6.0;
    float q3 = fbm(p - iTime * 0.9 - 10.0*cos(iTime)/15.0)-4.0;
    float q4 = fbm(p - iTime * 1.4 - 20.0*sin(iTime)/14.0)+2.0;
    q = (q + qb - .4 * q2 -2.0*q3  + .6*q4)/3.8;
    vec2 r = vec2(fbm(p + q /2.0 + iTime * speed.x - p.x - p.y), fbm(p + q - iTime * speed.y));
    vec3 c = mix(c1, c2, fbm(p + r)) + mix(c3, c4, r.x) - mix(c5, c6, r.y);
    vec3 color = vec3(1.0/(pow(c+1.61,vec3(4.0))) * cos(shift * fragCoord.y / iResolution.y));
    
    // Main green fire color
    color=vec3(0.1, 1.0, 0.2)/(pow((r.y+r.y)* max(.0,p.y)+0.1, 4.0));
    color += (texture(iChannel0,uv*0.6+vec2(.5,.1)).xyz*0.01*pow((r.y+r.y)*.65,5.0)+0.055)*mix( vec3(0.5,1.0,0.3),vec3(0.2,0.8,0.2), uv.y);
    color = color/(1.0+max(vec3(0),color));
    fragColor = vec4(color.x,  color.y,  color.z, texture(iChannel0, fragCoord / iResolution.xy).a);
}

void main() {
	mainImage(gl_FragColor, openfl_TextureCoordv*openfl_TextureSize);
}