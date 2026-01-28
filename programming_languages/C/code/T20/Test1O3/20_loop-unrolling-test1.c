#include <stdio.h>
#define OPTIMIZE __attribute__((optimize("O3")))

const int reps = 100000000;
void OPTIMIZE initialization1(int array[], int N){
   int i;
   for (i=0; i<N; i++){
     array[i] = 0;
   }
}

void test1(int array[], int N){
    initialization1(array, N);
}

int main(int argc, char **argv) {
	int z;
   
   int N = 50;
   int array[N];

   printf("\"Loop unrolling\"");
   for (z=0; z<reps; z++){
   test1(array, N);
   }
   
}