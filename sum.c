#include "complex_types.h"
#include <math.h>


Complex_t sum(Complex_t z, Complex_t zz)
{
    Complex_t res = {.re = 0.0, .im = 0.0};
    res.im = z.im + zz.im;
    res.re = z.re + zz.re;
    return res;
}
