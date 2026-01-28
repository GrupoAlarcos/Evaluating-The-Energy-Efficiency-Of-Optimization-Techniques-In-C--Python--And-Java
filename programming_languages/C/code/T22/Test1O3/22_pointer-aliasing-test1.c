#include <stdio.h>
#define OPTIMIZE __attribute__((optimize("O3")))

const int reps = 100000000;

int a,b,c,d,e;
int *pa = &a;
int *pb = &b;
int *pc = &c;
int *pd = &d;
int *pe = &e;

void OPTIMIZE pointersA(int *t1, int *t2, int *t3, int *t4, int *step) {
    *t1 += *step;
    *t2 += *step;
    *t3 += *step;
    *t4 += *step;
}

void test1() {
     pointersA(pa,pb,pc,pd,pe);
}

int main(int argc, char **argv) {
	int z;
   
   a = 1;
   b = 2;
   c = 3;
   d = 4;
   e = 5;

   printf("\"Pointer aliasing\"");
   for (z=0; z<reps; z++){
   test1();
   }
}