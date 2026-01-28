#include <stdio.h>
#define OPTIMIZE __attribute__((optimize("O3")))

const int reps = 100000000;
void OPTIMIZE test2(int N){
   int A[N][N];
   int j=0;
   for(int i=1;i<N;++i){
      j=0;
      while(j<i){
         A[i][j]=3;
         j++;
      }
   }
}

int main(int argc, char **argv) {
   
   int z;
   int N = 50;

   printf("\"Wasted iterations\"");
   for (z=0; z<reps; z++){
   test2(N);
   }

}