typedef struct zmm_mul{
	unsigned int *n;
	size_t size;
}zmm_t;

#define PTR(x) ((x).n)
#define SIZ(x) ((x).size)

#define LoWord(tmp)  tmp & 0xffffffff
#define HiWord(tmp) (tmp & 0xffffffff00000000) >> 32
