#include <stdio.h>
#define OPTIMIZE __attribute__((optimize("O0")))

const int reps = 100000000;

typedef struct { int a,b,c,d,e; } Values;
typedef struct { Values *values; } Structure;

Structure structure,*pstructure;
Values values;

void OPTIMIZE test2() {
  structure.values = &values;
  pstructure = &structure;

  Values *aux = pstructure->values;
  aux->a = 0;
  aux->b = 0;
  aux->c = 0;
  aux->d = 0;
  aux->e = 0;
}

int main(int argc, char **argv) {
	int z;
   
   printf("\"Chains of pointers\"");
   for (z=0; z<reps; z++){
   test2();
   }
}