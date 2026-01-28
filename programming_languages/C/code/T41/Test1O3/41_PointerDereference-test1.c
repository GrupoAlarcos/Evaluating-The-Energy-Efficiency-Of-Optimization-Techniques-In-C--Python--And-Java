#include <stdio.h>
#define OPTIMIZE __attribute__((optimize("O3")))

const int reps = 100000000;
void OPTIMIZE test1(int N,int* a) { 
   for(int i=0; i<N;i++) *a=+i;
}

int main(int argc, char **argv) {

   int z;
   int N=50;

   int a = 0;
   int* point = &a;

   printf("\"Pointer dereference\"");
   
   for (z=0; z<reps; z++){
   test1(N,point);
   }
   
}