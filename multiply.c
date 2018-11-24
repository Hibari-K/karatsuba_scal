#include<stdio.h>
#include<stdlib.h>

#include "zmm_mul.h"

void mul_karatsuba(unsigned int *a, unsigned int *b, int size, unsigned long *t);
//void doCarry(unsigned int* a, int size);
void doCarry_long(unsigned long *a, int size, unsigned int *z);

extern unsigned long mid[1024];

void multiply(zmm_t a, zmm_t b, zmm_t t){
	
	int size;

	if(SIZ(a) >= SIZ(b)) size = SIZ(a);
	else size = SIZ(b);

	mul_karatsuba(PTR(a), PTR(b), size, mid);

	doCarry_long(mid, size*2, PTR(t));
}
