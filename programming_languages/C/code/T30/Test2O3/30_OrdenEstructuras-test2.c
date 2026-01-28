#include <stdio.h>

#define OPTIMIZE __attribute__((optimize("O3")))

const int reps = 100000000;

typedef struct S2{
    int b;
    int a[100];
}S2;

int OPTIMIZE readB2(S2 tst){

    return tst.b;

}

void test2(S2 tst,int N) {
   int b=0;
   for(int i=0;i<N;i++)
      b = readB2(tst);
}

int main(int argc, char **argv) {
   int z;
   
   int N=50;

   int a[100]={0};
   int b=5;

   S2 tst2={b, {a[100]}};

   printf("\"Structure order\"");
   for (z=0; z<reps; z++){
   test2(tst2,N);
   }
}