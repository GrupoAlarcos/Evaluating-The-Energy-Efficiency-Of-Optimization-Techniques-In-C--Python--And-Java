#include <stdio.h>
#include <math.h>
#define OPTIMIZE __attribute__((optimize("O0")))

const int reps = 100000000;

int OPTIMIZE divide (int i, int j) {
   return i / j;
}

void test1(int i, int j){
   divide(i, j);
}

int main(int argc, char **argv) {

   int z;
   unsigned int dividend = 100000000;
   unsigned int exponent = 10;

   unsigned int divisor = pow(2, exponent);
   
   printf("\"Division by a power-of-two denominator\"");
   
   for (z=0; z<reps; z++){
   test1(dividend, divisor);
   }
}