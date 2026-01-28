#include <stdio.h>
#define OPTIMIZE __attribute__((optimize("O3")))

#define N 50

const int reps = 100000000;
void OPTIMIZE test2() {

   int array[N]={0};

}

int main(int argc, char **argv) {

   int z;
   printf("\"Initialization loops\"");
   
   for (z=0; z<reps; z++){
   test2();
   }
   
}