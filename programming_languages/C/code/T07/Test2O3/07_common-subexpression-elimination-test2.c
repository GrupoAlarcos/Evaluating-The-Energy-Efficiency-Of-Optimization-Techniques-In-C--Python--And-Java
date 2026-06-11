#include <stdio.h>
#include <math.h>
#define OPTIMIZE __attribute__((optimize("O3")))

const int reps = 100000000;
int i, j;

int OPTIMIZE test2(int x)
{
    int aux = x + sqrt(16384);
    i = aux + 1;
    j = aux;
    return i;
}

int main(int argc, char **argv)
{
    int z;
    int x = 100;
    for (z = 0; z < reps; z++)
    {
        test2(x);
    }
    return 0;
}