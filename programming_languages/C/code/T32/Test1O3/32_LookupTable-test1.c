#include <stdio.h>
#define OPTIMIZE __attribute__((optimize("O3")))

const int reps = 100000000;
unsigned int OPTIMIZE test1(unsigned int b1,unsigned int b2,unsigned int b3,unsigned int c,unsigned int d,unsigned int e,unsigned int f) {
    
    if(b1) return c;
    else if(b2) return d;
    else if(b3) return e;
    else return f;

}


//------------------------------------------------------------------------------------------

int main(int argc, char **argv) {

   int z;
   unsigned int f=4,e=3,d=2,c=1,b1=0,b2=0,b3=1;

   printf("\"Lookup Table\"");
   
   for (z=0; z<reps; z++){
   test1(b1,b2,b3,c,d,e,f);
   }

}