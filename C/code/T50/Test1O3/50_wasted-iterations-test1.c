#include <stdio.h>
#define OPTIMIZE __attribute__((optimize("O3")))

const int reps = 100000000;

void initialize1(int N, int A[50][50])
{
   for (int i = 0; i < N; ++i)
   {
      for (int j = 0; j < N; ++j)
      {
         A[i][j] = 0;
      }
   }
}

void OPTIMIZE test1(int N, int A[50][50])
{
   for (int i = 0; i < N; ++i)
   {
      for (int j = 0; j < N; ++j)
      {
         if (j < i)
         {
            A[i][j] = 3;
         }
      }
   }
}

int main(int argc, char **argv)
{
   int z;
   int A[50][50];
   initialize1(50, A);
   for (z = 0; z < reps; z++)
   {
      test1(50, A);
   }
   return 0;
}