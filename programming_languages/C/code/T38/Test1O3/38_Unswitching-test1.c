#include <stdio.h>
#include <stdbool.h>
#define OPTIMIZE __attribute__((optimize("O3")))

const int reps = 100000000;
void initialize(int* array,int N,int val){
    for(int i=0;i<N;i++) array[i]=val;
}

void OPTIMIZE test1(const int N,int a[],int b[], int c[], int d[],int flag) {

    for(int i=0;i<N;i++) {
        a[i]=b[i]+c[i];
        switch(flag){
         case 1:
            d[i]=a[i];
         break;
         case 2: 
            d[i]=c[i];
         break;
         case 3: 
            d[i]=a[i]-1;
         break;
         default: 
            d[i]=0;
         break;
      }
    }

}

int main(int argc, char **argv) {

   int z;
   int N=50;
   
   int flag=2;
   int a[N],b[N],c[N],d[N];
   initialize(c,N,1);
   initialize(b,N,2);
   initialize(a,N,0);
   initialize(d,N,0);

   printf("\"Loop Unswitching\"");
   for (z=0; z<reps; z++){
   test1(N,a,b,c,d,flag);
   }

}