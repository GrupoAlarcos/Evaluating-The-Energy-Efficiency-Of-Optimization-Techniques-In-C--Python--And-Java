#include <stdio.h>
#define OPTIMIZE __attribute__((optimize("O0")))

const int reps = 100000000;

void initialize2(int N, int A[50][50])
{
   for (int i = 0; i < N; ++i)
   {
      for (int j = 0; j < N; ++j)
      {
         A[i][j] = 0;
      }
   }
}

void OPTIMIZE test2(int N, int A[50][50])
{
   int j = 0;
   for (int i = 1; i < N; ++i)
   {
      j = 0;
      while (j < i)
      {
         A[i][j] = 3;
         j++;
      }
   }
}

int main(int argc, char **argv)
{
   int z;
   int A[50][50];
   for (z = 0; z < reps; z++)
   {
      test2(50, A);
   }
   return 0;
}