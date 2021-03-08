#ifndef _COMPLEX_ROUTINES_H_
#define _COMPLEX_ROUTINES_H_

#include "complex_types.h"

double modulus(Complex_t z);
Complex_t sum(Complex_t z, Complex_t zz);
Complex_t conjugate(Complex_t z);
void print_complex(Complex_t z);

#endif