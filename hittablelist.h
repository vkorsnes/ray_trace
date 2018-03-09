#ifndef _HITTABLELIST_H
#define _HITTABLELIST_H

#include "hittable.h"

class hittable_list : public hittable {
public:
	hittable_list() {};
	hittable_list(hittable **l, int n) { list = l; list_size = n; };
	virtual bool hit(const ray& r, float tmin, float tmax, hit_record& rec) const;

	hittable ** list;
	int list_size;
};

#endif // !_HITTABLELIST_H
