#include <stdio.h>
#define OPTIMIZE __attribute__((optimize("O3")))

const int reps = 100000000;
void OPTIMIZE test1(int N) {
    int a=1;
    for(int i=0; i<N;i++) ++a;
}

int main(int argc, char **argv) {

   int z;
   int N=50;

   printf("\"Do-while vs. for loop\"");
   for (z=0; z<reps; z++){
   test1(N);
   }

}