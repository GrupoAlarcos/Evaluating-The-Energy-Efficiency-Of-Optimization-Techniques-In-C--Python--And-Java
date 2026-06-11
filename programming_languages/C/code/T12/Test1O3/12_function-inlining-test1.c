#include <stdio.h>
#define OPTIMIZE __attribute__((optimize("O3")))

const int reps = 100000000;

int OPTIMIZE add(int x, int y)
{
   return x + y;
}

int OPTIMIZE sub(int x, int y)
{
   return add(x, -y);
}

int test1(int x, int y)
{
   return sub(x, y);
}

int main(int argc, char **argv)
{
   int z;
   int minuend = 10;
   int subtrahend = 5;
   for (z = 0; z < reps; z++)
   {
      test1(minuend, subtrahend);
   }
   return 0;
}