#include <stdio.h>
#define OPTIMIZE __attribute__((optimize("O3")))

const int reps = 100000000;

void initialize(int* array,int N){

   for (int i=0;i<N;i++) array[i]=i%2;

}

void OPTIMIZE test2(int array[], int N, int ierror) {
   int i;
   for (i=0; i<N; i++){
     array[i] =+ 1;
   }
   int j;
   for(j=0;j<N;j++){
      if (array[j] > 1) ierror=1;
   }
}

int main(int argc, char **argv) {
   
   int z;
   
   int N = 50;
   int array[N];
   int ierror;

   initialize(array,N);

   printf("\"Loop Fission\"");
   
   for (z=0; z<reps; z++){
     test2(array,N,ierror);
   }
   
}