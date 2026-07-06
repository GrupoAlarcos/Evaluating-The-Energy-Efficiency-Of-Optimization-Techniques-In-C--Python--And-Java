#include <stdio.h>
#include <math.h>
#define OPTIMIZE __attribute__((optimize("O3")))

const int reps = 100000000;
int i, j;

int OPTIMIZE test1(int x)
{
    i = x + sqrt(16384) + 1;
    j = x + sqrt(16384);
    return i;
}

int main(int argc, char **argv)
{
    int z;
    int x = 100;
    for (z = 0; z < reps; z++)
    {
        test1(x);
    }
    return 0;
}