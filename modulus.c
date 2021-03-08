#include "complex_types.h"
#include <math.h>

double modulus(Complex_t z)
{
    return sqrt(z.im * z.im + z.re * z.re);
}
