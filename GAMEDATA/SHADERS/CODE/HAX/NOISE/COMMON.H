//
// Common Noise Functions
//

#ifndef HAXNOISE_COMMON_H
#define HAXNOISE_COMMON_H

vec3 mod289(vec3 x) { return x - floor(x * (1.0 / 289.0)) * 289.0; } // 3D
vec4 mod289(vec4 x) { return x - floor(x * (1.0 / 289.0)) * 289.0; } // 3D

vec4 permute289(vec4 x) { return mod289( ((x * 34.0) + 1.0) * x ); } // 3D

float permute(float x) { return floor( mod( ((x * 34.0) + 1.0) * x, 289.0 ) ); } // 4D
vec4  permute(vec4 x)  { return        mod( ((x * 34.0) + 1.0) * x, 289.0 )  ; } // 4D

float taylorInvSqrt(float r) { return 1.79284291400159 - 0.85373472095314 * r; } // 4D
vec4  taylorInvSqrt(vec4 r)  { return 1.79284291400159 - 0.85373472095314 * r; } // 3D/4D

#endif