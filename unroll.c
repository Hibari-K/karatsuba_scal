#include<stdio.h>
//#define DEBUG

void unroll_mul9(unsigned int *a, unsigned int *b, unsigned long *z){

#ifdef DEBUG
	puts("Debug : called unroll_mul9");
#endif

	z[0] = 0;
	z[1] = 0;
	z[2] = 0;
	z[3] = 0;
	z[4] = 0;
	z[5] = 0;
	z[6] = 0;
	z[7] = 0;
	z[8] = 0;
	z[9] = 0;
	z[10] = 0;
	z[11] = 0;
	z[12] = 0;
	z[13] = 0;
	z[14] = 0;
	z[15] = 0;
	z[16] = 0;
	z[17] = 0;

	
	z[0+0] += (unsigned long)a[0] * b[0];
	z[0+1] += (unsigned long)a[0] * b[1];
	z[0+2] += (unsigned long)a[0] * b[2];
	z[0+3] += (unsigned long)a[0] * b[3];
	z[0+4] += (unsigned long)a[0] * b[4];
	z[0+5] += (unsigned long)a[0] * b[5];
	z[0+6] += (unsigned long)a[0] * b[6];
	z[0+7] += (unsigned long)a[0] * b[7];
	z[0+8] += (unsigned long)a[0] * b[8];

	z[1+0] += (unsigned long)a[1] * b[0];
	z[1+1] += (unsigned long)a[1] * b[1];
	z[1+2] += (unsigned long)a[1] * b[2];
	z[1+3] += (unsigned long)a[1] * b[3];
	z[1+4] += (unsigned long)a[1] * b[4];
	z[1+5] += (unsigned long)a[1] * b[5];
	z[1+6] += (unsigned long)a[1] * b[6];
	z[1+7] += (unsigned long)a[1] * b[7];
	z[1+8] += (unsigned long)a[1] * b[8];

	z[2+0] += (unsigned long)a[2] * b[0];
	z[2+1] += (unsigned long)a[2] * b[1];
	z[2+2] += (unsigned long)a[2] * b[2];
	z[2+3] += (unsigned long)a[2] * b[3];
	z[2+4] += (unsigned long)a[2] * b[4];
	z[2+5] += (unsigned long)a[2] * b[5];
	z[2+6] += (unsigned long)a[2] * b[6];
	z[2+7] += (unsigned long)a[2] * b[7];
	z[2+8] += (unsigned long)a[2] * b[8];

	z[3+0] += (unsigned long)a[3] * b[0];
	z[3+1] += (unsigned long)a[3] * b[1];
	z[3+2] += (unsigned long)a[3] * b[2];
	z[3+3] += (unsigned long)a[3] * b[3];
	z[3+4] += (unsigned long)a[3] * b[4];
	z[3+5] += (unsigned long)a[3] * b[5];
	z[3+6] += (unsigned long)a[3] * b[6];
	z[3+7] += (unsigned long)a[3] * b[7];
	z[3+8] += (unsigned long)a[3] * b[8];

	z[4+0] += (unsigned long)a[4] * b[0];
	z[4+1] += (unsigned long)a[4] * b[1];
	z[4+2] += (unsigned long)a[4] * b[2];
	z[4+3] += (unsigned long)a[4] * b[3];
	z[4+4] += (unsigned long)a[4] * b[4];
	z[4+5] += (unsigned long)a[4] * b[5];
	z[4+6] += (unsigned long)a[4] * b[6];
	z[4+7] += (unsigned long)a[4] * b[7];
	z[4+8] += (unsigned long)a[4] * b[8];

	z[5+0] += (unsigned long)a[5] * b[0];
	z[5+1] += (unsigned long)a[5] * b[1];
	z[5+2] += (unsigned long)a[5] * b[2];
	z[5+3] += (unsigned long)a[5] * b[3];
	z[5+4] += (unsigned long)a[5] * b[4];
	z[5+5] += (unsigned long)a[5] * b[5];
	z[5+6] += (unsigned long)a[5] * b[6];
	z[5+7] += (unsigned long)a[5] * b[7];
	z[5+8] += (unsigned long)a[5] * b[8];

	z[6+0] += (unsigned long)a[6] * b[0];
	z[6+1] += (unsigned long)a[6] * b[1];
	z[6+2] += (unsigned long)a[6] * b[2];
	z[6+3] += (unsigned long)a[6] * b[3];
	z[6+4] += (unsigned long)a[6] * b[4];
	z[6+5] += (unsigned long)a[6] * b[5];
	z[6+6] += (unsigned long)a[6] * b[6];
	z[6+7] += (unsigned long)a[6] * b[7];
	z[6+8] += (unsigned long)a[6] * b[8];

	z[7+0] += (unsigned long)a[7] * b[0];
	z[7+1] += (unsigned long)a[7] * b[1];
	z[7+2] += (unsigned long)a[7] * b[2];
	z[7+3] += (unsigned long)a[7] * b[3];
	z[7+4] += (unsigned long)a[7] * b[4];
	z[7+5] += (unsigned long)a[7] * b[5];
	z[7+6] += (unsigned long)a[7] * b[6];
	z[7+7] += (unsigned long)a[7] * b[7];
	z[7+8] += (unsigned long)a[7] * b[8];

	z[8+0] += (unsigned long)a[8] * b[0];
	z[8+1] += (unsigned long)a[8] * b[1];
	z[8+2] += (unsigned long)a[8] * b[2];
	z[8+3] += (unsigned long)a[8] * b[3];
	z[8+4] += (unsigned long)a[8] * b[4];
	z[8+5] += (unsigned long)a[8] * b[5];
	z[8+6] += (unsigned long)a[8] * b[6];
	z[8+7] += (unsigned long)a[8] * b[7];
	z[8+8] += (unsigned long)a[8] * b[8];
}

void unroll_mul10(unsigned int *a, unsigned int *b, unsigned long *z){
	
#ifdef DEBUG
	puts("Debug : called unroll_mul10");
#endif

	z[0] = 0;
	z[1] = 0;
	z[2] = 0;
	z[3] = 0;
	z[4] = 0;
	z[5] = 0;
	z[6] = 0;
	z[7] = 0;
	z[8] = 0;
	z[9] = 0;
	z[10] = 0;
	z[11] = 0;
	z[12] = 0;
	z[13] = 0;
	z[14] = 0;
	z[15] = 0;
	z[16] = 0;
	z[17] = 0;
	z[18] = 0;
	z[19] = 0;

	
	z[0+0] += (unsigned long)a[0] * b[0];
	z[0+1] += (unsigned long)a[0] * b[1];
	z[0+2] += (unsigned long)a[0] * b[2];
	z[0+3] += (unsigned long)a[0] * b[3];
	z[0+4] += (unsigned long)a[0] * b[4];
	z[0+5] += (unsigned long)a[0] * b[5];
	z[0+6] += (unsigned long)a[0] * b[6];
	z[0+7] += (unsigned long)a[0] * b[7];
	z[0+8] += (unsigned long)a[0] * b[8];
	z[0+9] += (unsigned long)a[0] * b[9];

	z[1+0] += (unsigned long)a[1] * b[0];
	z[1+1] += (unsigned long)a[1] * b[1];
	z[1+2] += (unsigned long)a[1] * b[2];
	z[1+3] += (unsigned long)a[1] * b[3];
	z[1+4] += (unsigned long)a[1] * b[4];
	z[1+5] += (unsigned long)a[1] * b[5];
	z[1+6] += (unsigned long)a[1] * b[6];
	z[1+7] += (unsigned long)a[1] * b[7];
	z[1+8] += (unsigned long)a[1] * b[8];
	z[1+9] += (unsigned long)a[1] * b[9];

	z[2+0] += (unsigned long)a[2] * b[0];
	z[2+1] += (unsigned long)a[2] * b[1];
	z[2+2] += (unsigned long)a[2] * b[2];
	z[2+3] += (unsigned long)a[2] * b[3];
	z[2+4] += (unsigned long)a[2] * b[4];
	z[2+5] += (unsigned long)a[2] * b[5];
	z[2+6] += (unsigned long)a[2] * b[6];
	z[2+7] += (unsigned long)a[2] * b[7];
	z[2+8] += (unsigned long)a[2] * b[8];
	z[2+9] += (unsigned long)a[2] * b[9];

	z[3+0] += (unsigned long)a[3] * b[0];
	z[3+1] += (unsigned long)a[3] * b[1];
	z[3+2] += (unsigned long)a[3] * b[2];
	z[3+3] += (unsigned long)a[3] * b[3];
	z[3+4] += (unsigned long)a[3] * b[4];
	z[3+5] += (unsigned long)a[3] * b[5];
	z[3+6] += (unsigned long)a[3] * b[6];
	z[3+7] += (unsigned long)a[3] * b[7];
	z[3+8] += (unsigned long)a[3] * b[8];
	z[3+9] += (unsigned long)a[3] * b[9];

	z[4+0] += (unsigned long)a[4] * b[0];
	z[4+1] += (unsigned long)a[4] * b[1];
	z[4+2] += (unsigned long)a[4] * b[2];
	z[4+3] += (unsigned long)a[4] * b[3];
	z[4+4] += (unsigned long)a[4] * b[4];
	z[4+5] += (unsigned long)a[4] * b[5];
	z[4+6] += (unsigned long)a[4] * b[6];
	z[4+7] += (unsigned long)a[4] * b[7];
	z[4+8] += (unsigned long)a[4] * b[8];
	z[4+9] += (unsigned long)a[4] * b[9];

	z[5+0] += (unsigned long)a[5] * b[0];
	z[5+1] += (unsigned long)a[5] * b[1];
	z[5+2] += (unsigned long)a[5] * b[2];
	z[5+3] += (unsigned long)a[5] * b[3];
	z[5+4] += (unsigned long)a[5] * b[4];
	z[5+5] += (unsigned long)a[5] * b[5];
	z[5+6] += (unsigned long)a[5] * b[6];
	z[5+7] += (unsigned long)a[5] * b[7];
	z[5+8] += (unsigned long)a[5] * b[8];
	z[5+9] += (unsigned long)a[5] * b[9];

	z[6+0] += (unsigned long)a[6] * b[0];
	z[6+1] += (unsigned long)a[6] * b[1];
	z[6+2] += (unsigned long)a[6] * b[2];
	z[6+3] += (unsigned long)a[6] * b[3];
	z[6+4] += (unsigned long)a[6] * b[4];
	z[6+5] += (unsigned long)a[6] * b[5];
	z[6+6] += (unsigned long)a[6] * b[6];
	z[6+7] += (unsigned long)a[6] * b[7];
	z[6+8] += (unsigned long)a[6] * b[8];
	z[6+9] += (unsigned long)a[6] * b[9];

	z[7+0] += (unsigned long)a[7] * b[0];
	z[7+1] += (unsigned long)a[7] * b[1];
	z[7+2] += (unsigned long)a[7] * b[2];
	z[7+3] += (unsigned long)a[7] * b[3];
	z[7+4] += (unsigned long)a[7] * b[4];
	z[7+5] += (unsigned long)a[7] * b[5];
	z[7+6] += (unsigned long)a[7] * b[6];
	z[7+7] += (unsigned long)a[7] * b[7];
	z[7+8] += (unsigned long)a[7] * b[8];
	z[7+9] += (unsigned long)a[7] * b[9];

	z[8+0] += (unsigned long)a[8] * b[0];
	z[8+1] += (unsigned long)a[8] * b[1];
	z[8+2] += (unsigned long)a[8] * b[2];
	z[8+3] += (unsigned long)a[8] * b[3];
	z[8+4] += (unsigned long)a[8] * b[4];
	z[8+5] += (unsigned long)a[8] * b[5];
	z[8+6] += (unsigned long)a[8] * b[6];
	z[8+7] += (unsigned long)a[8] * b[7];
	z[8+8] += (unsigned long)a[8] * b[8];
	z[8+9] += (unsigned long)a[8] * b[9];

	z[9+0] += (unsigned long)a[9] * b[0];
	z[9+1] += (unsigned long)a[9] * b[1];
	z[9+2] += (unsigned long)a[9] * b[2];
	z[9+3] += (unsigned long)a[9] * b[3];
	z[9+4] += (unsigned long)a[9] * b[4];
	z[9+5] += (unsigned long)a[9] * b[5];
	z[9+6] += (unsigned long)a[9] * b[6];
	z[9+7] += (unsigned long)a[9] * b[7];
	z[9+8] += (unsigned long)a[9] * b[8];
	z[9+9] += (unsigned long)a[9] * b[9];
}


void unroll_mul11(unsigned int *a, unsigned int *b, unsigned long *z){
	
	
#ifdef DEBUG
	puts("Debug : called unroll_mul11");
#endif

	z[0] = 0;
	z[1] = 0;
	z[2] = 0;
	z[3] = 0;
	z[4] = 0;
	z[5] = 0;
	z[6] = 0;
	z[7] = 0;
	z[8] = 0;
	z[9] = 0;
	z[10] = 0;
	z[11] = 0;
	z[12] = 0;
	z[13] = 0;
	z[14] = 0;
	z[15] = 0;
	z[16] = 0;
	z[17] = 0;
	z[18] = 0;
	z[19] = 0;
	z[20] = 0;
	z[21] = 0;



	
	z[0+0] += (unsigned long)a[0] * b[0];
	z[0+1] += (unsigned long)a[0] * b[1];
	z[0+2] += (unsigned long)a[0] * b[2];
	z[0+3] += (unsigned long)a[0] * b[3];
	z[0+4] += (unsigned long)a[0] * b[4];
	z[0+5] += (unsigned long)a[0] * b[5];
	z[0+6] += (unsigned long)a[0] * b[6];
	z[0+7] += (unsigned long)a[0] * b[7];
	z[0+8] += (unsigned long)a[0] * b[8];
	z[0+9] += (unsigned long)a[0] * b[9];
	z[0+10] += (unsigned long)a[0] * b[10];

	z[1+0] += (unsigned long)a[1] * b[0];
	z[1+1] += (unsigned long)a[1] * b[1];
	z[1+2] += (unsigned long)a[1] * b[2];
	z[1+3] += (unsigned long)a[1] * b[3];
	z[1+4] += (unsigned long)a[1] * b[4];
	z[1+5] += (unsigned long)a[1] * b[5];
	z[1+6] += (unsigned long)a[1] * b[6];
	z[1+7] += (unsigned long)a[1] * b[7];
	z[1+8] += (unsigned long)a[1] * b[8];
	z[1+9] += (unsigned long)a[1] * b[9];
	z[1+10] += (unsigned long)a[1] * b[10];

	z[2+0] += (unsigned long)a[2] * b[0];
	z[2+1] += (unsigned long)a[2] * b[1];
	z[2+2] += (unsigned long)a[2] * b[2];
	z[2+3] += (unsigned long)a[2] * b[3];
	z[2+4] += (unsigned long)a[2] * b[4];
	z[2+5] += (unsigned long)a[2] * b[5];
	z[2+6] += (unsigned long)a[2] * b[6];
	z[2+7] += (unsigned long)a[2] * b[7];
	z[2+8] += (unsigned long)a[2] * b[8];
	z[2+9] += (unsigned long)a[2] * b[9];
	z[2+10] += (unsigned long)a[2] * b[10];

	z[3+0] += (unsigned long)a[3] * b[0];
	z[3+1] += (unsigned long)a[3] * b[1];
	z[3+2] += (unsigned long)a[3] * b[2];
	z[3+3] += (unsigned long)a[3] * b[3];
	z[3+4] += (unsigned long)a[3] * b[4];
	z[3+5] += (unsigned long)a[3] * b[5];
	z[3+6] += (unsigned long)a[3] * b[6];
	z[3+7] += (unsigned long)a[3] * b[7];
	z[3+8] += (unsigned long)a[3] * b[8];
	z[3+9] += (unsigned long)a[3] * b[9];
	z[3+10] += (unsigned long)a[3] * b[10];

	z[4+0] += (unsigned long)a[4] * b[0];
	z[4+1] += (unsigned long)a[4] * b[1];
	z[4+2] += (unsigned long)a[4] * b[2];
	z[4+3] += (unsigned long)a[4] * b[3];
	z[4+4] += (unsigned long)a[4] * b[4];
	z[4+5] += (unsigned long)a[4] * b[5];
	z[4+6] += (unsigned long)a[4] * b[6];
	z[4+7] += (unsigned long)a[4] * b[7];
	z[4+8] += (unsigned long)a[4] * b[8];
	z[4+9] += (unsigned long)a[4] * b[9];
	z[4+10] += (unsigned long)a[4] * b[10];

	z[5+0] += (unsigned long)a[5] * b[0];
	z[5+1] += (unsigned long)a[5] * b[1];
	z[5+2] += (unsigned long)a[5] * b[2];
	z[5+3] += (unsigned long)a[5] * b[3];
	z[5+4] += (unsigned long)a[5] * b[4];
	z[5+5] += (unsigned long)a[5] * b[5];
	z[5+6] += (unsigned long)a[5] * b[6];
	z[5+7] += (unsigned long)a[5] * b[7];
	z[5+8] += (unsigned long)a[5] * b[8];
	z[5+9] += (unsigned long)a[5] * b[9];
	z[5+10] += (unsigned long)a[5] * b[10];

	z[6+0] += (unsigned long)a[6] * b[0];
	z[6+1] += (unsigned long)a[6] * b[1];
	z[6+2] += (unsigned long)a[6] * b[2];
	z[6+3] += (unsigned long)a[6] * b[3];
	z[6+4] += (unsigned long)a[6] * b[4];
	z[6+5] += (unsigned long)a[6] * b[5];
	z[6+6] += (unsigned long)a[6] * b[6];
	z[6+7] += (unsigned long)a[6] * b[7];
	z[6+8] += (unsigned long)a[6] * b[8];
	z[6+9] += (unsigned long)a[6] * b[9];
	z[6+10] += (unsigned long)a[6] * b[10];

	z[7+0] += (unsigned long)a[7] * b[0];
	z[7+1] += (unsigned long)a[7] * b[1];
	z[7+2] += (unsigned long)a[7] * b[2];
	z[7+3] += (unsigned long)a[7] * b[3];
	z[7+4] += (unsigned long)a[7] * b[4];
	z[7+5] += (unsigned long)a[7] * b[5];
	z[7+6] += (unsigned long)a[7] * b[6];
	z[7+7] += (unsigned long)a[7] * b[7];
	z[7+8] += (unsigned long)a[7] * b[8];
	z[7+9] += (unsigned long)a[7] * b[9];
	z[7+10] += (unsigned long)a[7] * b[10];

	z[8+0] += (unsigned long)a[8] * b[0];
	z[8+1] += (unsigned long)a[8] * b[1];
	z[8+2] += (unsigned long)a[8] * b[2];
	z[8+3] += (unsigned long)a[8] * b[3];
	z[8+4] += (unsigned long)a[8] * b[4];
	z[8+5] += (unsigned long)a[8] * b[5];
	z[8+6] += (unsigned long)a[8] * b[6];
	z[8+7] += (unsigned long)a[8] * b[7];
	z[8+8] += (unsigned long)a[8] * b[8];
	z[8+9] += (unsigned long)a[8] * b[9];
	z[8+10] += (unsigned long)a[8] * b[10];

	z[9+0] += (unsigned long)a[9] * b[0];
	z[9+1] += (unsigned long)a[9] * b[1];
	z[9+2] += (unsigned long)a[9] * b[2];
	z[9+3] += (unsigned long)a[9] * b[3];
	z[9+4] += (unsigned long)a[9] * b[4];
	z[9+5] += (unsigned long)a[9] * b[5];
	z[9+6] += (unsigned long)a[9] * b[6];
	z[9+7] += (unsigned long)a[9] * b[7];
	z[9+8] += (unsigned long)a[9] * b[8];
	z[9+9] += (unsigned long)a[9] * b[9];
	z[9+10] += (unsigned long)a[9] * b[10];

	z[10+0] += (unsigned long)a[10] * b[0];
	z[10+1] += (unsigned long)a[10] * b[1];
	z[10+2] += (unsigned long)a[10] * b[2];
	z[10+3] += (unsigned long)a[10] * b[3];
	z[10+4] += (unsigned long)a[10] * b[4];
	z[10+5] += (unsigned long)a[10] * b[5];
	z[10+6] += (unsigned long)a[10] * b[6];
	z[10+7] += (unsigned long)a[10] * b[7];
	z[10+8] += (unsigned long)a[10] * b[8];
	z[10+9] += (unsigned long)a[10] * b[9];
	z[10+10] += (unsigned long)a[10] * b[10];
}

void unroll_mul12(unsigned int *a, unsigned int *b, unsigned long *z){
	
	
#ifdef DEBUG
	puts("Debug : called unroll_mul12");
#endif

	z[0] = 0;
	z[1] = 0;
	z[2] = 0;
	z[3] = 0;
	z[4] = 0;
	z[5] = 0;
	z[6] = 0;
	z[7] = 0;
	z[8] = 0;
	z[9] = 0;
	z[10] = 0;
	z[11] = 0;
	z[12] = 0;
	z[13] = 0;
	z[14] = 0;
	z[15] = 0;
	z[16] = 0;
	z[17] = 0;
	z[18] = 0;
	z[19] = 0;
	z[20] = 0;
	z[21] = 0;
	z[22] = 0;
	z[23] = 0;



	
	z[0+0] += (unsigned long)a[0] * b[0];
	z[0+1] += (unsigned long)a[0] * b[1];
	z[0+2] += (unsigned long)a[0] * b[2];
	z[0+3] += (unsigned long)a[0] * b[3];
	z[0+4] += (unsigned long)a[0] * b[4];
	z[0+5] += (unsigned long)a[0] * b[5];
	z[0+6] += (unsigned long)a[0] * b[6];
	z[0+7] += (unsigned long)a[0] * b[7];
	z[0+8] += (unsigned long)a[0] * b[8];
	z[0+9] += (unsigned long)a[0] * b[9];
	z[0+10] += (unsigned long)a[0] * b[10];
	z[0+11] += (unsigned long)a[0] * b[11];

	z[1+0] += (unsigned long)a[1] * b[0];
	z[1+1] += (unsigned long)a[1] * b[1];
	z[1+2] += (unsigned long)a[1] * b[2];
	z[1+3] += (unsigned long)a[1] * b[3];
	z[1+4] += (unsigned long)a[1] * b[4];
	z[1+5] += (unsigned long)a[1] * b[5];
	z[1+6] += (unsigned long)a[1] * b[6];
	z[1+7] += (unsigned long)a[1] * b[7];
	z[1+8] += (unsigned long)a[1] * b[8];
	z[1+9] += (unsigned long)a[1] * b[9];
	z[1+10] += (unsigned long)a[1] * b[10];
	z[1+11] += (unsigned long)a[1] * b[11];

	z[2+0] += (unsigned long)a[2] * b[0];
	z[2+1] += (unsigned long)a[2] * b[1];
	z[2+2] += (unsigned long)a[2] * b[2];
	z[2+3] += (unsigned long)a[2] * b[3];
	z[2+4] += (unsigned long)a[2] * b[4];
	z[2+5] += (unsigned long)a[2] * b[5];
	z[2+6] += (unsigned long)a[2] * b[6];
	z[2+7] += (unsigned long)a[2] * b[7];
	z[2+8] += (unsigned long)a[2] * b[8];
	z[2+9] += (unsigned long)a[2] * b[9];
	z[2+10] += (unsigned long)a[2] * b[10];
	z[2+11] += (unsigned long)a[2] * b[11];

	z[3+0] += (unsigned long)a[3] * b[0];
	z[3+1] += (unsigned long)a[3] * b[1];
	z[3+2] += (unsigned long)a[3] * b[2];
	z[3+3] += (unsigned long)a[3] * b[3];
	z[3+4] += (unsigned long)a[3] * b[4];
	z[3+5] += (unsigned long)a[3] * b[5];
	z[3+6] += (unsigned long)a[3] * b[6];
	z[3+7] += (unsigned long)a[3] * b[7];
	z[3+8] += (unsigned long)a[3] * b[8];
	z[3+9] += (unsigned long)a[3] * b[9];
	z[3+10] += (unsigned long)a[3] * b[10];
	z[3+11] += (unsigned long)a[3] * b[11];

	z[4+0] += (unsigned long)a[4] * b[0];
	z[4+1] += (unsigned long)a[4] * b[1];
	z[4+2] += (unsigned long)a[4] * b[2];
	z[4+3] += (unsigned long)a[4] * b[3];
	z[4+4] += (unsigned long)a[4] * b[4];
	z[4+5] += (unsigned long)a[4] * b[5];
	z[4+6] += (unsigned long)a[4] * b[6];
	z[4+7] += (unsigned long)a[4] * b[7];
	z[4+8] += (unsigned long)a[4] * b[8];
	z[4+9] += (unsigned long)a[4] * b[9];
	z[4+10] += (unsigned long)a[4] * b[10];
	z[4+11] += (unsigned long)a[4] * b[11];

	z[5+0] += (unsigned long)a[5] * b[0];
	z[5+1] += (unsigned long)a[5] * b[1];
	z[5+2] += (unsigned long)a[5] * b[2];
	z[5+3] += (unsigned long)a[5] * b[3];
	z[5+4] += (unsigned long)a[5] * b[4];
	z[5+5] += (unsigned long)a[5] * b[5];
	z[5+6] += (unsigned long)a[5] * b[6];
	z[5+7] += (unsigned long)a[5] * b[7];
	z[5+8] += (unsigned long)a[5] * b[8];
	z[5+9] += (unsigned long)a[5] * b[9];
	z[5+10] += (unsigned long)a[5] * b[10];
	z[5+11] += (unsigned long)a[5] * b[11];

	z[6+0] += (unsigned long)a[6] * b[0];
	z[6+1] += (unsigned long)a[6] * b[1];
	z[6+2] += (unsigned long)a[6] * b[2];
	z[6+3] += (unsigned long)a[6] * b[3];
	z[6+4] += (unsigned long)a[6] * b[4];
	z[6+5] += (unsigned long)a[6] * b[5];
	z[6+6] += (unsigned long)a[6] * b[6];
	z[6+7] += (unsigned long)a[6] * b[7];
	z[6+8] += (unsigned long)a[6] * b[8];
	z[6+9] += (unsigned long)a[6] * b[9];
	z[6+10] += (unsigned long)a[6] * b[10];
	z[6+11] += (unsigned long)a[6] * b[11];

	z[7+0] += (unsigned long)a[7] * b[0];
	z[7+1] += (unsigned long)a[7] * b[1];
	z[7+2] += (unsigned long)a[7] * b[2];
	z[7+3] += (unsigned long)a[7] * b[3];
	z[7+4] += (unsigned long)a[7] * b[4];
	z[7+5] += (unsigned long)a[7] * b[5];
	z[7+6] += (unsigned long)a[7] * b[6];
	z[7+7] += (unsigned long)a[7] * b[7];
	z[7+8] += (unsigned long)a[7] * b[8];
	z[7+9] += (unsigned long)a[7] * b[9];
	z[7+10] += (unsigned long)a[7] * b[10];
	z[7+11] += (unsigned long)a[7] * b[11];

	z[8+0] += (unsigned long)a[8] * b[0];
	z[8+1] += (unsigned long)a[8] * b[1];
	z[8+2] += (unsigned long)a[8] * b[2];
	z[8+3] += (unsigned long)a[8] * b[3];
	z[8+4] += (unsigned long)a[8] * b[4];
	z[8+5] += (unsigned long)a[8] * b[5];
	z[8+6] += (unsigned long)a[8] * b[6];
	z[8+7] += (unsigned long)a[8] * b[7];
	z[8+8] += (unsigned long)a[8] * b[8];
	z[8+9] += (unsigned long)a[8] * b[9];
	z[8+10] += (unsigned long)a[8] * b[10];
	z[8+11] += (unsigned long)a[8] * b[11];

	z[9+0] += (unsigned long)a[9] * b[0];
	z[9+1] += (unsigned long)a[9] * b[1];
	z[9+2] += (unsigned long)a[9] * b[2];
	z[9+3] += (unsigned long)a[9] * b[3];
	z[9+4] += (unsigned long)a[9] * b[4];
	z[9+5] += (unsigned long)a[9] * b[5];
	z[9+6] += (unsigned long)a[9] * b[6];
	z[9+7] += (unsigned long)a[9] * b[7];
	z[9+8] += (unsigned long)a[9] * b[8];
	z[9+9] += (unsigned long)a[9] * b[9];
	z[9+10] += (unsigned long)a[9] * b[10];
	z[9+11] += (unsigned long)a[9] * b[11];

	z[10+0] += (unsigned long)a[10] * b[0];
	z[10+1] += (unsigned long)a[10] * b[1];
	z[10+2] += (unsigned long)a[10] * b[2];
	z[10+3] += (unsigned long)a[10] * b[3];
	z[10+4] += (unsigned long)a[10] * b[4];
	z[10+5] += (unsigned long)a[10] * b[5];
	z[10+6] += (unsigned long)a[10] * b[6];
	z[10+7] += (unsigned long)a[10] * b[7];
	z[10+8] += (unsigned long)a[10] * b[8];
	z[10+9] += (unsigned long)a[10] * b[9];
	z[10+10] += (unsigned long)a[10] * b[10];
	z[10+11] += (unsigned long)a[10] * b[11];

	z[11+0] += (unsigned long)a[11] * b[0];
	z[11+1] += (unsigned long)a[11] * b[1];
	z[11+2] += (unsigned long)a[11] * b[2];
	z[11+3] += (unsigned long)a[11] * b[3];
	z[11+4] += (unsigned long)a[11] * b[4];
	z[11+5] += (unsigned long)a[11] * b[5];
	z[11+6] += (unsigned long)a[11] * b[6];
	z[11+7] += (unsigned long)a[11] * b[7];
	z[11+8] += (unsigned long)a[11] * b[8];
	z[11+9] += (unsigned long)a[11] * b[9];
	z[11+10] += (unsigned long)a[11] * b[10];
	z[11+11] += (unsigned long)a[11] * b[11];
}

void unroll_mul13(unsigned int *a, unsigned int *b, unsigned long *z){
	
	
#ifdef DEBUG
	puts("Debug : called unroll_mul13");
#endif

	z[0] = 0;
	z[1] = 0;
	z[2] = 0;
	z[3] = 0;
	z[4] = 0;
	z[5] = 0;
	z[6] = 0;
	z[7] = 0;
	z[8] = 0;
	z[9] = 0;
	z[10] = 0;
	z[11] = 0;
	z[12] = 0;
	z[13] = 0;
	z[14] = 0;
	z[15] = 0;
	z[16] = 0;
	z[17] = 0;
	z[18] = 0;
	z[19] = 0;
	z[20] = 0;
	z[21] = 0;
	z[22] = 0;
	z[23] = 0;
	z[24] = 0;
	z[25] = 0;

	
	z[0+0] += (unsigned long)a[0] * b[0];
	z[0+1] += (unsigned long)a[0] * b[1];
	z[0+2] += (unsigned long)a[0] * b[2];
	z[0+3] += (unsigned long)a[0] * b[3];
	z[0+4] += (unsigned long)a[0] * b[4];
	z[0+5] += (unsigned long)a[0] * b[5];
	z[0+6] += (unsigned long)a[0] * b[6];
	z[0+7] += (unsigned long)a[0] * b[7];
	z[0+8] += (unsigned long)a[0] * b[8];
	z[0+9] += (unsigned long)a[0] * b[9];
	z[0+10] += (unsigned long)a[0] * b[10];
	z[0+11] += (unsigned long)a[0] * b[11];
	z[0+12] += (unsigned long)a[0] * b[12];

	z[1+0] += (unsigned long)a[1] * b[0];
	z[1+1] += (unsigned long)a[1] * b[1];
	z[1+2] += (unsigned long)a[1] * b[2];
	z[1+3] += (unsigned long)a[1] * b[3];
	z[1+4] += (unsigned long)a[1] * b[4];
	z[1+5] += (unsigned long)a[1] * b[5];
	z[1+6] += (unsigned long)a[1] * b[6];
	z[1+7] += (unsigned long)a[1] * b[7];
	z[1+8] += (unsigned long)a[1] * b[8];
	z[1+9] += (unsigned long)a[1] * b[9];
	z[1+10] += (unsigned long)a[1] * b[10];
	z[1+11] += (unsigned long)a[1] * b[11];
	z[1+12] += (unsigned long)a[1] * b[12];

	z[2+0] += (unsigned long)a[2] * b[0];
	z[2+1] += (unsigned long)a[2] * b[1];
	z[2+2] += (unsigned long)a[2] * b[2];
	z[2+3] += (unsigned long)a[2] * b[3];
	z[2+4] += (unsigned long)a[2] * b[4];
	z[2+5] += (unsigned long)a[2] * b[5];
	z[2+6] += (unsigned long)a[2] * b[6];
	z[2+7] += (unsigned long)a[2] * b[7];
	z[2+8] += (unsigned long)a[2] * b[8];
	z[2+9] += (unsigned long)a[2] * b[9];
	z[2+10] += (unsigned long)a[2] * b[10];
	z[2+11] += (unsigned long)a[2] * b[11];
	z[2+12] += (unsigned long)a[2] * b[12];

	z[3+0] += (unsigned long)a[3] * b[0];
	z[3+1] += (unsigned long)a[3] * b[1];
	z[3+2] += (unsigned long)a[3] * b[2];
	z[3+3] += (unsigned long)a[3] * b[3];
	z[3+4] += (unsigned long)a[3] * b[4];
	z[3+5] += (unsigned long)a[3] * b[5];
	z[3+6] += (unsigned long)a[3] * b[6];
	z[3+7] += (unsigned long)a[3] * b[7];
	z[3+8] += (unsigned long)a[3] * b[8];
	z[3+9] += (unsigned long)a[3] * b[9];
	z[3+10] += (unsigned long)a[3] * b[10];
	z[3+11] += (unsigned long)a[3] * b[11];
	z[3+12] += (unsigned long)a[3] * b[12];

	z[4+0] += (unsigned long)a[4] * b[0];
	z[4+1] += (unsigned long)a[4] * b[1];
	z[4+2] += (unsigned long)a[4] * b[2];
	z[4+3] += (unsigned long)a[4] * b[3];
	z[4+4] += (unsigned long)a[4] * b[4];
	z[4+5] += (unsigned long)a[4] * b[5];
	z[4+6] += (unsigned long)a[4] * b[6];
	z[4+7] += (unsigned long)a[4] * b[7];
	z[4+8] += (unsigned long)a[4] * b[8];
	z[4+9] += (unsigned long)a[4] * b[9];
	z[4+10] += (unsigned long)a[4] * b[10];
	z[4+11] += (unsigned long)a[4] * b[11];
	z[4+12] += (unsigned long)a[4] * b[12];

	z[5+0] += (unsigned long)a[5] * b[0];
	z[5+1] += (unsigned long)a[5] * b[1];
	z[5+2] += (unsigned long)a[5] * b[2];
	z[5+3] += (unsigned long)a[5] * b[3];
	z[5+4] += (unsigned long)a[5] * b[4];
	z[5+5] += (unsigned long)a[5] * b[5];
	z[5+6] += (unsigned long)a[5] * b[6];
	z[5+7] += (unsigned long)a[5] * b[7];
	z[5+8] += (unsigned long)a[5] * b[8];
	z[5+9] += (unsigned long)a[5] * b[9];
	z[5+10] += (unsigned long)a[5] * b[10];
	z[5+11] += (unsigned long)a[5] * b[11];
	z[5+12] += (unsigned long)a[5] * b[12];

	z[6+0] += (unsigned long)a[6] * b[0];
	z[6+1] += (unsigned long)a[6] * b[1];
	z[6+2] += (unsigned long)a[6] * b[2];
	z[6+3] += (unsigned long)a[6] * b[3];
	z[6+4] += (unsigned long)a[6] * b[4];
	z[6+5] += (unsigned long)a[6] * b[5];
	z[6+6] += (unsigned long)a[6] * b[6];
	z[6+7] += (unsigned long)a[6] * b[7];
	z[6+8] += (unsigned long)a[6] * b[8];
	z[6+9] += (unsigned long)a[6] * b[9];
	z[6+10] += (unsigned long)a[6] * b[10];
	z[6+11] += (unsigned long)a[6] * b[11];
	z[6+12] += (unsigned long)a[6] * b[12];

	z[7+0] += (unsigned long)a[7] * b[0];
	z[7+1] += (unsigned long)a[7] * b[1];
	z[7+2] += (unsigned long)a[7] * b[2];
	z[7+3] += (unsigned long)a[7] * b[3];
	z[7+4] += (unsigned long)a[7] * b[4];
	z[7+5] += (unsigned long)a[7] * b[5];
	z[7+6] += (unsigned long)a[7] * b[6];
	z[7+7] += (unsigned long)a[7] * b[7];
	z[7+8] += (unsigned long)a[7] * b[8];
	z[7+9] += (unsigned long)a[7] * b[9];
	z[7+10] += (unsigned long)a[7] * b[10];
	z[7+11] += (unsigned long)a[7] * b[11];
	z[7+12] += (unsigned long)a[7] * b[12];

	z[8+0] += (unsigned long)a[8] * b[0];
	z[8+1] += (unsigned long)a[8] * b[1];
	z[8+2] += (unsigned long)a[8] * b[2];
	z[8+3] += (unsigned long)a[8] * b[3];
	z[8+4] += (unsigned long)a[8] * b[4];
	z[8+5] += (unsigned long)a[8] * b[5];
	z[8+6] += (unsigned long)a[8] * b[6];
	z[8+7] += (unsigned long)a[8] * b[7];
	z[8+8] += (unsigned long)a[8] * b[8];
	z[8+9] += (unsigned long)a[8] * b[9];
	z[8+10] += (unsigned long)a[8] * b[10];
	z[8+11] += (unsigned long)a[8] * b[11];
	z[8+12] += (unsigned long)a[8] * b[12];

	z[9+0] += (unsigned long)a[9] * b[0];
	z[9+1] += (unsigned long)a[9] * b[1];
	z[9+2] += (unsigned long)a[9] * b[2];
	z[9+3] += (unsigned long)a[9] * b[3];
	z[9+4] += (unsigned long)a[9] * b[4];
	z[9+5] += (unsigned long)a[9] * b[5];
	z[9+6] += (unsigned long)a[9] * b[6];
	z[9+7] += (unsigned long)a[9] * b[7];
	z[9+8] += (unsigned long)a[9] * b[8];
	z[9+9] += (unsigned long)a[9] * b[9];
	z[9+10] += (unsigned long)a[9] * b[10];
	z[9+11] += (unsigned long)a[9] * b[11];
	z[9+12] += (unsigned long)a[9] * b[12];

	z[10+0] += (unsigned long)a[10] * b[0];
	z[10+1] += (unsigned long)a[10] * b[1];
	z[10+2] += (unsigned long)a[10] * b[2];
	z[10+3] += (unsigned long)a[10] * b[3];
	z[10+4] += (unsigned long)a[10] * b[4];
	z[10+5] += (unsigned long)a[10] * b[5];
	z[10+6] += (unsigned long)a[10] * b[6];
	z[10+7] += (unsigned long)a[10] * b[7];
	z[10+8] += (unsigned long)a[10] * b[8];
	z[10+9] += (unsigned long)a[10] * b[9];
	z[10+10] += (unsigned long)a[10] * b[10];
	z[10+11] += (unsigned long)a[10] * b[11];
	z[10+12] += (unsigned long)a[10] * b[12];

	z[11+0] += (unsigned long)a[11] * b[0];
	z[11+1] += (unsigned long)a[11] * b[1];
	z[11+2] += (unsigned long)a[11] * b[2];
	z[11+3] += (unsigned long)a[11] * b[3];
	z[11+4] += (unsigned long)a[11] * b[4];
	z[11+5] += (unsigned long)a[11] * b[5];
	z[11+6] += (unsigned long)a[11] * b[6];
	z[11+7] += (unsigned long)a[11] * b[7];
	z[11+8] += (unsigned long)a[11] * b[8];
	z[11+9] += (unsigned long)a[11] * b[9];
	z[11+10] += (unsigned long)a[11] * b[10];
	z[11+11] += (unsigned long)a[11] * b[11];
	z[11+12] += (unsigned long)a[11] * b[12];

	z[12+0] += (unsigned long)a[12] * b[0];
	z[12+1] += (unsigned long)a[12] * b[1];
	z[12+2] += (unsigned long)a[12] * b[2];
	z[12+3] += (unsigned long)a[12] * b[3];
	z[12+4] += (unsigned long)a[12] * b[4];
	z[12+5] += (unsigned long)a[12] * b[5];
	z[12+6] += (unsigned long)a[12] * b[6];
	z[12+7] += (unsigned long)a[12] * b[7];
	z[12+8] += (unsigned long)a[12] * b[8];
	z[12+9] += (unsigned long)a[12] * b[9];
	z[12+10] += (unsigned long)a[12] * b[10];
	z[12+11] += (unsigned long)a[12] * b[11];
	z[12+12] += (unsigned long)a[12] * b[12];
}

void unroll_mul14(unsigned int *a, unsigned int *b, unsigned long *z){
	
	
#ifdef DEBUG
	puts("Debug : called unroll_mul14");
#endif

	z[0] = 0;
	z[1] = 0;
	z[2] = 0;
	z[3] = 0;
	z[4] = 0;
	z[5] = 0;
	z[6] = 0;
	z[7] = 0;
	z[8] = 0;
	z[9] = 0;
	z[10] = 0;
	z[11] = 0;
	z[12] = 0;
	z[13] = 0;
	z[14] = 0;
	z[15] = 0;
	z[16] = 0;
	z[17] = 0;
	z[18] = 0;
	z[19] = 0;
	z[20] = 0;
	z[21] = 0;
	z[22] = 0;
	z[23] = 0;
	z[24] = 0;
	z[25] = 0;
	z[26] = 0;
	z[27] = 0;

	
	z[0+0] += (unsigned long)a[0] * b[0];
	z[0+1] += (unsigned long)a[0] * b[1];
	z[0+2] += (unsigned long)a[0] * b[2];
	z[0+3] += (unsigned long)a[0] * b[3];
	z[0+4] += (unsigned long)a[0] * b[4];
	z[0+5] += (unsigned long)a[0] * b[5];
	z[0+6] += (unsigned long)a[0] * b[6];
	z[0+7] += (unsigned long)a[0] * b[7];
	z[0+8] += (unsigned long)a[0] * b[8];
	z[0+9] += (unsigned long)a[0] * b[9];
	z[0+10] += (unsigned long)a[0] * b[10];
	z[0+11] += (unsigned long)a[0] * b[11];
	z[0+12] += (unsigned long)a[0] * b[12];
	z[0+13] += (unsigned long)a[0] * b[13];

	z[1+0] += (unsigned long)a[1] * b[0];
	z[1+1] += (unsigned long)a[1] * b[1];
	z[1+2] += (unsigned long)a[1] * b[2];
	z[1+3] += (unsigned long)a[1] * b[3];
	z[1+4] += (unsigned long)a[1] * b[4];
	z[1+5] += (unsigned long)a[1] * b[5];
	z[1+6] += (unsigned long)a[1] * b[6];
	z[1+7] += (unsigned long)a[1] * b[7];
	z[1+8] += (unsigned long)a[1] * b[8];
	z[1+9] += (unsigned long)a[1] * b[9];
	z[1+10] += (unsigned long)a[1] * b[10];
	z[1+11] += (unsigned long)a[1] * b[11];
	z[1+12] += (unsigned long)a[1] * b[12];
	z[1+13] += (unsigned long)a[1] * b[13];

	z[2+0] += (unsigned long)a[2] * b[0];
	z[2+1] += (unsigned long)a[2] * b[1];
	z[2+2] += (unsigned long)a[2] * b[2];
	z[2+3] += (unsigned long)a[2] * b[3];
	z[2+4] += (unsigned long)a[2] * b[4];
	z[2+5] += (unsigned long)a[2] * b[5];
	z[2+6] += (unsigned long)a[2] * b[6];
	z[2+7] += (unsigned long)a[2] * b[7];
	z[2+8] += (unsigned long)a[2] * b[8];
	z[2+9] += (unsigned long)a[2] * b[9];
	z[2+10] += (unsigned long)a[2] * b[10];
	z[2+11] += (unsigned long)a[2] * b[11];
	z[2+12] += (unsigned long)a[2] * b[12];
	z[2+13] += (unsigned long)a[2] * b[13];

	z[3+0] += (unsigned long)a[3] * b[0];
	z[3+1] += (unsigned long)a[3] * b[1];
	z[3+2] += (unsigned long)a[3] * b[2];
	z[3+3] += (unsigned long)a[3] * b[3];
	z[3+4] += (unsigned long)a[3] * b[4];
	z[3+5] += (unsigned long)a[3] * b[5];
	z[3+6] += (unsigned long)a[3] * b[6];
	z[3+7] += (unsigned long)a[3] * b[7];
	z[3+8] += (unsigned long)a[3] * b[8];
	z[3+9] += (unsigned long)a[3] * b[9];
	z[3+10] += (unsigned long)a[3] * b[10];
	z[3+11] += (unsigned long)a[3] * b[11];
	z[3+12] += (unsigned long)a[3] * b[12];
	z[3+13] += (unsigned long)a[3] * b[13];

	z[4+0] += (unsigned long)a[4] * b[0];
	z[4+1] += (unsigned long)a[4] * b[1];
	z[4+2] += (unsigned long)a[4] * b[2];
	z[4+3] += (unsigned long)a[4] * b[3];
	z[4+4] += (unsigned long)a[4] * b[4];
	z[4+5] += (unsigned long)a[4] * b[5];
	z[4+6] += (unsigned long)a[4] * b[6];
	z[4+7] += (unsigned long)a[4] * b[7];
	z[4+8] += (unsigned long)a[4] * b[8];
	z[4+9] += (unsigned long)a[4] * b[9];
	z[4+10] += (unsigned long)a[4] * b[10];
	z[4+11] += (unsigned long)a[4] * b[11];
	z[4+12] += (unsigned long)a[4] * b[12];
	z[4+13] += (unsigned long)a[4] * b[13];

	z[5+0] += (unsigned long)a[5] * b[0];
	z[5+1] += (unsigned long)a[5] * b[1];
	z[5+2] += (unsigned long)a[5] * b[2];
	z[5+3] += (unsigned long)a[5] * b[3];
	z[5+4] += (unsigned long)a[5] * b[4];
	z[5+5] += (unsigned long)a[5] * b[5];
	z[5+6] += (unsigned long)a[5] * b[6];
	z[5+7] += (unsigned long)a[5] * b[7];
	z[5+8] += (unsigned long)a[5] * b[8];
	z[5+9] += (unsigned long)a[5] * b[9];
	z[5+10] += (unsigned long)a[5] * b[10];
	z[5+11] += (unsigned long)a[5] * b[11];
	z[5+12] += (unsigned long)a[5] * b[12];
	z[5+13] += (unsigned long)a[5] * b[13];

	z[6+0] += (unsigned long)a[6] * b[0];
	z[6+1] += (unsigned long)a[6] * b[1];
	z[6+2] += (unsigned long)a[6] * b[2];
	z[6+3] += (unsigned long)a[6] * b[3];
	z[6+4] += (unsigned long)a[6] * b[4];
	z[6+5] += (unsigned long)a[6] * b[5];
	z[6+6] += (unsigned long)a[6] * b[6];
	z[6+7] += (unsigned long)a[6] * b[7];
	z[6+8] += (unsigned long)a[6] * b[8];
	z[6+9] += (unsigned long)a[6] * b[9];
	z[6+10] += (unsigned long)a[6] * b[10];
	z[6+11] += (unsigned long)a[6] * b[11];
	z[6+12] += (unsigned long)a[6] * b[12];
	z[6+13] += (unsigned long)a[6] * b[13];

	z[7+0] += (unsigned long)a[7] * b[0];
	z[7+1] += (unsigned long)a[7] * b[1];
	z[7+2] += (unsigned long)a[7] * b[2];
	z[7+3] += (unsigned long)a[7] * b[3];
	z[7+4] += (unsigned long)a[7] * b[4];
	z[7+5] += (unsigned long)a[7] * b[5];
	z[7+6] += (unsigned long)a[7] * b[6];
	z[7+7] += (unsigned long)a[7] * b[7];
	z[7+8] += (unsigned long)a[7] * b[8];
	z[7+9] += (unsigned long)a[7] * b[9];
	z[7+10] += (unsigned long)a[7] * b[10];
	z[7+11] += (unsigned long)a[7] * b[11];
	z[7+12] += (unsigned long)a[7] * b[12];
	z[7+13] += (unsigned long)a[7] * b[13];

	z[8+0] += (unsigned long)a[8] * b[0];
	z[8+1] += (unsigned long)a[8] * b[1];
	z[8+2] += (unsigned long)a[8] * b[2];
	z[8+3] += (unsigned long)a[8] * b[3];
	z[8+4] += (unsigned long)a[8] * b[4];
	z[8+5] += (unsigned long)a[8] * b[5];
	z[8+6] += (unsigned long)a[8] * b[6];
	z[8+7] += (unsigned long)a[8] * b[7];
	z[8+8] += (unsigned long)a[8] * b[8];
	z[8+9] += (unsigned long)a[8] * b[9];
	z[8+10] += (unsigned long)a[8] * b[10];
	z[8+11] += (unsigned long)a[8] * b[11];
	z[8+12] += (unsigned long)a[8] * b[12];
	z[8+13] += (unsigned long)a[8] * b[13];

	z[9+0] += (unsigned long)a[9] * b[0];
	z[9+1] += (unsigned long)a[9] * b[1];
	z[9+2] += (unsigned long)a[9] * b[2];
	z[9+3] += (unsigned long)a[9] * b[3];
	z[9+4] += (unsigned long)a[9] * b[4];
	z[9+5] += (unsigned long)a[9] * b[5];
	z[9+6] += (unsigned long)a[9] * b[6];
	z[9+7] += (unsigned long)a[9] * b[7];
	z[9+8] += (unsigned long)a[9] * b[8];
	z[9+9] += (unsigned long)a[9] * b[9];
	z[9+10] += (unsigned long)a[9] * b[10];
	z[9+11] += (unsigned long)a[9] * b[11];
	z[9+12] += (unsigned long)a[9] * b[12];
	z[9+13] += (unsigned long)a[9] * b[13];

	z[10+0] += (unsigned long)a[10] * b[0];
	z[10+1] += (unsigned long)a[10] * b[1];
	z[10+2] += (unsigned long)a[10] * b[2];
	z[10+3] += (unsigned long)a[10] * b[3];
	z[10+4] += (unsigned long)a[10] * b[4];
	z[10+5] += (unsigned long)a[10] * b[5];
	z[10+6] += (unsigned long)a[10] * b[6];
	z[10+7] += (unsigned long)a[10] * b[7];
	z[10+8] += (unsigned long)a[10] * b[8];
	z[10+9] += (unsigned long)a[10] * b[9];
	z[10+10] += (unsigned long)a[10] * b[10];
	z[10+11] += (unsigned long)a[10] * b[11];
	z[10+12] += (unsigned long)a[10] * b[12];
	z[10+13] += (unsigned long)a[10] * b[13];

	z[11+0] += (unsigned long)a[11] * b[0];
	z[11+1] += (unsigned long)a[11] * b[1];
	z[11+2] += (unsigned long)a[11] * b[2];
	z[11+3] += (unsigned long)a[11] * b[3];
	z[11+4] += (unsigned long)a[11] * b[4];
	z[11+5] += (unsigned long)a[11] * b[5];
	z[11+6] += (unsigned long)a[11] * b[6];
	z[11+7] += (unsigned long)a[11] * b[7];
	z[11+8] += (unsigned long)a[11] * b[8];
	z[11+9] += (unsigned long)a[11] * b[9];
	z[11+10] += (unsigned long)a[11] * b[10];
	z[11+11] += (unsigned long)a[11] * b[11];
	z[11+12] += (unsigned long)a[11] * b[12];
	z[11+13] += (unsigned long)a[11] * b[13];

	z[12+0] += (unsigned long)a[12] * b[0];
	z[12+1] += (unsigned long)a[12] * b[1];
	z[12+2] += (unsigned long)a[12] * b[2];
	z[12+3] += (unsigned long)a[12] * b[3];
	z[12+4] += (unsigned long)a[12] * b[4];
	z[12+5] += (unsigned long)a[12] * b[5];
	z[12+6] += (unsigned long)a[12] * b[6];
	z[12+7] += (unsigned long)a[12] * b[7];
	z[12+8] += (unsigned long)a[12] * b[8];
	z[12+9] += (unsigned long)a[12] * b[9];
	z[12+10] += (unsigned long)a[12] * b[10];
	z[12+11] += (unsigned long)a[12] * b[11];
	z[12+12] += (unsigned long)a[12] * b[12];
	z[12+13] += (unsigned long)a[12] * b[13];

	z[13+0] += (unsigned long)a[13] * b[0];
	z[13+1] += (unsigned long)a[13] * b[1];
	z[13+2] += (unsigned long)a[13] * b[2];
	z[13+3] += (unsigned long)a[13] * b[3];
	z[13+4] += (unsigned long)a[13] * b[4];
	z[13+5] += (unsigned long)a[13] * b[5];
	z[13+6] += (unsigned long)a[13] * b[6];
	z[13+7] += (unsigned long)a[13] * b[7];
	z[13+8] += (unsigned long)a[13] * b[8];
	z[13+9] += (unsigned long)a[13] * b[9];
	z[13+10] += (unsigned long)a[13] * b[10];
	z[13+11] += (unsigned long)a[13] * b[11];
	z[13+12] += (unsigned long)a[13] * b[12];
	z[13+13] += (unsigned long)a[13] * b[13];
}

void unroll_mul15(unsigned int *a, unsigned int *b, unsigned long *z){
	
	
#ifdef DEBUG
	puts("Debug : called unroll_mul15");
#endif

	z[0] = 0;
	z[1] = 0;
	z[2] = 0;
	z[3] = 0;
	z[4] = 0;
	z[5] = 0;
	z[6] = 0;
	z[7] = 0;
	z[8] = 0;
	z[9] = 0;
	z[10] = 0;
	z[11] = 0;
	z[12] = 0;
	z[13] = 0;
	z[14] = 0;
	z[15] = 0;
	z[16] = 0;
	z[17] = 0;
	z[18] = 0;
	z[19] = 0;
	z[20] = 0;
	z[21] = 0;
	z[22] = 0;
	z[23] = 0;
	z[24] = 0;
	z[25] = 0;
	z[26] = 0;
	z[27] = 0;
	z[28] = 0;
	z[29] = 0;

	
	z[0+0] += (unsigned long)a[0] * b[0];
	z[0+1] += (unsigned long)a[0] * b[1];
	z[0+2] += (unsigned long)a[0] * b[2];
	z[0+3] += (unsigned long)a[0] * b[3];
	z[0+4] += (unsigned long)a[0] * b[4];
	z[0+5] += (unsigned long)a[0] * b[5];
	z[0+6] += (unsigned long)a[0] * b[6];
	z[0+7] += (unsigned long)a[0] * b[7];
	z[0+8] += (unsigned long)a[0] * b[8];
	z[0+9] += (unsigned long)a[0] * b[9];
	z[0+10] += (unsigned long)a[0] * b[10];
	z[0+11] += (unsigned long)a[0] * b[11];
	z[0+12] += (unsigned long)a[0] * b[12];
	z[0+13] += (unsigned long)a[0] * b[13];
	z[0+14] += (unsigned long)a[0] * b[14];

	z[1+0] += (unsigned long)a[1] * b[0];
	z[1+1] += (unsigned long)a[1] * b[1];
	z[1+2] += (unsigned long)a[1] * b[2];
	z[1+3] += (unsigned long)a[1] * b[3];
	z[1+4] += (unsigned long)a[1] * b[4];
	z[1+5] += (unsigned long)a[1] * b[5];
	z[1+6] += (unsigned long)a[1] * b[6];
	z[1+7] += (unsigned long)a[1] * b[7];
	z[1+8] += (unsigned long)a[1] * b[8];
	z[1+9] += (unsigned long)a[1] * b[9];
	z[1+10] += (unsigned long)a[1] * b[10];
	z[1+11] += (unsigned long)a[1] * b[11];
	z[1+12] += (unsigned long)a[1] * b[12];
	z[1+13] += (unsigned long)a[1] * b[13];
	z[1+14] += (unsigned long)a[1] * b[14];

	z[2+0] += (unsigned long)a[2] * b[0];
	z[2+1] += (unsigned long)a[2] * b[1];
	z[2+2] += (unsigned long)a[2] * b[2];
	z[2+3] += (unsigned long)a[2] * b[3];
	z[2+4] += (unsigned long)a[2] * b[4];
	z[2+5] += (unsigned long)a[2] * b[5];
	z[2+6] += (unsigned long)a[2] * b[6];
	z[2+7] += (unsigned long)a[2] * b[7];
	z[2+8] += (unsigned long)a[2] * b[8];
	z[2+9] += (unsigned long)a[2] * b[9];
	z[2+10] += (unsigned long)a[2] * b[10];
	z[2+11] += (unsigned long)a[2] * b[11];
	z[2+12] += (unsigned long)a[2] * b[12];
	z[2+13] += (unsigned long)a[2] * b[13];
	z[2+14] += (unsigned long)a[2] * b[14];

	z[3+0] += (unsigned long)a[3] * b[0];
	z[3+1] += (unsigned long)a[3] * b[1];
	z[3+2] += (unsigned long)a[3] * b[2];
	z[3+3] += (unsigned long)a[3] * b[3];
	z[3+4] += (unsigned long)a[3] * b[4];
	z[3+5] += (unsigned long)a[3] * b[5];
	z[3+6] += (unsigned long)a[3] * b[6];
	z[3+7] += (unsigned long)a[3] * b[7];
	z[3+8] += (unsigned long)a[3] * b[8];
	z[3+9] += (unsigned long)a[3] * b[9];
	z[3+10] += (unsigned long)a[3] * b[10];
	z[3+11] += (unsigned long)a[3] * b[11];
	z[3+12] += (unsigned long)a[3] * b[12];
	z[3+13] += (unsigned long)a[3] * b[13];
	z[3+14] += (unsigned long)a[3] * b[14];

	z[4+0] += (unsigned long)a[4] * b[0];
	z[4+1] += (unsigned long)a[4] * b[1];
	z[4+2] += (unsigned long)a[4] * b[2];
	z[4+3] += (unsigned long)a[4] * b[3];
	z[4+4] += (unsigned long)a[4] * b[4];
	z[4+5] += (unsigned long)a[4] * b[5];
	z[4+6] += (unsigned long)a[4] * b[6];
	z[4+7] += (unsigned long)a[4] * b[7];
	z[4+8] += (unsigned long)a[4] * b[8];
	z[4+9] += (unsigned long)a[4] * b[9];
	z[4+10] += (unsigned long)a[4] * b[10];
	z[4+11] += (unsigned long)a[4] * b[11];
	z[4+12] += (unsigned long)a[4] * b[12];
	z[4+13] += (unsigned long)a[4] * b[13];
	z[4+14] += (unsigned long)a[4] * b[14];

	z[5+0] += (unsigned long)a[5] * b[0];
	z[5+1] += (unsigned long)a[5] * b[1];
	z[5+2] += (unsigned long)a[5] * b[2];
	z[5+3] += (unsigned long)a[5] * b[3];
	z[5+4] += (unsigned long)a[5] * b[4];
	z[5+5] += (unsigned long)a[5] * b[5];
	z[5+6] += (unsigned long)a[5] * b[6];
	z[5+7] += (unsigned long)a[5] * b[7];
	z[5+8] += (unsigned long)a[5] * b[8];
	z[5+9] += (unsigned long)a[5] * b[9];
	z[5+10] += (unsigned long)a[5] * b[10];
	z[5+11] += (unsigned long)a[5] * b[11];
	z[5+12] += (unsigned long)a[5] * b[12];
	z[5+13] += (unsigned long)a[5] * b[13];
	z[5+14] += (unsigned long)a[5] * b[14];

	z[6+0] += (unsigned long)a[6] * b[0];
	z[6+1] += (unsigned long)a[6] * b[1];
	z[6+2] += (unsigned long)a[6] * b[2];
	z[6+3] += (unsigned long)a[6] * b[3];
	z[6+4] += (unsigned long)a[6] * b[4];
	z[6+5] += (unsigned long)a[6] * b[5];
	z[6+6] += (unsigned long)a[6] * b[6];
	z[6+7] += (unsigned long)a[6] * b[7];
	z[6+8] += (unsigned long)a[6] * b[8];
	z[6+9] += (unsigned long)a[6] * b[9];
	z[6+10] += (unsigned long)a[6] * b[10];
	z[6+11] += (unsigned long)a[6] * b[11];
	z[6+12] += (unsigned long)a[6] * b[12];
	z[6+13] += (unsigned long)a[6] * b[13];
	z[6+14] += (unsigned long)a[6] * b[14];

	z[7+0] += (unsigned long)a[7] * b[0];
	z[7+1] += (unsigned long)a[7] * b[1];
	z[7+2] += (unsigned long)a[7] * b[2];
	z[7+3] += (unsigned long)a[7] * b[3];
	z[7+4] += (unsigned long)a[7] * b[4];
	z[7+5] += (unsigned long)a[7] * b[5];
	z[7+6] += (unsigned long)a[7] * b[6];
	z[7+7] += (unsigned long)a[7] * b[7];
	z[7+8] += (unsigned long)a[7] * b[8];
	z[7+9] += (unsigned long)a[7] * b[9];
	z[7+10] += (unsigned long)a[7] * b[10];
	z[7+11] += (unsigned long)a[7] * b[11];
	z[7+12] += (unsigned long)a[7] * b[12];
	z[7+13] += (unsigned long)a[7] * b[13];
	z[7+14] += (unsigned long)a[7] * b[14];

	z[8+0] += (unsigned long)a[8] * b[0];
	z[8+1] += (unsigned long)a[8] * b[1];
	z[8+2] += (unsigned long)a[8] * b[2];
	z[8+3] += (unsigned long)a[8] * b[3];
	z[8+4] += (unsigned long)a[8] * b[4];
	z[8+5] += (unsigned long)a[8] * b[5];
	z[8+6] += (unsigned long)a[8] * b[6];
	z[8+7] += (unsigned long)a[8] * b[7];
	z[8+8] += (unsigned long)a[8] * b[8];
	z[8+9] += (unsigned long)a[8] * b[9];
	z[8+10] += (unsigned long)a[8] * b[10];
	z[8+11] += (unsigned long)a[8] * b[11];
	z[8+12] += (unsigned long)a[8] * b[12];
	z[8+13] += (unsigned long)a[8] * b[13];
	z[8+14] += (unsigned long)a[8] * b[14];

	z[9+0] += (unsigned long)a[9] * b[0];
	z[9+1] += (unsigned long)a[9] * b[1];
	z[9+2] += (unsigned long)a[9] * b[2];
	z[9+3] += (unsigned long)a[9] * b[3];
	z[9+4] += (unsigned long)a[9] * b[4];
	z[9+5] += (unsigned long)a[9] * b[5];
	z[9+6] += (unsigned long)a[9] * b[6];
	z[9+7] += (unsigned long)a[9] * b[7];
	z[9+8] += (unsigned long)a[9] * b[8];
	z[9+9] += (unsigned long)a[9] * b[9];
	z[9+10] += (unsigned long)a[9] * b[10];
	z[9+11] += (unsigned long)a[9] * b[11];
	z[9+12] += (unsigned long)a[9] * b[12];
	z[9+13] += (unsigned long)a[9] * b[13];
	z[9+14] += (unsigned long)a[9] * b[14];

	z[10+0] += (unsigned long)a[10] * b[0];
	z[10+1] += (unsigned long)a[10] * b[1];
	z[10+2] += (unsigned long)a[10] * b[2];
	z[10+3] += (unsigned long)a[10] * b[3];
	z[10+4] += (unsigned long)a[10] * b[4];
	z[10+5] += (unsigned long)a[10] * b[5];
	z[10+6] += (unsigned long)a[10] * b[6];
	z[10+7] += (unsigned long)a[10] * b[7];
	z[10+8] += (unsigned long)a[10] * b[8];
	z[10+9] += (unsigned long)a[10] * b[9];
	z[10+10] += (unsigned long)a[10] * b[10];
	z[10+11] += (unsigned long)a[10] * b[11];
	z[10+12] += (unsigned long)a[10] * b[12];
	z[10+13] += (unsigned long)a[10] * b[13];
	z[10+14] += (unsigned long)a[10] * b[14];

	z[11+0] += (unsigned long)a[11] * b[0];
	z[11+1] += (unsigned long)a[11] * b[1];
	z[11+2] += (unsigned long)a[11] * b[2];
	z[11+3] += (unsigned long)a[11] * b[3];
	z[11+4] += (unsigned long)a[11] * b[4];
	z[11+5] += (unsigned long)a[11] * b[5];
	z[11+6] += (unsigned long)a[11] * b[6];
	z[11+7] += (unsigned long)a[11] * b[7];
	z[11+8] += (unsigned long)a[11] * b[8];
	z[11+9] += (unsigned long)a[11] * b[9];
	z[11+10] += (unsigned long)a[11] * b[10];
	z[11+11] += (unsigned long)a[11] * b[11];
	z[11+12] += (unsigned long)a[11] * b[12];
	z[11+13] += (unsigned long)a[11] * b[13];
	z[11+14] += (unsigned long)a[11] * b[14];

	z[12+0] += (unsigned long)a[12] * b[0];
	z[12+1] += (unsigned long)a[12] * b[1];
	z[12+2] += (unsigned long)a[12] * b[2];
	z[12+3] += (unsigned long)a[12] * b[3];
	z[12+4] += (unsigned long)a[12] * b[4];
	z[12+5] += (unsigned long)a[12] * b[5];
	z[12+6] += (unsigned long)a[12] * b[6];
	z[12+7] += (unsigned long)a[12] * b[7];
	z[12+8] += (unsigned long)a[12] * b[8];
	z[12+9] += (unsigned long)a[12] * b[9];
	z[12+10] += (unsigned long)a[12] * b[10];
	z[12+11] += (unsigned long)a[12] * b[11];
	z[12+12] += (unsigned long)a[12] * b[12];
	z[12+13] += (unsigned long)a[12] * b[13];
	z[12+14] += (unsigned long)a[12] * b[14];

	z[13+0] += (unsigned long)a[13] * b[0];
	z[13+1] += (unsigned long)a[13] * b[1];
	z[13+2] += (unsigned long)a[13] * b[2];
	z[13+3] += (unsigned long)a[13] * b[3];
	z[13+4] += (unsigned long)a[13] * b[4];
	z[13+5] += (unsigned long)a[13] * b[5];
	z[13+6] += (unsigned long)a[13] * b[6];
	z[13+7] += (unsigned long)a[13] * b[7];
	z[13+8] += (unsigned long)a[13] * b[8];
	z[13+9] += (unsigned long)a[13] * b[9];
	z[13+10] += (unsigned long)a[13] * b[10];
	z[13+11] += (unsigned long)a[13] * b[11];
	z[13+12] += (unsigned long)a[13] * b[12];
	z[13+13] += (unsigned long)a[13] * b[13];
	z[13+14] += (unsigned long)a[13] * b[14];

	z[14+0] += (unsigned long)a[14] * b[0];
	z[14+1] += (unsigned long)a[14] * b[1];
	z[14+2] += (unsigned long)a[14] * b[2];
	z[14+3] += (unsigned long)a[14] * b[3];
	z[14+4] += (unsigned long)a[14] * b[4];
	z[14+5] += (unsigned long)a[14] * b[5];
	z[14+6] += (unsigned long)a[14] * b[6];
	z[14+7] += (unsigned long)a[14] * b[7];
	z[14+8] += (unsigned long)a[14] * b[8];
	z[14+9] += (unsigned long)a[14] * b[9];
	z[14+10] += (unsigned long)a[14] * b[10];
	z[14+11] += (unsigned long)a[14] * b[11];
	z[14+12] += (unsigned long)a[14] * b[12];
	z[14+13] += (unsigned long)a[14] * b[13];
	z[14+14] += (unsigned long)a[14] * b[14];
}

void unroll_mul16(unsigned int *a, unsigned int *b, unsigned long *z){
	
	
#ifdef DEBUG
	puts("Debug : called unroll_mul16");
#endif

	z[0] = 0;
	z[1] = 0;
	z[2] = 0;
	z[3] = 0;
	z[4] = 0;
	z[5] = 0;
	z[6] = 0;
	z[7] = 0;
	z[8] = 0;
	z[9] = 0;
	z[10] = 0;
	z[11] = 0;
	z[12] = 0;
	z[13] = 0;
	z[14] = 0;
	z[15] = 0;
	z[16] = 0;
	z[17] = 0;
	z[18] = 0;
	z[19] = 0;
	z[20] = 0;
	z[21] = 0;
	z[22] = 0;
	z[23] = 0;
	z[24] = 0;
	z[25] = 0;
	z[26] = 0;
	z[27] = 0;
	z[28] = 0;
	z[29] = 0;
	z[30] = 0;
	z[31] = 0;

	
	z[0+0] += (unsigned long)a[0] * b[0];
	z[0+1] += (unsigned long)a[0] * b[1];
	z[0+2] += (unsigned long)a[0] * b[2];
	z[0+3] += (unsigned long)a[0] * b[3];
	z[0+4] += (unsigned long)a[0] * b[4];
	z[0+5] += (unsigned long)a[0] * b[5];
	z[0+6] += (unsigned long)a[0] * b[6];
	z[0+7] += (unsigned long)a[0] * b[7];
	z[0+8] += (unsigned long)a[0] * b[8];
	z[0+9] += (unsigned long)a[0] * b[9];
	z[0+10] += (unsigned long)a[0] * b[10];
	z[0+11] += (unsigned long)a[0] * b[11];
	z[0+12] += (unsigned long)a[0] * b[12];
	z[0+13] += (unsigned long)a[0] * b[13];
	z[0+14] += (unsigned long)a[0] * b[14];
	z[0+15] += (unsigned long)a[0] * b[15];

	z[1+0] += (unsigned long)a[1] * b[0];
	z[1+1] += (unsigned long)a[1] * b[1];
	z[1+2] += (unsigned long)a[1] * b[2];
	z[1+3] += (unsigned long)a[1] * b[3];
	z[1+4] += (unsigned long)a[1] * b[4];
	z[1+5] += (unsigned long)a[1] * b[5];
	z[1+6] += (unsigned long)a[1] * b[6];
	z[1+7] += (unsigned long)a[1] * b[7];
	z[1+8] += (unsigned long)a[1] * b[8];
	z[1+9] += (unsigned long)a[1] * b[9];
	z[1+10] += (unsigned long)a[1] * b[10];
	z[1+11] += (unsigned long)a[1] * b[11];
	z[1+12] += (unsigned long)a[1] * b[12];
	z[1+13] += (unsigned long)a[1] * b[13];
	z[1+14] += (unsigned long)a[1] * b[14];
	z[1+15] += (unsigned long)a[1] * b[15];

	z[2+0] += (unsigned long)a[2] * b[0];
	z[2+1] += (unsigned long)a[2] * b[1];
	z[2+2] += (unsigned long)a[2] * b[2];
	z[2+3] += (unsigned long)a[2] * b[3];
	z[2+4] += (unsigned long)a[2] * b[4];
	z[2+5] += (unsigned long)a[2] * b[5];
	z[2+6] += (unsigned long)a[2] * b[6];
	z[2+7] += (unsigned long)a[2] * b[7];
	z[2+8] += (unsigned long)a[2] * b[8];
	z[2+9] += (unsigned long)a[2] * b[9];
	z[2+10] += (unsigned long)a[2] * b[10];
	z[2+11] += (unsigned long)a[2] * b[11];
	z[2+12] += (unsigned long)a[2] * b[12];
	z[2+13] += (unsigned long)a[2] * b[13];
	z[2+14] += (unsigned long)a[2] * b[14];
	z[2+15] += (unsigned long)a[2] * b[15];

	z[3+0] += (unsigned long)a[3] * b[0];
	z[3+1] += (unsigned long)a[3] * b[1];
	z[3+2] += (unsigned long)a[3] * b[2];
	z[3+3] += (unsigned long)a[3] * b[3];
	z[3+4] += (unsigned long)a[3] * b[4];
	z[3+5] += (unsigned long)a[3] * b[5];
	z[3+6] += (unsigned long)a[3] * b[6];
	z[3+7] += (unsigned long)a[3] * b[7];
	z[3+8] += (unsigned long)a[3] * b[8];
	z[3+9] += (unsigned long)a[3] * b[9];
	z[3+10] += (unsigned long)a[3] * b[10];
	z[3+11] += (unsigned long)a[3] * b[11];
	z[3+12] += (unsigned long)a[3] * b[12];
	z[3+13] += (unsigned long)a[3] * b[13];
	z[3+14] += (unsigned long)a[3] * b[14];
	z[3+15] += (unsigned long)a[3] * b[15];

	z[4+0] += (unsigned long)a[4] * b[0];
	z[4+1] += (unsigned long)a[4] * b[1];
	z[4+2] += (unsigned long)a[4] * b[2];
	z[4+3] += (unsigned long)a[4] * b[3];
	z[4+4] += (unsigned long)a[4] * b[4];
	z[4+5] += (unsigned long)a[4] * b[5];
	z[4+6] += (unsigned long)a[4] * b[6];
	z[4+7] += (unsigned long)a[4] * b[7];
	z[4+8] += (unsigned long)a[4] * b[8];
	z[4+9] += (unsigned long)a[4] * b[9];
	z[4+10] += (unsigned long)a[4] * b[10];
	z[4+11] += (unsigned long)a[4] * b[11];
	z[4+12] += (unsigned long)a[4] * b[12];
	z[4+13] += (unsigned long)a[4] * b[13];
	z[4+14] += (unsigned long)a[4] * b[14];
	z[4+15] += (unsigned long)a[4] * b[15];

	z[5+0] += (unsigned long)a[5] * b[0];
	z[5+1] += (unsigned long)a[5] * b[1];
	z[5+2] += (unsigned long)a[5] * b[2];
	z[5+3] += (unsigned long)a[5] * b[3];
	z[5+4] += (unsigned long)a[5] * b[4];
	z[5+5] += (unsigned long)a[5] * b[5];
	z[5+6] += (unsigned long)a[5] * b[6];
	z[5+7] += (unsigned long)a[5] * b[7];
	z[5+8] += (unsigned long)a[5] * b[8];
	z[5+9] += (unsigned long)a[5] * b[9];
	z[5+10] += (unsigned long)a[5] * b[10];
	z[5+11] += (unsigned long)a[5] * b[11];
	z[5+12] += (unsigned long)a[5] * b[12];
	z[5+13] += (unsigned long)a[5] * b[13];
	z[5+14] += (unsigned long)a[5] * b[14];
	z[5+15] += (unsigned long)a[5] * b[15];

	z[6+0] += (unsigned long)a[6] * b[0];
	z[6+1] += (unsigned long)a[6] * b[1];
	z[6+2] += (unsigned long)a[6] * b[2];
	z[6+3] += (unsigned long)a[6] * b[3];
	z[6+4] += (unsigned long)a[6] * b[4];
	z[6+5] += (unsigned long)a[6] * b[5];
	z[6+6] += (unsigned long)a[6] * b[6];
	z[6+7] += (unsigned long)a[6] * b[7];
	z[6+8] += (unsigned long)a[6] * b[8];
	z[6+9] += (unsigned long)a[6] * b[9];
	z[6+10] += (unsigned long)a[6] * b[10];
	z[6+11] += (unsigned long)a[6] * b[11];
	z[6+12] += (unsigned long)a[6] * b[12];
	z[6+13] += (unsigned long)a[6] * b[13];
	z[6+14] += (unsigned long)a[6] * b[14];
	z[6+15] += (unsigned long)a[6] * b[15];

	z[7+0] += (unsigned long)a[7] * b[0];
	z[7+1] += (unsigned long)a[7] * b[1];
	z[7+2] += (unsigned long)a[7] * b[2];
	z[7+3] += (unsigned long)a[7] * b[3];
	z[7+4] += (unsigned long)a[7] * b[4];
	z[7+5] += (unsigned long)a[7] * b[5];
	z[7+6] += (unsigned long)a[7] * b[6];
	z[7+7] += (unsigned long)a[7] * b[7];
	z[7+8] += (unsigned long)a[7] * b[8];
	z[7+9] += (unsigned long)a[7] * b[9];
	z[7+10] += (unsigned long)a[7] * b[10];
	z[7+11] += (unsigned long)a[7] * b[11];
	z[7+12] += (unsigned long)a[7] * b[12];
	z[7+13] += (unsigned long)a[7] * b[13];
	z[7+14] += (unsigned long)a[7] * b[14];
	z[7+15] += (unsigned long)a[7] * b[15];

	z[8+0] += (unsigned long)a[8] * b[0];
	z[8+1] += (unsigned long)a[8] * b[1];
	z[8+2] += (unsigned long)a[8] * b[2];
	z[8+3] += (unsigned long)a[8] * b[3];
	z[8+4] += (unsigned long)a[8] * b[4];
	z[8+5] += (unsigned long)a[8] * b[5];
	z[8+6] += (unsigned long)a[8] * b[6];
	z[8+7] += (unsigned long)a[8] * b[7];
	z[8+8] += (unsigned long)a[8] * b[8];
	z[8+9] += (unsigned long)a[8] * b[9];
	z[8+10] += (unsigned long)a[8] * b[10];
	z[8+11] += (unsigned long)a[8] * b[11];
	z[8+12] += (unsigned long)a[8] * b[12];
	z[8+13] += (unsigned long)a[8] * b[13];
	z[8+14] += (unsigned long)a[8] * b[14];
	z[8+15] += (unsigned long)a[8] * b[15];

	z[9+0] += (unsigned long)a[9] * b[0];
	z[9+1] += (unsigned long)a[9] * b[1];
	z[9+2] += (unsigned long)a[9] * b[2];
	z[9+3] += (unsigned long)a[9] * b[3];
	z[9+4] += (unsigned long)a[9] * b[4];
	z[9+5] += (unsigned long)a[9] * b[5];
	z[9+6] += (unsigned long)a[9] * b[6];
	z[9+7] += (unsigned long)a[9] * b[7];
	z[9+8] += (unsigned long)a[9] * b[8];
	z[9+9] += (unsigned long)a[9] * b[9];
	z[9+10] += (unsigned long)a[9] * b[10];
	z[9+11] += (unsigned long)a[9] * b[11];
	z[9+12] += (unsigned long)a[9] * b[12];
	z[9+13] += (unsigned long)a[9] * b[13];
	z[9+14] += (unsigned long)a[9] * b[14];
	z[9+15] += (unsigned long)a[9] * b[15];

	z[10+0] += (unsigned long)a[10] * b[0];
	z[10+1] += (unsigned long)a[10] * b[1];
	z[10+2] += (unsigned long)a[10] * b[2];
	z[10+3] += (unsigned long)a[10] * b[3];
	z[10+4] += (unsigned long)a[10] * b[4];
	z[10+5] += (unsigned long)a[10] * b[5];
	z[10+6] += (unsigned long)a[10] * b[6];
	z[10+7] += (unsigned long)a[10] * b[7];
	z[10+8] += (unsigned long)a[10] * b[8];
	z[10+9] += (unsigned long)a[10] * b[9];
	z[10+10] += (unsigned long)a[10] * b[10];
	z[10+11] += (unsigned long)a[10] * b[11];
	z[10+12] += (unsigned long)a[10] * b[12];
	z[10+13] += (unsigned long)a[10] * b[13];
	z[10+14] += (unsigned long)a[10] * b[14];
	z[10+15] += (unsigned long)a[10] * b[15];

	z[11+0] += (unsigned long)a[11] * b[0];
	z[11+1] += (unsigned long)a[11] * b[1];
	z[11+2] += (unsigned long)a[11] * b[2];
	z[11+3] += (unsigned long)a[11] * b[3];
	z[11+4] += (unsigned long)a[11] * b[4];
	z[11+5] += (unsigned long)a[11] * b[5];
	z[11+6] += (unsigned long)a[11] * b[6];
	z[11+7] += (unsigned long)a[11] * b[7];
	z[11+8] += (unsigned long)a[11] * b[8];
	z[11+9] += (unsigned long)a[11] * b[9];
	z[11+10] += (unsigned long)a[11] * b[10];
	z[11+11] += (unsigned long)a[11] * b[11];
	z[11+12] += (unsigned long)a[11] * b[12];
	z[11+13] += (unsigned long)a[11] * b[13];
	z[11+14] += (unsigned long)a[11] * b[14];
	z[11+15] += (unsigned long)a[11] * b[15];

	z[12+0] += (unsigned long)a[12] * b[0];
	z[12+1] += (unsigned long)a[12] * b[1];
	z[12+2] += (unsigned long)a[12] * b[2];
	z[12+3] += (unsigned long)a[12] * b[3];
	z[12+4] += (unsigned long)a[12] * b[4];
	z[12+5] += (unsigned long)a[12] * b[5];
	z[12+6] += (unsigned long)a[12] * b[6];
	z[12+7] += (unsigned long)a[12] * b[7];
	z[12+8] += (unsigned long)a[12] * b[8];
	z[12+9] += (unsigned long)a[12] * b[9];
	z[12+10] += (unsigned long)a[12] * b[10];
	z[12+11] += (unsigned long)a[12] * b[11];
	z[12+12] += (unsigned long)a[12] * b[12];
	z[12+13] += (unsigned long)a[12] * b[13];
	z[12+14] += (unsigned long)a[12] * b[14];
	z[12+15] += (unsigned long)a[12] * b[15];

	z[13+0] += (unsigned long)a[13] * b[0];
	z[13+1] += (unsigned long)a[13] * b[1];
	z[13+2] += (unsigned long)a[13] * b[2];
	z[13+3] += (unsigned long)a[13] * b[3];
	z[13+4] += (unsigned long)a[13] * b[4];
	z[13+5] += (unsigned long)a[13] * b[5];
	z[13+6] += (unsigned long)a[13] * b[6];
	z[13+7] += (unsigned long)a[13] * b[7];
	z[13+8] += (unsigned long)a[13] * b[8];
	z[13+9] += (unsigned long)a[13] * b[9];
	z[13+10] += (unsigned long)a[13] * b[10];
	z[13+11] += (unsigned long)a[13] * b[11];
	z[13+12] += (unsigned long)a[13] * b[12];
	z[13+13] += (unsigned long)a[13] * b[13];
	z[13+14] += (unsigned long)a[13] * b[14];
	z[13+15] += (unsigned long)a[13] * b[15];

	z[14+0] += (unsigned long)a[14] * b[0];
	z[14+1] += (unsigned long)a[14] * b[1];
	z[14+2] += (unsigned long)a[14] * b[2];
	z[14+3] += (unsigned long)a[14] * b[3];
	z[14+4] += (unsigned long)a[14] * b[4];
	z[14+5] += (unsigned long)a[14] * b[5];
	z[14+6] += (unsigned long)a[14] * b[6];
	z[14+7] += (unsigned long)a[14] * b[7];
	z[14+8] += (unsigned long)a[14] * b[8];
	z[14+9] += (unsigned long)a[14] * b[9];
	z[14+10] += (unsigned long)a[14] * b[10];
	z[14+11] += (unsigned long)a[14] * b[11];
	z[14+12] += (unsigned long)a[14] * b[12];
	z[14+13] += (unsigned long)a[14] * b[13];
	z[14+14] += (unsigned long)a[14] * b[14];
	z[14+15] += (unsigned long)a[14] * b[15];

	z[15+0] += (unsigned long)a[15] * b[0];
	z[15+1] += (unsigned long)a[15] * b[1];
	z[15+2] += (unsigned long)a[15] * b[2];
	z[15+3] += (unsigned long)a[15] * b[3];
	z[15+4] += (unsigned long)a[15] * b[4];
	z[15+5] += (unsigned long)a[15] * b[5];
	z[15+6] += (unsigned long)a[15] * b[6];
	z[15+7] += (unsigned long)a[15] * b[7];
	z[15+8] += (unsigned long)a[15] * b[8];
	z[15+9] += (unsigned long)a[15] * b[9];
	z[15+10] += (unsigned long)a[15] * b[10];
	z[15+11] += (unsigned long)a[15] * b[11];
	z[15+12] += (unsigned long)a[15] * b[12];
	z[15+13] += (unsigned long)a[15] * b[13];
	z[15+14] += (unsigned long)a[15] * b[14];
	z[15+15] += (unsigned long)a[15] * b[15];

}
