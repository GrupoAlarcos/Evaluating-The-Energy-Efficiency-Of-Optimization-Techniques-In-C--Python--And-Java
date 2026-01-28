#include <stdio.h>
#define OPTIMIZE __attribute__((optimize("O3")))

const int reps = 100000000;
int OPTIMIZE add1(int a,int b){

    return 2*a+3*b;

}

void test1(int a, int b) {

    add1(a,b);

}


int main(int argc, char **argv) {

   int z;
   int i=1;
   int j=1;

   printf("\"Macros\"");
   
   for (z=0; z<reps; z++){
   test1(i,j);
   }
   
}