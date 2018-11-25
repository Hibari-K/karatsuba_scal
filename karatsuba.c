#include<stdio.h>
#include<stdlib.h>
#include<sys/time.h>

#include "zmm_mul.h"

//#define DEBUG


void mul_school(unsigned int *a, unsigned int *b, int len, unsigned long *z);
void doCarry(unsigned int *a, int len);
void doCarry_long(unsigned long *a, int len, unsigned int *z);

//unsigned long mid[1024];
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
	for(i=0; i<len/2; i++){
		v[i] = a1[i] + a0[i];
		w[i] = b1[i] + b0[i];
	}

	
	mul_karatsuba(a0, b0, len/2, x1);

	mul_karatsuba(a1, b1, len/2, x2);

	mul_karatsuba(v, w, len/2, x3);

	for(i=0; i<len; i++) x3[i] -= x1[i] + x2[i];

	for(i=0; i<len; i++) z[i+len/2] += x3[i];

}


void mul_school(unsigned int *a, unsigned int *b, int len, unsigned long *z){
	
	int i, j;

	//unsigned long tmp = 0;
	//unsigned long carry = 0;
	for(i=0; i<len*2; i++) z[i] = 0;

	for(j=0; j<len; j++){
		//carry = 0;
		for(i=0; i<len; i++){
			z[i+j] += (unsigned long)a[i] * b[j];
#ifdef COUNT
			cnt_mul++;
#endif
		}
	}
	
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
