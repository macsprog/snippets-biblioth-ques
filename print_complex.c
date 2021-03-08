#include <stdio.h>
#include "complex_types.h"

void print_complex(Complex_t z)
{
    printf("re = %g im=%g\n", z.re, z.im);
}
