#include <stdio.h>
#define OPTIMIZE __attribute__((optimize("O3")))

const int reps = 100000000;

typedef struct {
  unsigned int bitA : 1;
  unsigned int bitB : 1;
  unsigned int bitC : 1;
  unsigned int bitD : 1;
} BitField;

typedef struct {
  unsigned int bits;
} IntegerBitField;

BitField bf;
BitField *pbf;
IntegerBitField ibf;
IntegerBitField *pibf;

unsigned int OPTIMIZE getBitField(const BitField *d) {
  return (d->bitA << 0) |
         (d->bitB << 1) |
         (d->bitC << 2) |
         (d->bitD << 3);
}

unsigned int OPTIMIZE getIntegerBitField(const IntegerBitField *d) {
  return d->bits;
}

unsigned int test1() {
   pbf = &bf;
   return getBitField(pbf);
}

int main(int argc, char **argv) {
   
   int j;
   printf("\"Bit fields\"");
   for (j=0; j<reps; j++){
	test1();
   }
   printf("\n");
   
}