#include <stdio.h>
#define OPTIMIZE __attribute__((optimize("O0")))

const int reps = 100000000;
void OPTIMIZE test1(int a[], int N){
  for (int i=0; i<N; i++) {
      a[i]=i;
  }
}

int main(int argc, char **argv) {
	int z;
   
   int N = 100;
   int a[N];

   printf("\"Loop count down\"");
   for (z=0; z<reps; z++){
   test1(a, N);
   }
}