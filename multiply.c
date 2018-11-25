#include<stdio.h>
#include<stdlib.h>
#include<sys/time.h>
#include "zmm_mul.h"

void mul_karatsuba(unsigned int *a, unsigned int *b, int size, unsigned long *t);
//void doCarry(unsigned int* a, int size);
void doCarry_long(unsigned long *a, int size, unsigned int *z);
void display(unsigned int *a, unsigned  int *b, int D_MAX, unsigned int *z);
void split_28bit(unsigned int* data, unsigned int* result, int digits);
void combine_28bit(unsigned int* data, unsigned int* result, int digits);

unsigned long *mid;

void multiply(zmm_t a, zmm_t b, zmm_t t){


	// 16の倍数であればセーフ
	int size;
	
	unsigned int *data_a = malloc(SIZ(a)*2 * sizeof(long));
	unsigned int *data_b = malloc(SIZ(b)*2 * sizeof(long));
	unsigned int *data_t = malloc(SIZ(t)*2 * sizeof(long));
	mid = calloc(SIZ(a)*6, sizeof(long));	

	int a_bitsize, b_bitsize, t_bitsize;
	a_bitsize = SIZ(a) * 32;
	b_bitsize = SIZ(b) * 32;
	
	if(a_bitsize >= b_bitsize) size = a_bitsize;
	else size = b_bitsize;

	t_bitsize = SIZ(t) * 32;

	int kara_size = ((int)(SIZ(a) * 1.1428) & 0xfffffff0) + 16;

	int a_split, b_split, t_comb;
	a_split = a_bitsize / 56;
	b_split = b_bitsize / 56;
	t_comb = 2 * (t_bitsize / 56) + 2;

	split_28bit(PTR(a), data_a, a_split);
	split_28bit(PTR(b), data_b, b_split);

	mul_karatsuba(data_a, data_b, kara_size, mid);

	doCarry_long(mid, kara_size*2, data_t);

	combine_28bit(data_t, PTR(t), t_comb);

	free(data_a);
	free(data_b);
	free(data_t);
	free(mid);
}
