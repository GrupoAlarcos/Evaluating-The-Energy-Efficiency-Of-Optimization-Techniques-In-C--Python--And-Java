
#include <stdlib.h>
#include <stdio.h>
#define OPTIMIZE __attribute__((optimize("O0")))

const int reps = 100000000;
void initialize(int* array,int N){
    for(int i=0;i<N;i++) array[i]=rand()%N;
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

void OPTIMIZE quicksort2(int arr[], int low, int high, int THRESHOLD) {
    if (low < high) {
        if (high - low + 1 <= THRESHOLD) {
            // Coarsening recursion: for small sub-arrays, use insertion sort
            for (int i = low + 1; i <= high; i++) {
                int key = arr[i];
                int j = i - 1;

                while (j >= low && arr[j] > key) {
                    arr[j + 1] = arr[j];
                    j--;
                }
                arr[j + 1] = key;
            }
        } else {
            int pivotIndex = partition(arr, low, high);
            quicksort2(arr, low, pivotIndex - 1,THRESHOLD);
            quicksort2(arr, pivotIndex + 1, high,THRESHOLD);
        }
    }
}

void OPTIMIZE test2(int arr[], int N, int THRESHOLD){
   quicksort2(arr,0,N-1,THRESHOLD);
}

int main(int argc, char **argv) {
   
   int z;
   int N=50;
   int THRESHOLD=10;

   int A[N];
   
   initialize(A,N);

   printf("\"Coarsening recursion\"");
   
   for (z=0; z<reps; z++){
   test2(A, N, THRESHOLD);
   }

}