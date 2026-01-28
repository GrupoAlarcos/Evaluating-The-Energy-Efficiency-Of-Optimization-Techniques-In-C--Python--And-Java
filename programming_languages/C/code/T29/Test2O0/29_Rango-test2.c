#include <stdio.h>
#include <stdbool.h>
#define OPTIMIZE __attribute__((optimize("O0")))

const int reps = 100000000;
bool OPTIMIZE test2(int i, int maxN, int minN) {

    return ((i-minN)<=(maxN-minN));

}


int main(int argc, char **argv) {
   int z;
   
   int maxN=5;
   int minN=1;
   int r=2;

   printf("\"Inside of range check\"");
   for (z=0; z<reps; z++){
   test2(r,maxN,minN);
   }

}