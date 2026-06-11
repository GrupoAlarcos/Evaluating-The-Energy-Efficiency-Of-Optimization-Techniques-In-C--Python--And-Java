#include <stdio.h>
#define OPTIMIZE __attribute__((optimize("O0")))

const int reps = 100000000;

int *plist;

void OPTIMIZE inicialize(int *list, int N)
{
  for (int i = 0; i < N; i++)
  {
    list[i] = i;
  }
}

int OPTIMIZE search2(int *list, int N, int want)
{
  int last = list[N - 1];
  list[N - 1] = want;
  int i = 0;
  while (list[i] != want)
  {
    i++;
  }
  list[N - 1] = last;
  if (i < (N - 1) || last == want)
    return i;

  return -1;
}

int test2(int list[], int N)
{
  plist = list;
  return search2(plist, N, 98);
}

int main(int argc, char **argv)
{
  int z;
  int N = 100;
  int list[N];
  inicialize(list, N);
  for (z = 0; z < reps; z++)
  {
    test2(list, N);
  }
  return 0;
}