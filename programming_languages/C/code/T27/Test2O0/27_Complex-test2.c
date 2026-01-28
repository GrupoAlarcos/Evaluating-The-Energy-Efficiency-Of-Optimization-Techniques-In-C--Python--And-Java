#include <stdio.h>
#include <complex.h>
#define OPTIMIZE __attribute__((optimize("O0")))

const int reps = 100000000;

void OPTIMIZE multiply_complex2(double Zar, double Zai, double Zbr, double Zbi) {
    double Zcr=Zar*Zbr-Zai*Zbi;
    double Zci=Zai*Zbr+Zar*Zbi;
}

void OPTIMIZE divide_complex2(double Zar, double Zai, double Zbr, double Zbi) {
    double tmp=1/(Zbr*Zbr+Zbi*Zbi);
    double Zcr=tmp*(Zar*Zbr+Zai*Zbi);
    double Zci=tmp*(Zai*Zbr-Zar*Zbi);
}

void test2(double Zar, double Zai, double Zbr, double Zbi) {
    multiply_complex2(Zar,Zai,Zbr,Zbi);
    divide_complex2(Zar,Zai,Zbr,Zbi);
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
   test2(Zar,Zai,Zbr,Zbi);
   }
   printf("\n");
}