
#include <stdlib.h>
#include <stdio.h>
#define OPTIMIZE __attribute__((optimize("O0")))

const int reps = 100000000;
void initialize(int* array,int N){
    for(int i=0;i<N;i++) array[i]=rand()%N;
}

void initializetozero(int* array,int N){
    for(int i=0;i<N;i++) array[i]=0;
}

void OPTIMIZE swap (int *a, int *b){
  int t = *a;
  *a = *b;
  *b = t;
}

int OPTIMIZE partition (int arr[], int low, int high){
   int pivot = arr[high];
   int i = (low - 1);
   for (int j = low; j <= high - 1; j++){
      if (arr[j] <= pivot){
         i++;
         swap (&arr[i], &arr[j]);
      }
   }
   swap (&arr[i + 1], &arr[high]);
   return (i + 1);
}

void OPTIMIZE quicksort1 (int arr[], int low, int high){
   if (low < high){
      int pi = partition (arr, low, high);
      quicksort1(arr, low, pi - 1);
      quicksort1(arr, pi + 1, high);
   }
}

void OPTIMIZE test1(int arr[], int N){
   quicksort1(arr,0,N-1);
}

int main(int argc, char **argv) {
   
   int z;
   int N=50;
   int THRESHOLD=10;

   int A[N];
   
   initialize(A,N);
   
   printf("\"Coarsening recursion\"");
   
   for (z=0; z<reps; z++){
   test1(A,N);
   }

}