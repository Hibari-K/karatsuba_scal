#include<stdio.h>
#include<stdlib.h>
#include<sys/time.h>

#include "zmm_mul.h"

//#define DEBUG
#define COUNT
#define LOOP 50

//void mul_karatsuba(int*, int*, int, int*);
void multiply(zmm_t data_a, zmm_t data_b, zmm_t t);
void display(unsigned int *a, unsigned int *b, int lp, unsigned int *z);

int cnt_mul;

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
	SIZ(t) = lp*2;

	for(i=0; i<lp; i++){
		
		PTR(a)[i] = 0xffffffff;
		PTR(b)[i] = 0xffffffff;
		//PTR(a)[i] = rand();
		//PTR(b)[i] = rand();
	}

	struct timeval s, e;
	double time;
	double total = 0.0;

	for(i=0; i<LOOP; i++){
		
		gettimeofday(&s, NULL);
		multiply(a, b, t);	
		gettimeofday(&e, NULL);

		total += (e.tv_sec - s.tv_sec) + (e.tv_usec - s.tv_usec)*1.0E-6;
	}

#ifdef DEBUG
	display(PTR(a), PTR(b), lp, PTR(t));	
#endif

	time = (total / LOOP) * 1000 * 1000;

	printf("loop = %d\n", i);
	printf("time = %lf [usec]\n", time);
	printf("cnt_mul = %d\n", cnt_mul);


	free(PTR(a));
	free(PTR(b));
	free(PTR(t));

	return 0;
}
