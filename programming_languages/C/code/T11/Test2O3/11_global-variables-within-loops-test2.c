#include <stdio.h>
#define OPTIMIZE __attribute__((optimize("O3")))

const int reps = 100000000;
int sum;

void initializeArray(int N, int a[]) {
   for (int i=0; i<N; i++){
      a[i] = i;
   }
}

void OPTIMIZE test2(int N, int a[]) {
   int t = 0; 
   for (int i=0; i<N; i++)
      t += a[i];
   sum = t;
}

int main(int argc, char **argv) {

   int z;
   int N = 10;
   int a[N];

   initializeArray(N, a);

   printf("\"Global variables within loops\"");
   for (z=0; z<reps; z++){
     test2(N, a);
   }
   
}