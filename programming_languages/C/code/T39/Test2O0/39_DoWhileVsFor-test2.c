#include <stdio.h>
#define OPTIMIZE __attribute__((optimize("O0")))

const int reps = 100000000;
void OPTIMIZE test2(int N) {
    int a=1,i=0;
    do {
        ++a;
        i++;
    } while(i<N);
}

int main(int argc, char **argv) {

   int z;
   int N=50;

   printf("\"Do-while vs. for loop\"");
   for (z=0; z<reps; z++){
   test2(N);
   }
   
}