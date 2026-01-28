#include <stdio.h>
#define OPTIMIZE __attribute__((optimize("O0")))

const int reps = 100000000;

int x=0;

void OPTIMIZE test2(int a[], int b[], int N){
  if (x==1)
     for (int i=0; i<N; i++)
       a[i] = 0;
  else
     for (int i=0; i<N; i++)
       b[i] = 0;
}

int main(int argc, char **argv) {
   
   int z;
   int N = 100;

   int a[N];
   int b[N];

   printf("\"Invariant IF statements within loops\"");
   
   for (z=0; z<reps; z++){
   test2(a, b, N);
   }

}