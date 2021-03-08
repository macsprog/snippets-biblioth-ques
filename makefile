default : libcomplex.a static-prog1.exe static-prog2.exe \
	libcomplex.so prog1.exe prog2.exe full-static-prog1.exe \
	full-static-prog2.exe

sum.o : sum.c
	gcc -Wall -c sum.c

conjugate.o : conjugate.c
	gcc -Wall -c conjugate.c

modulus.o : modulus.c
	gcc -Wall -c modulus.c

print_complex.o : print_complex.c
	gcc -Wall -c print_complex.c

libcomplex.a : modulus.o conjugate.o sum.o print_complex.o
	ar -cr libcomplex.a modulus.o conjugate.o sum.o print_complex.o

libcomplex.so : modulus.o conjugate.o sum.o print_complex.o
	gcc -shared modulus.o conjugate.o sum.o print_complex.o -o libcomplex.so

prog1.o : prog1.c
	gcc -Wall -c prog1.c

prog2.o : prog2.c
	gcc -Wall -c prog2.c

static-prog1.exe : prog1.o libcomplex.a
	gcc -Wall prog1.o libcomplex.a -lm -o static-prog1.exe

static-prog2.exe : prog2.o libcomplex.a
	gcc -Wall prog2.o libcomplex.a -lm -o static-prog2.exe

prog1.exe : prog1.o libcomplex.so
	gcc -Wall prog1.o libcomplex.so -lm -o prog1.exe

prog2.exe : prog2.o libcomplex.so
	gcc -Wall prog2.o libcomplex.so -lm -o prog2.exe

full-static-prog1.exe : prog1.o libcomplex.a
	gcc -Wall -static prog1.o libcomplex.a -lm -o full-static-prog1.exe

full-static-prog2.exe : prog2.o libcomplex.a
	gcc -Wall -static prog2.o libcomplex.a -lm -o full-static-prog2.exe


clean : 
	rm -f *.o *.exe *.a *.so