#include<stdio.h>
#include<stdlib.h>
#include<sys/time.h>

#include "zmm_mul.h"

//#define DEBUG

void mul_school(unsigned int *a, unsigned int *b, int len, unsigned long *z);
void doCarry(unsigned int *a, int len);
void doCarry_long(unsigned long *a, int len, unsigned int *z);

void unroll_mul9(unsigned int*, unsigned int*, unsigned long*);
void unroll_mul10(unsigned int*, unsigned int*, unsigned long*);
void unroll_mul11(unsigned int*, unsigned int*, unsigned long*);
void unroll_mul12(unsigned int*, unsigned int*, unsigned long*);
void unroll_mul13(unsigned int*, unsigned int*, unsigned long*);
void unroll_mul14(unsigned int*, unsigned int*, unsigned long*);
void unroll_mul15(unsigned int*, unsigned int*, unsigned long*);
void unroll_mul16(unsigned int*, unsigned int*, unsigned long*);

extern unsigned long *mid;
extern int cnt_mul;

void mul_karatsuba(unsigned int *a, unsigned int *b, int len, unsigned long *z){
	
	// this function will be implemented with AVX-512F
	// so this number will be changed.

	// up to 256n words (i.e., 8196 bits)
	if(len <= 16){
		mul_school(a, b, len, z);
		return;
	}
	
	unsigned int *a0 = &a[0];
	unsigned int *a1 = &a[len/2];
	unsigned int *b0 = &b[0];
	unsigned int *b1 = &b[len/2];
	unsigned int *v = (unsigned int*)&z[len * 5];
	unsigned int *w = (unsigned int*)&z[len * 5 + len /2];
	unsigned long *x1 = &z[len * 0];
	unsigned long *x2 = &z[len * 1];
	unsigned long *x3 = &z[len * 2];
	int i;

	// this is also to be vectorization
	v[0] = a1[0] + a0[0];
	v[1] = a1[1] + a0[1];
	v[2] = a1[2] + a0[2];
	v[3] = a1[3] + a0[3];
	v[4] = a1[4] + a0[4];
	v[5] = a1[5] + a0[5];
	v[6] = a1[6] + a0[6];
	v[7] = a1[7] + a0[7];
	v[8] = a1[8] + a0[8];
	w[0] = b1[0] + b0[0];
	w[1] = b1[1] + b0[1];
	w[2] = b1[2] + b0[2];
	w[3] = b1[3] + b0[3];
	w[4] = b1[4] + b0[4];
	w[5] = b1[5] + b0[5];
	w[6] = b1[6] + b0[6];
	w[7] = b1[7] + b0[7];
	w[8] = b1[8] + b0[8];
	for(i=9; i<len/2; i++){
		v[i] = a1[i] + a0[i];
		w[i] = b1[i] + b0[i];
	}

	
	mul_karatsuba(a0, b0, len/2, x1);

	mul_karatsuba(a1, b1, len/2, x2);

	mul_karatsuba(v, w, len/2, x3);
	
	x3[0] -= x1[0] + x2[0];
	x3[1] -= x1[1] + x2[1];
	x3[2] -= x1[2] + x2[2];
	x3[3] -= x1[3] + x2[3];
	x3[4] -= x1[4] + x2[4];
	x3[5] -= x1[5] + x2[5];
	x3[6] -= x1[6] + x2[6];
	x3[7] -= x1[7] + x2[7];
	x3[8] -= x1[8] + x2[8];
	x3[9] -= x1[9] + x2[9];
	x3[10] -= x1[10] + x2[10];
	x3[11] -= x1[11] + x2[11];
	x3[12] -= x1[12] + x2[12];
	x3[13] -= x1[13] + x2[13];
	x3[14] -= x1[14] + x2[14];
	x3[15] -= x1[15] + x2[15];
	x3[16] -= x1[16] + x2[16];
	x3[17] -= x1[17] + x2[17];
	for(i=18; i<len; i++) x3[i] -= x1[i] + x2[i];

	z[0+len/2] += x3[0];
	z[1+len/2] += x3[1];
	z[2+len/2] += x3[2];
	z[3+len/2] += x3[3];
	z[4+len/2] += x3[4];
	z[5+len/2] += x3[5];
	z[6+len/2] += x3[6];
	z[7+len/2] += x3[7];
	z[8+len/2] += x3[8];
	z[9+len/2] += x3[9];
	z[10+len/2] += x3[10];
	z[11+len/2] += x3[11];
	z[12+len/2] += x3[12];
	z[13+len/2] += x3[13];
	z[14+len/2] += x3[14];
	z[15+len/2] += x3[15];
	z[16+len/2] += x3[16];
	z[17+len/2] += x3[17];
	for(i=18; i<len; i++) z[i+len/2] += x3[i];

}


void mul_school(unsigned int *a, unsigned int *b, int len, unsigned long *z){
	
	switch(len){
		
		case 9:  unroll_mul9(a, b, z);  break;
		case 10: unroll_mul10(a, b, z); break;
		case 11: unroll_mul11(a, b, z); break;
		case 12: unroll_mul12(a, b, z); break;
		case 13: unroll_mul13(a, b, z); break;
		case 14: unroll_mul14(a, b, z); break;
		case 15: unroll_mul15(a, b, z); break;
		case 16: unroll_mul16(a, b, z); break;

		default:
			printf("error: len = %d\n", len);
	}

/*
	int i, j;

	for(i=18; i<len*2; i++) z[i] = 0;

	for(i=0; i<len; i++){
		for(j=0; j<len; j++){
			z[i+j] += (unsigned long)a[i] * b[j];
#ifdef COUNT
			cnt_mul++;
#endif
		}
	}
*/
	// debug
	//for(i=len*2-1; i>=0; i--) printf("%lx ", z[i]);
}

void doCarry_long(unsigned long *a, int len, unsigned int *z){
	
	unsigned long cr = 0;
	unsigned long tmp;
	int i;

/*
	// for debug
	for(i=0; i<len; i++){
		printf("debug: a[%d] = %lx\n", i, a[i]);
	}
*/
	for(i=0; i<len; i++){
		tmp = a[i] + cr;
		z[i] = (unsigned int)(tmp & 0xfffffff);
		cr = tmp >> 28;
	}

	//if(cr != 0) printf("Overflow! %d\n", cr);
}


void doCarry(unsigned int *a, int len){
	
	int cr = 0;
	int i;

	for(i=0; i<len; i++){
		a[i] += cr;
		cr = a[i] >> 28;
		a[i] &= 0xfffffff;
	}

	if(cr != 0) printf("Overflow! %d\n", cr);
}


void display(unsigned int *a, unsigned  int *b, int D_MAX, unsigned int *z)
{
    int i;  // LOOPインデックス

    // 上位桁の不要な 0 を削除するために、配列サイズを取得
    int aLen = D_MAX, bLen = D_MAX, zLen = D_MAX * 2;
    while (a[aLen - 1] == 0) if (a[aLen - 1] == 0) aLen--;
    while (b[bLen - 1] == 0) if (b[bLen - 1] == 0) bLen--;
    while (z[zLen - 1] == 0) if (z[zLen - 1] == 0) zLen--;

    // a 値
    printf("a =\n0x");
    for (i = aLen - 1; i >= 0; i--) {
        printf("%08x", a[i]);
    }
    printf("\n");

    // b 値
    printf("b =\n0x");
    for (i = bLen - 1; i >= 0; i--) {
        printf("%08x", b[i]);
    }
    printf("\n");

    // z 値
    printf("z =\n0x");
    for (i = zLen - 1; i >= 0; i--) {
        printf("%08x ", z[i]);
    }
    printf("\n\n");


#ifdef DEBUG
	puts("python code:");
	printf("hex(0x");
    for (i = aLen - 1; i >= 0; i--) printf("%08x", a[i]);
	printf(" * 0x");
    for (i = bLen - 1; i >= 0; i--) printf("%08x", b[i]);
	printf(") == '0x");
    for (i = zLen - 1; i >= 0; i--) printf("%08x", z[i]);
	printf("'");
	puts("");
#endif


#ifdef TEST
    printf("Counts of multiply / 1 loop = %d\n", cnt_mul);     // 乗算回数
    printf("Total time of all loops     = %f seconds\n", tt);  // 処理時間
#endif
}
