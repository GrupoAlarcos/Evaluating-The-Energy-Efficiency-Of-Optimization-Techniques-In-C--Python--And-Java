#include <stdio.h>
#include <stdbool.h>
#define OPTIMIZE __attribute__((optimize("O0")))

const int reps = 100000000;
void initialize(int* array,int N){
    for(int i=0;i<N;i++) array[i]=0;
}

void OPTIMIZE test2(int array[],int N,int val) {

    for(int i=0; (i<N); i++){
        if(array[i]>=val) break;
    }

}

int main(int argc, char **argv) {
   
   int z;
   int N=50;
   int val=25;
   int array[N];
   initialize(array,N);
   array[N/2]=val;

   printf("\"Loop exit escape sentence\"");
   for (z=0; z<reps; z++){
   test2(array,N,val);
   }
}