#include <stdio.h>
#define OPTIMIZE __attribute__((optimize("O3")))

#define N 50

const int reps = 100000000;

void OPTIMIZE test1() {

   int array[N];
   for(int i=0;i<N;i++) array[i]=0;

}

int main(int argc, char **argv) {

   int z;
   printf("\"Initialization loops\"");
   
   for (z=0; z<reps; z++){
   test1();
   }
   
}