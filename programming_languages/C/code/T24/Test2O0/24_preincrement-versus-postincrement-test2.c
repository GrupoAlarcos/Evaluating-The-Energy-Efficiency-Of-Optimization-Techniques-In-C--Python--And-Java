#include <stdio.h>
#define OPTIMIZE __attribute__((optimize("O0")))

const int reps = 100000000;

void OPTIMIZE test2(int array[], int N){
   for (int i=0; i<N;){
      array[i] = ++i;
   }
}

int main(int argc, char **argv) {
   int z;
	
   int N = 200;
   int array[N+1];

   printf("\"Pre-increment versus post-increment\"");
   for (z=0; z<reps; z++){
   test2(array, N);
   }
}