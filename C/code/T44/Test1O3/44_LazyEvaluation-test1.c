#include <stdio.h>
#include <stdbool.h>
#define OPTIMIZE __attribute__((optimize("O3")))

const int reps = 100000000;

bool OPTIMIZE test1(bool A, bool B)
{
   bool C = B || A;
   bool D = A && B;
   return C;
}

int main(int argc, char **argv)
{
   int z;
   int i, j;
   bool A = true, B = false;
   for (z = 0; z < reps; z++)
   {
      test1(A, B);
   }
   return 0;
}