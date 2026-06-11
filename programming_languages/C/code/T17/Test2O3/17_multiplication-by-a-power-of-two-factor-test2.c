#include <stdio.h>
#define OPTIMIZE __attribute__((optimize("O3")))

const int reps = 100000000;

long OPTIMIZE multiply2(unsigned int i, unsigned int j)
{
   return (long)i << j;
}

long test2(unsigned int i, unsigned int j)
{
   return multiply2(i, j);
}

int main(int argc, char **argv)
{
   int z;
   unsigned int factor1 = 100000000;
   unsigned int factor2 = 10;
   for (z = 0; z < reps; z++)
   {
      test2(factor1, factor2);
   }
   return 0;
}