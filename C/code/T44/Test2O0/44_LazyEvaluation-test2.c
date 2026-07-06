#include <stdio.h>
#include <stdbool.h>
#define OPTIMIZE __attribute__((optimize("O0")))

const int reps = 100000000;

bool OPTIMIZE test2(bool A, bool B)
{
   bool C = A || B;
   bool D = B && A;
   return C;
}

int main(int argc, char **argv)
{
   int z;
   int i, j;
   bool A = true, B = false;
   for (z = 0; z < reps; z++)
   {
      test2(A, B);
   }
   return 0;
}