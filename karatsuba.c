#include<stdio.h>
#include<stdlib.h>
#include<sys/time.h>

#include "zmm_mul.h"

void mul_school(unsigned int *a, unsigned int *b, int len, unsigned int *z);
void doCarry(unsigned int *a, int len);

void mul_karatsuba(unsigned int *a, unsigned int *b, int len, unsigned int *z){
	
	
	// this function will be implemented with AVX-512F
	// so this number will be changed.
	if(len <= 8){
		mul_school(a, b, len, z);
		return;
	}
	
	puts("hoge");

	unsigned int *a0 = &a[0];
	unsigned int *a1 = &a[len/2];
	unsigned int *b0 = &b[0];
	unsigned int *b1 = &b[len/2];
	unsigned int *v = &z[len * 5];
	unsigned int *w = &z[len * 5 + len /2];
	unsigned int *x1 = &z[len * 0];
	unsigned int *x2 = &z[len * 1];
	unsigned int *x3 = &z[len * 2];
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


void mul_school(unsigned int *a, unsigned int *b, int len, unsigned int *z){
	
	int i, j;

	//for(i=0; i<len*2; i++) z[i] = 0;
	unsigned int tmp = 0;

	for(i=0; i<len; i++){
		for(j=0; j<len; j++){
			tmp = z[j+i];
			z[j+i] += a[i] * b[j];

			if(tmp > z[j+i]){
				printf("Overflow: outer=%d, inner=%d, tmp=%x, z[j+i]=%x\n", i, j, tmp, z[i+j]);
				z[i+j+2]++;
			}
#ifdef TEST
			cnt_mul++;
#endif
		}
	}


/*
	unsigned long tmp = 0;
	unsigned long carry = 0;
	for(j=0; j<len; j++){
		//carry = 0;
		for(i=0; i<len; i++){
			tmp = (unsigned long)z[i+j] + a[i] * b[j] + carry;

			z[i+j] = LoWord(tmp);
			carry = HiWord(tmp);
			printf("%lu", carry);
		}
		z[i+j] = carry;
		puts("");
	}
*/
	for(i=len*2-1; i>=0; i--) printf("%x ", z[i]);
	puts("");
}


void doCarry(unsigned int *a, int len){
	
	int cr = 0;
	int i;

	for(i=0; i<len; i++){
		a[i] += cr;
/*		
		if(a[i] < 0){
			cr = -(-(a[i] + 1) / 10 + 1);
		}
		else{
			cr = a[i] / 10;
		}
*/
		// ビット削りの10進数版
		cr = a[i] >> 16;
		a[i] &= 0xffff;
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
        printf("%04x", a[i]);
        //if ((aLen - i) % 10 == 0) printf(" ");
        //if ((aLen - i) % 50 == 0) printf("\n");
    }
    printf("\n");

    // b 値
    printf("b =\n0x");
    for (i = bLen - 1; i >= 0; i--) {
        printf("%04x", b[i]);
        //if ((bLen - i) % 10 == 0) printf(" ");
        //if ((bLen - i) % 50 == 0) printf("\n");
    }
    printf("\n");

    // z 値
    printf("z =\n0x");
    for (i = zLen - 1; i >= 0; i--) {
        printf("%04x ", z[i]);
        //if ((zLen - i) % 10 == 0) printf(" ");
        //if ((zLen - i) % 50 == 0) printf("\n");
    }
    printf("\n");
	puts("0x2dee 2d57 82dc 4666 711c d9c1 52c6 5ac4 f76c a8f8 31e3 887f dd78 685e 8acc a437");
    printf("\n");
	
#ifdef TEST
    printf("Counts of multiply / 1 loop = %d\n", cnt_mul);     // 乗算回数
    printf("Total time of all loops     = %f seconds\n", tt);  // 処理時間
#endif
}
