#include <stdio.h>
#include <stdbool.h>
#define OPTIMIZE __attribute__((optimize("O0")))

void OPTIMIZE test2(bool A, bool B) { 
   bool C=A||B;
   bool D=B&&A;
}

int main(int argc, char **argv) {

   bool A=true,B=false;

   printf("\"Lazy Evaluation\"");
   printf(",\"%s\"", argv[0]);
   printf(",\"-1\"");
   test2(A,B);
   
}