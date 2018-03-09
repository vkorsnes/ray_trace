#ifndef _SPHERE_H
#define _SPHERE_H

#include "hittable.h"

class sphere: public hittable {
 public:
  sphere() {};
  sphere(vec3 cen, float r) : center(cen), radius(r) {};
  virtual bool hit(const ray& r, float tmin, float tmax, hit_record& rec) const;

  vec3 center;
  float radius;
};

#endif // !_SPHERE_H
