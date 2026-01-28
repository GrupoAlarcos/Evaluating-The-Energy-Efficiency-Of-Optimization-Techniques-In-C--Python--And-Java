#include <stdio.h>
#define OPTIMIZE __attribute__((optimize("O3")))

const int reps = 100000000;
int OPTIMIZE sum_int(int a, int b, int c, int d, int e) {
    return a+b+c+d+e;
}  

void test2(){
    sum_int(1,2,3,4,5);
}

int main(int argc, char **argv) {
	int z;
   
   printf("\"Integer versus character\"");
   for (z=0; z<reps; z++){
   test2();
   }
}