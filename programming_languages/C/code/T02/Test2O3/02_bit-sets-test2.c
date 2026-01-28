#include <stdio.h>
#include <bitset>

#define OPTIMIZE __attribute__((optimize("O3")))

const int reps = 100000000;

void test2() {
    std::bitset<100> bitset;
    bitset.set();
}

int main(int argc, char **argv)
{
    int j;
    printf("\"Bit sets\"");
   for (j=0; j<reps; j++){
    test2();
   }
    
}