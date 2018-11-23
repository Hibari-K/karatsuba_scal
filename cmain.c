#include<stdio.h>
#include<stdlib.h>
#include<sys/time.h>

#include "zmm_mul.h"

//void mul_karatsuba(int*, int*, int, int*);
void multiply(zmm_t data_a, zmm_t data_b, zmm_t t);
void display(unsigned int *a, unsigned int *b, int lp, unsigned int *z);

int main(int argc, char** argv){

	if(argc != 2){
		printf("Usage: %s num\n", argv[0]);
		exit(1);
	}

	zmm_t a, b, t;
	int lp = atoi(argv[1]);

	PTR(a) = malloc(64 * lp);
	PTR(b) = malloc(64 * lp);
	PTR(t) = calloc(4*lp, sizeof(long));

/*
	int *a = malloc(8192);
	int *b = malloc(8192);
	int *t = malloc(8192 * 2);
*/
	if(!(PTR(a) && PTR(b) && PTR(t))){
		puts("malloc error");
		exit(1);
	}

	int i;

	SIZ(a) = SIZ(b) = lp;
	SIZ(t) = 0;

	for(i=0; i<lp; i++){
		
		//PTR(a)[i] = 0xffff;
		//PTR(b)[i] = 0xffff;
		PTR(a)[i] = rand() & 0xffff;
		PTR(b)[i] = rand() & 0xffff;
	}

	multiply(a, b, t);	
/*
	for(i=lp*2; i>=0; i--){
		printf("%08x", PTR(t)[i]);
	}
	puts("");
*/
	display(PTR(a), PTR(b), lp, PTR(t));	

	return 0;
}
