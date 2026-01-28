#include <stdio.h>
#include <stdbool.h>
#define OPTIMIZE __attribute__((optimize("O0")))

const int reps = 100000000;

typedef unsigned int Flags;

#define flagA (1u << 0)
#define flagB (1u << 1)
#define flagC (1u << 2)
#define flagD (1u << 3)

bool OPTIMIZE getFlagsOR(Flags flags) {
  return (flags & (flagA | flagB | flagC | flagD)) != 0;
}

void test2() {
    getFlagsOR(1100);
}

//------------------------------------------------------------------------------------------

// int main() {
int main(int argc, char **argv) {
   int j;
   printf("\"Boolean return\"");
   for (j=0; j<reps; j++){
   test2();
   }

}