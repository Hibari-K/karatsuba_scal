#include<stdio.h>
#include<stdlib.h>

#include "zmm_mul.h"

void mul_karatsuba(unsigned int *a, unsigned int *b, int size, unsigned int *t);
void doCarry(unsigned int* a, int size);

void multiply(zmm_t a, zmm_t b, zmm_t t){
	
	int size;

	if(SIZ(a) >= SIZ(b)) size = SIZ(a);
	else size = SIZ(b);

	mul_karatsuba(PTR(a), PTR(b), size, PTR(t));

	doCarry(PTR(t), size*2);
}
