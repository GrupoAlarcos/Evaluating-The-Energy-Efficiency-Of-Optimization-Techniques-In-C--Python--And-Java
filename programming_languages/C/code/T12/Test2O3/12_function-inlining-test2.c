#include <stdio.h>
#define OPTIMIZE __attribute__((optimize("O3")))

const int reps = 100000000;

int OPTIMIZE sub2(int x, int y)
{
   return x + -y;
}

int test2(int x, int y)
{
   return sub2(x, y);
}

int main(int argc, char **argv)
{
   int z;
   int minuend = 10;
   int subtrahend = 5;
   for (z = 0; z < reps; z++)
   {
      test2(minuend, subtrahend);
   }
   return 0;
}