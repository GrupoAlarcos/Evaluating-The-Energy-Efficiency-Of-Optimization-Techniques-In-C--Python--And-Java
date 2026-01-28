#include <stdio.h>
#define OPTIMIZE __attribute__((optimize("O3")))

#define IDENTIFIER_A 2
#define IDENTIFIER_B 1
#define IDENTIFIER_C 3 

const int reps = 100000000;

typedef struct {
  unsigned int value;
} Structure;

void aux1(int i){
   i++;
}
void aux2(int i){
   i++;
}
void aux3(int i){
   i++;
}

void OPTIMIZE test2(int N) {
   int i;
   Structure t,*pt;
   pt = &t;
   pt->value &= IDENTIFIER_C; /* for example */
   if (pt->value & IDENTIFIER_A) {
      for (i=0; i<N; i++)
         aux1(i);
   } else if (pt->value & IDENTIFIER_B) {
      for (i=0; i<N; i++)
         aux2(i);
   } else {
      for (i=0; i<N; i++)
         aux3(i);
  }
}

int main(int argc, char **argv) {
   
   int z;
   int N = 10;

   printf("\"Constants inside loops\"");
   for (z=0; z<reps; z++){
   test2(N);
   }
   
}