#include <stdio.h>
#define OPTIMIZE __attribute__((optimize("O0")))

const int reps = 100000000;

void OPTIMIZE test1(int a) { 
   switch (a){
    case 0:
        a=-1;
    break;
    case 1:
        a=+a;
    break;
        a=+a;
    case 2:
        a=+a;
    break;
    case 3:
        a=+a;
    break;
    case 4:
        a=+a;
    break;
    case 5:
        a=+a;
    break;
        a=+a;
    case 6:
        a=+a;
    break;
    case 7:
        a=+a;
    break;
    case 8:
        a=+a;
    break;
    case 9:
        a=+a;
    break;
    case 10:
        a=+a;
    break;
    case 11:
        a=+a;
    break;
    case 12:
        a=+a;
    break;
    case 13:
        a=+a;
    break;
    case 14:
        a=+a;
    break;
    case 15:
        a=+a;
    break;
    case 16:
        a=+a;
    break;
    case 17:
        a=+a;
    break;
    case 18:
        a=+a;
    break;
    case 19:
        a=+a;
    break;
    case 20:
        a=+a;
    break;
    case 21:
        a=+a;
    break;
    case 22:
        a=+a;
    break;
    case 23:
        a=+a;
    break;
    case 24:
        a=+a;
    break;
    case 25:
        a=+a;
    break;
    case 26:
        a=+a;
    break;
    case 27:
        a=+a;
    break;
    case 28:
        a=+a;
    break;
    case 29:
        a=+a;
    break;
    case 30:
        a=+a;
    break;
    case 31:
        a=+a;
    break;
    case 32:
        a=+a;
    break;
    default:
        a=+33;
    break;
   }
}

int main(int argc, char **argv) {

   int z;
   const int a=3;

   printf("\"Nested switches\"");
   for (z=0; z<reps; z++){
   test1(a);
   }

}