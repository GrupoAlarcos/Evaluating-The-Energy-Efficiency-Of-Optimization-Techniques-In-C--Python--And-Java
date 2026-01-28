#include <stdio.h>
#include <stdbool.h>
#define OPTIMIZE __attribute__((optimize("O0")))

const int reps = 100000000;

bool OPTIMIZE getOR(bool argA,bool argB,bool argC,bool argD) {
  return (argA || argB || argC || argD);
}

void test1() {
    getOR(1,1,0,0);
}

//------------------------------------------------------------------------------------------

// int main() {
int main(int argc, char **argv) {
   
   int j;
   printf("\"Boolean return\"");
   for (j=0; j<reps; j++){
     test1();
   }

}