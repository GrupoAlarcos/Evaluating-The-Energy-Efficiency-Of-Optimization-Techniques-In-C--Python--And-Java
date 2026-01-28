#include <stdio.h>
#define OPTIMIZE __attribute__((optimize("O3")))

const int reps = 100000000;

int OPTIMIZE sub2(int x, int y) {
  return x + -y;
}

void test2(int x, int y){
   sub2(x, y);
}

int main(int argc, char **argv) {

   int z;
   unsigned int minuend = 10;
   unsigned int subtrahend = 5;
   
   printf("\"Function inlining\"");
   for (z=0; z<reps; z++){
   test2(minuend, subtrahend);
   }
}