#include <stdio.h>
#define OPTIMIZE __attribute__((optimize("O3")))

const int reps = 100000000;
void OPTIMIZE test2(int a[], int N){
   int i = N+1;
   while (--i) {
      a[i] = i;
   }
}

int main(int argc, char **argv) {
	int z;
   
   int N = 100;
   int a[N];

   printf("\"Loop count down\"");
   for (z=0; z<reps; z++){
   test2(a, N);
   }
   
}