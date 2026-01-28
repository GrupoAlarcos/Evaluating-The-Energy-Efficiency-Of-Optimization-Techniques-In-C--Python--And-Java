#include <stdio.h>
#define OPTIMIZE __attribute__((optimize("O0")))

const int reps = 100000000;
void OPTIMIZE test1(int N,int M) {

   int array[N][M];
   for(int i=0;i<N;i++)
      for (int j=0;j<M;j++) array[i][j]=0;

}

int main(int argc, char **argv) {

   int z;
   int N=50;
   int M=50;
   int array[N];

   printf("\"Matrix access through pointers\"");
   for (z=0; z<reps; z++){
   test1(N,M);
   }
   
}