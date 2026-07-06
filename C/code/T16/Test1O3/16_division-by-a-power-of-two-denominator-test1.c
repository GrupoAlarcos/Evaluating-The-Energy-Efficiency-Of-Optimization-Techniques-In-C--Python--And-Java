#include <stdio.h>
#include <math.h>
#define OPTIMIZE __attribute__((optimize("O3")))

const int reps = 100000000;

int OPTIMIZE divide(int i, int j)
{
   return i / j;
}

int test1(int i, int j)
{
   return divide(i, j);
}

int main(int argc, char **argv)
{
   int z;
   unsigned int dividend = 100000000;
   unsigned int exponent = 10;
   unsigned int divisor = pow(2, exponent);
   for (z = 0; z < reps; z++)
   {
      test1(dividend, divisor);
   }
   return 0;
}