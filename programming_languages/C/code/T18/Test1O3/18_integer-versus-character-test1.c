#include <stdio.h>
#define OPTIMIZE __attribute__((optimize("O3")))

const int reps = 100000000;
char OPTIMIZE sum_char(char a, char b, char c, char d, char e) {
    return a+b+c+d+e;
}

void test1(){
    sum_char(1,2,3,4,5);
}

int main(int argc, char **argv) {
	int z;
   
   printf("\"Integer versus character\"");
   for (z=0; z<reps; z++){
   test1();
   }
}