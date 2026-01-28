#include <stdio.h>
#define OPTIMIZE __attribute__((optimize("O3")))

const int reps = 100000000;
//------------------------------------------------------------------------------------------
int OPTIMIZE functb(int x){

    return x*2;

}

int OPTIMIZE funct2(int x){

    return functb(x-1)-8;

}


void test2(int a) {

    int b=funct2(a);

}


int main(int argc, char **argv) {

   int z;
   int j=1;
   printf("\"Tail function\"");
   
   for (z=0; z<reps; z++){
   test2(j);
   }

}