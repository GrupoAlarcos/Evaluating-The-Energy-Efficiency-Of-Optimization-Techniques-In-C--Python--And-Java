#include <stdio.h>
#define OPTIMIZE __attribute__((optimize("O3")))

const int reps = 100000000;

long OPTIMIZE multiply(int i, int j)
{
   return (long)i * j;
}

long test1(int i, int j)
{
   return multiply(i, j);
}

int main(int argc, char **argv)
{
   int z;
   int factor1 = 100000000;
   int factor2 = 1024;
   for (z = 0; z < reps; z++)
   {
      test1(factor1, factor2);
   }
   return 0;
}