#include <stdio.h>
#include <exception>
#define OPTIMIZE __attribute__((optimize("O3")))

const int reps = 100000000;
using namespace std;


int OPTIMIZE test2(){
   int num = 100;
   for (int i=0; i<1; i++){
      if (num != 100) {
         continue;
      }
   }
   return 0;
}



int main(int argc, char **argv) {
   
   int z;
   printf("\"Exception handling\"");
   for (z=0; z<reps; z++){
   test2();
   }
}