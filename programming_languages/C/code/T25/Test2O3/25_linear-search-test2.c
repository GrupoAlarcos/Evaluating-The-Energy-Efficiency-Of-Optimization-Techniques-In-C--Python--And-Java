#include <stdio.h>
#define OPTIMIZE __attribute__((optimize("O3")))

const int reps = 100000000;

int *plist;

void OPTIMIZE inicialize(int *list, int N){
  for (int i=0; i<N; i++){
     list[i] = i;
  }
}

int OPTIMIZE search2(int *list, int N, int want) {
  int i;
  list[N] = want;
  i = 0;
  while (list[i] != want)
    i++;
  if (i == N)
    return -1;
  return i;
}

int test2(int list[], int N){
   plist = list;
   return search2(plist,N,98);
}

int main(int argc, char **argv) {
   
   int z;
   int N = 100;
   int list [N];

   inicialize(list,N);

   printf("\"Linear search\"");
   
   for (z=0; z<reps; z++){
   test2(list, N);
   }

}