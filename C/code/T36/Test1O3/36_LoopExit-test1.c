#include <stdio.h>
#include <stdbool.h>
#define OPTIMIZE __attribute__((optimize("O3")))

const int reps = 100000000;

void initialize(int *array, int N)
{
    for (int i = 0; i < N; i++)
        array[i] = 0;
}

int OPTIMIZE test1(int array[], int N, int val)
{
    bool flag = true;
    int i;
    for (i = 0; (i < N) && (flag); i++)
    {
        if (array[i] >= val)
            flag = false;
    }
    return i;
}

int main(int argc, char **argv)
{
    int z;
    int N = 50;
    int val = 25;
    int array[N];
    initialize(array, N);
    array[N / 2] = val;
    for (z = 0; z < reps; z++)
    {
        test1(array, N, val);
    }
    return 0;
}