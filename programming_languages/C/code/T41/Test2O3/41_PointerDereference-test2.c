#include <stdio.h>
#define OPTIMIZE __attribute__((optimize("O3")))

const int reps = 100000000;
void OPTIMIZE test2(int N,int* a) {
   int tmp = *a; 
   for(int i=0; i<N;i++) tmp=+i;
   *a = tmp;
}

int main(int argc, char **argv) {

   int z;
   int N=50;

   int a = 0;
   int* point = &a;

   printf("\"Pointer dereference\"");
   
   for (z=0; z<reps; z++){
   test2(N,point);
   }
   
}