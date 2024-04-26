#include <stdint.h>
#include "threads/fixed-point.h"

#define q 14
#define f (1 << q)

typedef int fixed_point;

fixed_point int_to_fixed(int x){
    return (int)x * f;
}

int fixed_to_int_to_0(fixed_point x){
    return x / f;
}

int fixed_to_int_nearest(fixed_point x){
    if (x >= 0)
        return (x + (f/2)) / f;
        
    return (x - (f/2)) / f;
}

fixed_point fixed_add(fixed_point x, fixed_point y){
    return x + y;
}

fixed_point fixed_subtract(fixed_point x, fixed_point y){
    return x - y;
}

fixed_point fixed_int_add(fixed_point x, int n){
    return x + (n * f);
}

fixed_point fixed_int_sub(int n, fixed_point x){
    return x - (n * f);
}

fixed_point fixed_mul(fixed_point x, fixed_point y){
    return (int)(((int64_t) x) * y / f);
}

fixed_point fixed_int_mul(fixed_point x, int n){
    return x * n;  
}

fixed_point fixed_divide(fixed_point x, fixed_point y){
    return (int)(((int64_t)x) * f / y);
}

fixed_point fixed_int_div(fixed_point x, int n){
    return x / n;
}