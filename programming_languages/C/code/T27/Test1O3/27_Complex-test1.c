#include <stdio.h>
#include <complex.h>
#define OPTIMIZE __attribute__((optimize("O3")))

const int reps = 100000000;

void OPTIMIZE divide_complex(double _Complex Za, double _Complex Zb) {
   double _Complex Zc = Za/Zb;
}

void OPTIMIZE multiply_complex(double _Complex Za, double _Complex Zb) {
   double _Complex Zc=Za*Zb;
}

void test1(double _Complex Za, double _Complex Zb) {
    multiply_complex(Za,Zb);
    divide_complex(Za,Zb);
}

int main(int argc, char **argv) {
	
   int z;
   double Zar=1;
   double Zai=1;
   double Zbr=1;
   double Zbi=-1;

   double _Complex Za=Zar+Zai*I;
   double _Complex Zb=Zbr+Zbi*I;

   printf("\"Operations with complex numbers\"");
   
   for (z=0; z<reps; z++){
   test1(Za,Zb);
   }
   
   printf("\n");
}