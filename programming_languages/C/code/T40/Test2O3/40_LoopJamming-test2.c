#include <stdio.h>
#define OPTIMIZE __attribute__((optimize("O3")))

const int reps = 100000000;
void initialize(int* array,int N,int val){
    for(int i=0;i<N;i++) array[i]=val;
}

void OPTIMIZE potencia2(int N,int array[]) {
   for(int i=0; i<N;i++) 
      array[i]=array[i]*array[i];
}

void OPTIMIZE test2(int N,int array[]) {
   potencia2(N,array);
}

int main(int argc, char **argv) {

   int z;
   int N=50;
   int array2[N];
   initialize(array2,N,1);

   printf("\"Loop Jamming\"");
   
   for (z=0; z<reps; z++){
   test2(N,array2);
   }

}