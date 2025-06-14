#pragma header

#define SPLAT_MULT 4.0

uniform float uTime;

// --- Helper Functions (stubs, replace with your actual implementations) ---
float hash12(vec2 p) {
    return fract(sin(dot(p, vec2(12.9898, 78.233))) * 43758.5453);
}
vec3 hash32(vec2 p) {
    return vec3(hash12(p), hash12(p + 1.0), hash12(p + 2.0));
}
vec4 hash43(vec3 p) {
    return vec4(hash12(p.xy), hash12(p.yz), hash12(p.zx), hash12(p.xy + p.yz));
}
float sdStar(vec2 p, float r, float n, float m) {
    // Simple star SDF stub
    p = abs(p);
    float a = atan(p.y, p.x) * n;
    float d = cos(a) * m + r;
    return length(p) - d;
}
vec3 hsl2rgb(float h, float s, float l) {
    float c = (1.0 - abs(2.0 * l - 1.0)) * s;
    float x = c * (1.0 - abs(mod(h * 6.0, 2.0) - 1.0));
    float m = l - c / 2.0;
    vec3 rgb;
    if (h < 1.0/6.0) rgb = vec3(c, x, 0.0);
    else if (h < 2.0/6.0) rgb = vec3(x, c, 0.0);
    else if (h < 3.0/6.0) rgb = vec3(0.0, c, x);
    else if (h < 4.0/6.0) rgb = vec3(0.0, x, c);
    else if (h < 5.0/6.0) rgb = vec3(x, 0.0, c);
    else rgb = vec3(c, 0.0, x);
    return rgb + m;
}

vec2 rotateUV(in vec2 uv, in float rot) {
    vec3 t = vec3(sin(rot), cos(rot), 0.0);
    t.z = -t.x;
    uv = t.yy * uv.xy + t.xz * uv.yx;
    return uv;
}

vec3 sparkle(in vec2 p, in vec2 cell, in float phase) {
    vec2 uv = p - 1.0;
    vec4 rand = hash43(vec3(cell, floor((phase + 1.0) / 2.0)));
    float rot = rand.w + sign(rand.w - 0.5) * phase * 1.3;
    vec2 offset = rand.yz * 0.7;
    uv = rotateUV(uv + offset, rot);
    float size = rand.x;
    float sizeMod = 0.5 * cos(phase * 3.14159265358979) + 0.5;
    size *= sizeMod;
    float d = sdStar(uv, 0.4 * size, 4.0, 0.6 - sizeMod * 0.3);
    float star = smoothstep(-0.01, -0.02, d);
    float glow = smoothstep(-0.1 + sizeMod * 0.2, -0.1, d) * 0.15;
    vec3 col_a = hsl2rgb(fract(phase * 1.4), 1.0, 0.6);
    vec3 col_b = vec3(1.0, 1.0, 1.0);
    vec3 col = mix(col_a, col_b, sizeMod);
    return col * vec3(star + glow);
}

vec3 sparkleLayer(in vec2 uv, in vec2 vel, in float phase) {
    uv = uv + vel * uTime;
    vec2 splatuv = fract(uv * SPLAT_MULT / 2.0);
    vec2 cell = floor(uv * SPLAT_MULT / 2.0);
    vec3 cellRand = hash32(cell);
    float speed = 2.0;
    vec3 col = sparkle(splatuv, cell, speed * uTime + hash12(cell) * 4.0 + phase);
    col += sparkle(splatuv - vec2( 1, 0), cell + vec2( 1, 0), speed * uTime + hash12(cell + vec2( 1, 0)) * 4.0 + phase);
    col += sparkle(splatuv - vec2(-1, 0), cell + vec2(-1, 0), speed * uTime + hash12(cell + vec2(-1, 0)) * 4.0 + phase);
    col += sparkle(splatuv - vec2( 0, 1), cell + vec2( 0, 1), speed * uTime + hash12(cell + vec2( 0, 1)) * 4.0 + phase);
    col += sparkle(splatuv - vec2( 0,-1), cell + vec2( 0,-1), speed * uTime + hash12(cell + vec2( 0,-1)) * 4.0 + phase);
    col += sparkle(splatuv - vec2( 1, 1), cell + vec2( 1, 1), speed * uTime + hash12(cell + vec2( 1, 1)) * 4.0 + phase);
    col += sparkle(splatuv - vec2(-1, 1), cell + vec2(-1, 1), speed * uTime + hash12(cell + vec2(-1, 1)) * 4.0 + phase);
    col += sparkle(splatuv - vec2(-1,-1), cell + vec2(-1,-1), speed * uTime + hash12(cell + vec2(-1,-1)) * 4.0 + phase);
    col += sparkle(splatuv - vec2( 1,-1), cell + vec2( 1,-1), speed * uTime + hash12(cell + vec2( 1,-1)) * 4.0 + phase);
    return col;
}

void main() {
    // Use openfl_TextureCoordv for UVs, scale to -1..1
    vec2 fragCoord = openfl_TextureCoordv * openfl_TextureSize;
    vec2 uv = (fragCoord - openfl_TextureSize * 0.5) / openfl_TextureSize.yy * 2.0;
    vec3 col = sparkleLayer(uv, vec2(0.2, 0.1), 0.0);
    col += sparkleLayer(uv, vec2(-0.01, -0.13), 1.0);
    col += sparkleLayer(uv, vec2(-0.06, 0.2), 2.0);
    gl_FragColor = vec4(col, 1.0);
}
