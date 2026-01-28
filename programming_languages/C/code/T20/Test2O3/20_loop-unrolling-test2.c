#include <stdio.h>
#define OPTIMIZE __attribute__((optimize("O3")))

const int reps = 100000000;
void OPTIMIZE initialization2(int array[], int N){
   int i;
   for (i=0; i<N; i+=5){
     array[i]   = 0;
     array[i+1] = 0;
     array[i+2] = 0;
     array[i+3] = 0;
     array[i+4] = 0;
   }
}

void test2(int array[], int N){
    initialization2(array, N);
}

int main(int argc, char **argv) {
	int z;
   
   int N = 50;
   int array[N];

   printf("\"Loop unrolling\"");
   for (z=0; z<reps; z++){
   test2(array, N);
   }
   
}