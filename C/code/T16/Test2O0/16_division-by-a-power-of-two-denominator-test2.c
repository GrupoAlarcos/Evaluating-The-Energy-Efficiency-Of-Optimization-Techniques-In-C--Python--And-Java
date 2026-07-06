#include <stdio.h>
#include <math.h>
#define OPTIMIZE __attribute__((optimize("O0")))

const int reps = 100000000;

int OPTIMIZE divide2(unsigned int i, unsigned int j)
{
   return i >> j;
}

int test2(unsigned int i, unsigned int j)
{
   return divide2(i, j);
}

int main(int argc, char **argv)
{
   int z;
   unsigned int dividend = 100000000;
   unsigned int exponent = 10;
   unsigned int divisor = pow(2, exponent);
   for (z = 0; z < reps; z++)
   {
      test2(dividend, exponent);
   }
   return 0;
}