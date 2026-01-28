#include <stdio.h>
#define OPTIMIZE __attribute__((optimize("O0")))

const int reps = 100000000;
int OPTIMIZE multiply (int i, int j) {
   return i * j;
}

void test1(int i, int j) {
   multiply(i, j);
}

int main(int argc, char **argv) {
	int z;

   unsigned int factor1 = 100000000;
   unsigned int factor2 = 10;
   
   printf("\"Multiplication by a power-of-two factor\"");
   for (z=0; z<reps; z++){
   test1(factor1, factor2);
   }
}