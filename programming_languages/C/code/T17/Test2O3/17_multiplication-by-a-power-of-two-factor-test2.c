#include <stdio.h>
#define OPTIMIZE __attribute__((optimize("O3")))

const int reps = 100000000;
int OPTIMIZE multiply2 (unsigned int i, unsigned int j) {
   return i << j;
}

void test2(unsigned int i, unsigned int j) {
   multiply2(i, j);
}

int main(int argc, char **argv) {
	int z;
   unsigned int factor1 = 100000000;
   unsigned int factor2 = 10;
   
   printf("\"Multiplication by a power-of-two factor\"");
   for (z=0; z<reps; z++){
   test2(factor1, factor2);
   }
   
}