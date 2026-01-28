#include <stdio.h>
#define OPTIMIZE __attribute__((optimize("O3")))

const int reps = 100000000;

void OPTIMIZE test2(int a) {
        switch (a){
        case 1:
            a+=1;
            goto break1;
        case 2:
            a+=2;
            a=a*5;
            goto break3;
        case 3:
            a+=3;
            goto break1;
        case 4:
            a+=4;
            goto break2;
        case 5:
            a+=5;
            goto break2;
        default:
            goto break1;
    }
    /* break1 */
    break1: a>>1;
    goto break3;

    /* break2 */
    break2: a<<1;
    goto break3;

    /* break3 */
    break3: a=-1;
}

int main(int argc, char **argv) {

   int z;
   const int a=4;

   printf("\"Switch Cross Linking\"");
   
   for (z=0; z<reps; z++){
   test2(a);
   }
}