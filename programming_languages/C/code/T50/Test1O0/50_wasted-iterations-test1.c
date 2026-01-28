#include <stdio.h>
#define OPTIMIZE __attribute__((optimize("O0")))

const int reps = 100000000;
void OPTIMIZE test1(int N){
   int A[N][N];
   for(int i=0;i<N;++i){
      for(int j=0;j<N;++j){
         if(i<j){
            A[i][j]=3;
         }
      }
   }
}

int main(int argc, char **argv) {
   
   int z;
   int N = 50;

   printf("\"Wasted iterations\"");
   
   for (z=0; z<reps; z++){
   test1(N);
   }

}