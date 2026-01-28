#include <stdio.h>

#define OPTIMIZE __attribute__((optimize("O0")))

const int reps = 100000000;
typedef struct S1{
    int a[100];
    int b;
}S1;

int OPTIMIZE readB1(S1 tst){

   return tst.b;

}

void test1(S1 tst,int N) {
   int b=0;
      for(int i=0;i<N;i++)
         b = readB1(tst);

}

int main(int argc, char **argv) {
   int z;
   
   int N=50;

   int a[100]={0};
   int b=5;

   S1 tst1={{a[100]}, b};

   printf("\"Structure order\"");
   for (z=0; z<reps; z++){
   test1(tst1,N);
   }
}