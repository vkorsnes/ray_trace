#ifndef _VEC_H
#define _VEC_H

#include <math.h>
#include <stdlib.h>
#include <iostream>

class vec3 {
 public:
  float e[3];
  
  vec3() {}
  vec3(float e0, float e1, float e2) { e[0] = e0; e[1] = e1; e[2] = e2; }

  inline float x() const { return e[0]; }
  inline float y() const { return e[1]; }
  inline float z() const { return e[2]; }
  inline float r() const { return e[0]; }
  inline float g() const { return e[1]; }
  inline float b() const { return e[2]; }

  inline const vec3& operator+() const { return *this; }
  inline vec3 operator-() const { return vec3(-e[0], -e[1], -e[2]); }
  inline float operator[](int i) const { return e[i]; }
  inline float& operator[](int i) { return e[i]; }

  inline vec3& operator+=(const vec3 &v2);
  inline vec3& operator-=(const vec3 &v2);
  inline vec3& operator*=(const vec3 &v2);
  inline vec3& operator/=(const vec3 &v2);
  inline vec3& operator*=(const float t);
  inline vec3& operator/=(const float t);

  inline float length() const { return sqrt(e[0]*e[0] + e[1]*e[1] + e[2]*e[2]); }
  inline float squared_length() const { return e[0]*e[0] + e[1]*e[1] + e[2]*e[2]; }
  inline void make_unit_vector();
};

inline vec3 operator+(const vec3 &v1, const vec3 &v2) {
  return vec3(v1.e[0] + v2.e[0], v1.e[1] + v2.e[1], v1.e[2] + v2.e[2]);
}

inline vec3 operator-(const vec3 &v1, const vec3 &v2) {
  return vec3(v1.e[0] - v2.e[0], v1.e[1] - v2.e[1], v1.e[2] - v2.e[2]);
}

inline vec3 operator*(const vec3 &v1, const vec3 &v2) {
  return vec3(v1.e[0] * v2.e[0], v1.e[1] * v2.e[1], v1.e[2] * v2.e[2]);
}

inline vec3 operator*(const vec3 &v1, const float f) {
  return vec3(v1.e[0]*f, v1.e[1]*f, v1.e[2]*f);
}

inline vec3 operator*(const float f, const vec3 &v1) {
  return vec3(v1.e[0]*f, v1.e[1]*f, v1.e[2]*f);
}

inline vec3 operator/(const vec3 &v1, const vec3 &v2) {
  return vec3(v1.e[0] / v2.e[0], v1.e[1] / v2.e[1], v1.e[2] / v2.e[2]);
}

inline vec3 operator/(const vec3 &v1, const float f) {
  return vec3(v1.e[0]/f, v1.e[1]/f, v1.e[2]/f);
}

inline vec3 operator/(const float f, const vec3 &v1) {
  return vec3(v1.e[0]/f, v1.e[1]/f, v1.e[2]/f);
}

inline float dot(const vec3 &v1, const vec3 &v2) {
  return v1.e[0] * v2.e[0] + v1.e[1] * v2[1] + v1.e[2] * v1.e[2];
}

inline vec3 cross(const vec3 &v1, const vec3 &v2) {
  return vec3(   (v1.e[1]*v2.e[2] - v1.e[2]*v2.e[1]),
	       (-(v1.e[0]*v2.e[2] - v1.e[2]*v2.e[0])),
	         (v1.e[0]*v2.e[1] - v1.e[1]*v2.e[0]));
}

inline vec3 unit_vector(vec3 v) {
  return v / v.length();
}

#endif // !_VEC_H
