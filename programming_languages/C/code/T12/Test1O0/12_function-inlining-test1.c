#include <stdio.h>
#define OPTIMIZE __attribute__((optimize("O0")))

const int reps = 100000000;

int OPTIMIZE add (int x, int y) {  
   return x + y;
}

int OPTIMIZE sub(int x, int y) {
  return add (x, -y);
}

void test1(int x, int y){
   sub(x, y);
}

int main(int argc, char **argv) {

   int z;
   unsigned int minuend = 10;
   unsigned int subtrahend = 5;
   
   printf("\"Function inlining\"");
   for (z=0; z<reps; z++){
     test1(minuend, subtrahend);
   }
}