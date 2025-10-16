#ifndef HITTABLE_H
#define HITTABLE_H

/* * Hittable objects are objects that can be hit by rays. 
   * They have a method to check if a ray hits them and return the hit record.
   * The hit record contains information about the hit point, normal, and other properties.
*/

#include "ray.h"

class hit_record{
public: 
  point3 p;
  vec3 normal;
  double t;
  bool front_face; // to check if the ray is hitting the front or back of the object

  void set_face_normal(const ray& r, const vec3& outward_normal){ /* ensures normals face against the ray */
    front_face = dot(r.direction(), outward_normal) < 0; /* if dot product < 0, means hitting at face else back */
    normal = front_face ? outward_normal : -outward_normal;
  }
};

class hittable{
public: 
    virtual ~hittable() = default;
    virtual bool hit(const ray& r, double ray_tmin, double ray_tmax, hit_record& rec) const = 0; 
};

#endif
