#include "hittablelist.h"


bool hittable_list::hit(const ray& r, float tmin, float tmax, hit_record& rec) const {
	hit_record tmp_rec;
	bool hit_anything = false;
	double closest_so_far = tmax;
	for (int i = 0; i < list_size; ++i) {
		if (list[i]->hit(r, tmin, closest_so_far, tmp_rec)) {
			hit_anything = true;
			closest_so_far = tmp_rec.t;
			rec = tmp_rec;
		}
	}
	return hit_anything;
}