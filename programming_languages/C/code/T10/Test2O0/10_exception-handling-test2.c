#include <stdio.h>
#include <exception>
#define OPTIMIZE __attribute__((optimize("O0")))

const int reps = 100000000;
using namespace std;

int OPTIMIZE test2()
{
   int num = 100;
   int result = 0;
   for (int i = 0; i < 1; i++)
   {
      if (num == 100)
      {
         result = 1;
      }
   }
   return result;
}

int main(int argc, char **argv)
{
   int z;
   for (z = 0; z < reps; z++)
   {
      test2();
   }
   return 0;
}