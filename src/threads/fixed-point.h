#include <stdint.h>

typedef int fixed_point;

fixed_point int_to_fixed(int x);

int fixed_to_int_to_0(fixed_point x);

int fixed_to_int_nearest(fixed_point x);

fixed_point fixed_add(fixed_point x, fixed_point y);

fixed_point fixed_subtract(fixed_point x, fixed_point y);

fixed_point fixed_int_add(fixed_point x, int n); 

fixed_point fixed_int_sub(int n, fixed_point x);

fixed_point fixed_mul(fixed_point x, fixed_point y);

fixed_point fixed_int_mul(fixed_point x, int n);

fixed_point fixed_divide(fixed_point x, fixed_point y); 

fixed_point fixed_int_div(fixed_point x, int n);