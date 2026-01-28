#include <stdio.h>
#define OPTIMIZE __attribute__((optimize("O0")))

const int reps = 100000000;
unsigned int OPTIMIZE test2(unsigned int b1,unsigned int b2,unsigned int b3, unsigned int lookup[]) {

   return lookup[b1*4+b2*2+b3];

}

int main(int argc, char **argv) {
   
   int z;
   unsigned int f=4,e=3,d=2,c=1,b1=0,b2=0,b3=1;
   unsigned int lookup[]={f,e,d,d,c,c,c,c};

   printf("\"Lookup Table\"");
   for (z=0; z<reps; z++){
   test2(b1,b2,b3,lookup);
   }
   
}