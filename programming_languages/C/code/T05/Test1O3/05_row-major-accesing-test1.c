#include <stdio.h>
#define OPTIMIZE __attribute__((optimize("O3")))

const int reps = 100000000;

void OPTIMIZE test1(int N) {
   int array[N][N];
   for (int j=0; j<N; j++)
      for (int i=0; i<N; i++)
         array[i][j] = 0;
}

int main(int argc, char **argv) {

   int j;
   int N = 60;

   printf("\"Row-major accesing\"");
   for (j=0; j<reps; j++){
   test1(N);
   }

}