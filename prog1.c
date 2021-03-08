#include <stdlib.h>
#include <stdio.h>
#include "complex_types.h"
#include "complex.h"

int main(void)
{
    Complex_t z = {.re = 0.5, .im = 1.2};

    printf("module = %g\n", modulus(z));
    printf("prog1.exe done.\n");
    return EXIT_SUCCESS;
}