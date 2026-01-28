#include <stdio.h>
#include <complex>
#define OPTIMIZE __attribute__((optimize("O3")))

const int reps = 100000000;

void OPTIMIZE test1() {
    std::complex<double> mycomplex;
    mycomplex = (3.14);
}

int main(int argc, char **argv) {
   
   int z;
   printf("\"Initialization versus assignment\"");
   for (z=0; z<reps; z++){
   test1();
   }
   
}