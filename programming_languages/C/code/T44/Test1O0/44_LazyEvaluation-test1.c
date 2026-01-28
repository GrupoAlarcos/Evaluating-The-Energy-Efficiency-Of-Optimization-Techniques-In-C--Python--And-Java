#include <stdio.h>
#include <stdbool.h>
#define OPTIMIZE __attribute__((optimize("O0")))

void OPTIMIZE test1(bool A, bool B) {
   bool C=B||A;
   bool D=A&&B;
}


int main(int argc, char **argv) {

   int i,j;
   bool A=true,B=false;

   printf("\"Lazy Evaluation\"");
   printf(",\"%s\"", argv[0]);
   printf(",\"-1\"");
   test1(A,B);
   
}