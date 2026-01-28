#include <stdio.h>
#define OPTIMIZE __attribute__((optimize("O3")))

const int reps = 100000000;

int a,b,c,d,e;
int *pa = &a;
int *pb = &b;
int *pc = &c;
int *pd = &d;
int *pe = &e;

void OPTIMIZE pointersB(int *t1, int *t2, int *t3, int *t4, int *step) {
    int s = *step;
    *t1 += s;
    *t2 += s;
    *t3 += s;
    *t4 += s;
}

void test2() {
     pointersB(pa,pb,pc,pd,pe);
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
   test2();
   }
   
}