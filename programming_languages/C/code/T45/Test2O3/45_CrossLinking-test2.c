#include <stdio.h>
#define OPTIMIZE __attribute__((optimize("O3")))

const int reps = 100000000;
void OPTIMIZE test1(int a) { 
    switch (a) {
        case 1:
            a+=1;
            a>>1;
            break;
        case 2:
            a+=2;
            a=a*5;
            break;
        case 3:
            a+=3;
            a>>1;
            break;
        case 4:
            a+=4;
            a<<1;
            break;
        case 5:
            a+=5;
            a<<1;
            break;
        default:
            a>>1;
            break;
    }
    a=-1;
}

int main(int argc, char **argv) {

   int z;
   const int a=4;

   printf("\"Switch Cross Linking\"");
   for (z=0; z<reps; z++){
   test1(a);
   }
   
}