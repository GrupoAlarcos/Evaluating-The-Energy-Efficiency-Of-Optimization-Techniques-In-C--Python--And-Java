#include <stdio.h>
#define OPTIMIZE __attribute__((optimize("O0")))

const int reps = 100000000;

int *plist;

void OPTIMIZE inicialize(int *list, int N){
  for (int i=0; i<N; i++){
     list[i] = i;
  }
}

int OPTIMIZE search1(int *list, int N, int want) {
  int i;
  for (i = 0; i < N; i++)
    if (list[i] == want)
      return i;
  return -1;
}

int test1(int list[], int N){
   plist = list;
   return search1(plist,N,98);
}

int main(int argc, char **argv) {
   
   int z;
   
   int N = 100;
   int list [N];

   inicialize(list,N);

   printf("\"Linear search\"");
   
   for (z=0; z<reps; z++){
   test1(list, N);
   }

}