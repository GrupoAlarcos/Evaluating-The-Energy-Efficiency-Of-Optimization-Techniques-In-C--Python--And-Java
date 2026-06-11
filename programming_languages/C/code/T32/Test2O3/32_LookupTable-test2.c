#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define OPTIMIZE __attribute__((optimize("O3")))

const int reps = 100000000;

unsigned int OPTIMIZE test2(unsigned int b1, unsigned int b2, unsigned int b3, unsigned int c, unsigned int d, unsigned int e, unsigned int f, unsigned int lookup[])
{
   return lookup[b1 * 4 + b2 * 2 + b3];
}

int main()
{
    int samples = 100;
    unsigned int f = 4, e = 3, d = 2, c = 1;
    unsigned int lookup[] = {f, e, d, d, c, c, c, c};
    unsigned char b1s[samples];
    unsigned char b2s[samples];
    unsigned char b3s[samples];
    srand(time(NULL));
    for (int i = 0; i < samples; i++)
    {
        b1s[i] = rand() & 1;
        b2s[i] = rand() & 1;
        b3s[i] = rand() & 1;
    }
    for (int i = 0; i < reps / samples; i++)
    {
        for (int j = 0; j < samples; j++)
        {
            test2(b1s[j], b2s[j], b3s[j], c, d, e, f, lookup);
        }
    }
    return 0;
}