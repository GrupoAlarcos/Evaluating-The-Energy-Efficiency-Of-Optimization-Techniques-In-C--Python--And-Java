#include <stdio.h>
#define OPTIMIZE __attribute__((optimize("O0")))

const int reps = 100000000;

typedef struct { int a,b,c,d,e; } Values;
typedef struct { Values *values; } Structure;

Structure structure,*pstructure;
Values values;

void OPTIMIZE test1() {
  structure.values = &values;
  pstructure = &structure;

  pstructure->values->a = 0;
  pstructure->values->b = 0;
  pstructure->values->c = 0;
  pstructure->values->d = 0;
  pstructure->values->e = 0;
}

int main(int argc, char **argv) {
	int z;
   
   printf("\"Chains of pointers\"");
   for (z=0; z<reps; z++){
   test1();
   }
   
}