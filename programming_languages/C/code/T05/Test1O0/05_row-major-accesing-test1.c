#include <stdio.h>

#define OPTIMIZE __attribute__((optimize("O0")))

const int reps = 100000000;

void OPTIMIZE test1(int N, int array[60][60])
{
   for (int j = 0; j < N; j++)
      for (int i = 0; i < N; i++)
         array[i][j] = 0;
}

int main(int argc, char **argv)
{
   int array[60][60];
   for (int j = 0; j < reps; j++)
   {
      test1(60, array);
   }
   return 0;
}