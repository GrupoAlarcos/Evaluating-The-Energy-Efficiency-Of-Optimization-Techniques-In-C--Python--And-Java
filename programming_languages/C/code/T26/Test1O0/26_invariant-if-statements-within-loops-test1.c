#include <stdio.h>
#define OPTIMIZE __attribute__((optimize("O0")))

const int reps = 100000000;

int x=0;

void OPTIMIZE test1(int a[], int b[], int N){
  for (int i=0; i<N; i++)
    if (x==1)
      a[i] = 0;
    else
      b[i] = 0;
}

int main(int argc, char **argv) {
   
   int z;
   int N = 100;

   int a[N];
   int b[N];

   printf("\"Invariant IF statements within loops\"");
   
   
   for (z=0; z<reps; z++){
   test1(a, b, N);
   }

}