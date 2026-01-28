#include <stdio.h>
#include <stdlib.h>
#define OPTIMIZE __attribute__((optimize("O0")))

const int reps = 100000000;
void initialize(int* array,int N,int n,int val){
    for(int i=0;i<N;i++) 
      if(i==n) array[i]=val;
      else array[i]=0;
}

int OPTIMIZE test1(int a[], int N, int val) {
   int pos=-1;
   for(int i=0;i<N;i++) 
      if (a[i] == val)
         pos = i;

   return pos;
}

int main(int argc, char **argv) {
   int z;
   int N = 50;
   int n = 25;
   int a[N];
   initialize(a,N,n,10);
   printf("\"Sentinels\"");
   for (z=0; z<reps; z++){
      test1(a,N,10);
   }
}
