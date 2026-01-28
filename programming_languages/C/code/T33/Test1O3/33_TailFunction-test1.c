#include <stdio.h>
#define OPTIMIZE __attribute__((optimize("O3")))

const int reps = 100000000;
//------------------------------------------------------------------------------------------
int OPTIMIZE functb(int x){

    return x*2;

}

int OPTIMIZE funct1(int x){

    int a=functb(x-1)-8;
    return a;

}

void test1(int a) {

    int b=funct1(a);

}


int main(int argc, char **argv) {

   int z;
   int j=1;
   printf("\"Tail function\"");
   
   for (z=0; z<reps; z++){
   test1(j);
   }

}