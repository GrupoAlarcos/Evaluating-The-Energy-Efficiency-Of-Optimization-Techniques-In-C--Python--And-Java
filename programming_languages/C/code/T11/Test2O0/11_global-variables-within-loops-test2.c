#include <stdio.h>
#define OPTIMIZE __attribute__((optimize("O0")))

const int reps = 100000000;
int sum;

void initializeArray(int N, int a[])
{
   for (int i = 0; i < N; i++)
   {
      a[i] = i;
   }
}

int OPTIMIZE test2(int N, int a[])
{
   int t = 0;
   for (int i = 0; i < N; i++)
      t += a[i];
   sum = t;
   return sum;
}

int main(int argc, char **argv)
{
   int z;
   int N = 10;
   int a[N];
   initializeArray(N, a);
   for (z = 0; z < reps; z++)
   {
      test2(N, a);
   }
   return 0;
}