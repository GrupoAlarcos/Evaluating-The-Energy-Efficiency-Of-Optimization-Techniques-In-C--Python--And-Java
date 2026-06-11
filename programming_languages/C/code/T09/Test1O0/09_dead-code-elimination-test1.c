#include <stdio.h>
#define OPTIMIZE __attribute__((optimize("O0")))

const int reps = 100000000;

int global;

void OPTIMIZE test1()
{
  int i;
  i = 1;
  global = 1;
  global = 2;
  return;
  global = 3;
}

int main(int argc, char **argv)
{
  int z;
  for (z = 0; z < reps; z++)
  {
    test1();
  }
  return 0;
}