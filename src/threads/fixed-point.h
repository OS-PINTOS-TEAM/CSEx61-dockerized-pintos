#ifndef THREADS_FIXED_POINT_H
#define THREADS_FIXED_POINT_H

#define p 18
#define q 14
#define f 1 << (q)

/* Fixed-point real arithmetic */
/* Here x and y are fixed-point number, n is an integer */
#define INTO_FIXED(n) (n) * (f)
#define INTO_INT_ZERO(x) (x) / (f)
#define INTO_INT_NEAREST(x) ((x) >= 0 ? ((x) + (f) / 2)\
                                   / (f) : ((x) - (f) / 2)\
                                   / (f))
#define ADD(x, y) (x) + (y)
#define SUB(x, y) (x) - (y)
#define ADD_INT(x, n) (x) + (n) * (f)
#define SUB_INT(x, n) (x) - (n) * (f)
#define MUL(x, y) ((int64_t)(x)) * (y) / (f)
#define MUL_INT(x, n) (x) * (n)
#define DIV(x, y) ((int64_t)(x)) * (f) / (y)
#define DIV_INT(x, n) (x) / (n)

#endif