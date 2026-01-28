#include <stdio.h>
#include <bitset>

#define OPTIMIZE __attribute__((optimize("O0")))

const int reps = 100000000;

void test1()
{
    bool array[100];
    for (int i = 0; i < 100; i++) {
        array[i] = true;
    }
}

int main(int argc, char **argv)
{
    int j;
    printf("\"Bit sets\"");
   for (j=0; j<reps; j++){
    test1();
   }
}