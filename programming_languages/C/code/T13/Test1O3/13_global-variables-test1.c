#include <stdio.h>
#define OPTIMIZE __attribute__((optimize("O3")))

const int reps = 100000000;

int f() {
   return 512;
}

int value;

void OPTIMIZE test1(int N) {
  for (int i=0; i < N; i++) {
     value += f();
  }
}

int main(int argc, char **argv) {

   int z;
   int N = 50;

   value = 0;

   printf("\"Global variables\"");
   for (z=0; z<reps; z++){
   test1(N);
   }
}