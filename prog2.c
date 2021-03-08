#include <stdlib.h>
#include <stdio.h>
#include "complex_types.h"
#include "complex.h"

int main(void)
{
    Complex_t z = {.re = 0.5, .im = 1.2};
    Complex_t zz = {.re = 0.5, .im = 1.2};

    Complex_t zzz = sum(z, zz);
    print_complex(zzz);

    printf("prog2.exe done.\n");
    return EXIT_SUCCESS;
}