#include <stdio.h>
#define OPTIMIZE __attribute__((optimize("O0")))

#define add2(a,b) 2*a+3*b

const int reps = 100000000;
void OPTIMIZE test2(int a, int b) {

    add2(a,b);

}

int main(int argc, char **argv) {

   int z;
   int i=1;
   int j=1;

   printf("\"Macros\"");
   
   for (z=0; z<reps; z++){
   test2(i,j);
   }
   
}