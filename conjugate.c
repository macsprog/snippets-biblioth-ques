#include "complex_types.h"
#include <math.h>

Complex_t conjugate(Complex_t z)
{
    Complex_t res = {.re = 0.0, .im = 0.0};
    res.im = -z.im;
    res.re = z.re;
    return res;
}
