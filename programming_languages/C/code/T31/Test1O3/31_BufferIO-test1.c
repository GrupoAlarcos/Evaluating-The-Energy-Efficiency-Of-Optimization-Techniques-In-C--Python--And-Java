#include <stdio.h>
#define OPTIMIZE __attribute__((optimize("O3")))

const int reps = 100000000;

void initialize_char_array(int N,  char array[]){
   for (int i=0; i<N; i++) {
      array[i]='a';
   }
}

void OPTIMIZE test1(int N, char array[],FILE* fptr) {
   for (int i=0;i<N;i++){
      fputc(array[i],fptr);
   }
}

int main(int argc, char **argv) {
   int z;

   int N=50;
   int Nbuf=5;

   char array[N];
   char buf[Nbuf];
   FILE *fptr;

   fptr = fopen("test.txt","w");
   initialize_char_array(N,array);
   initialize_char_array(Nbuf,buf);

   printf("\"Buffer IO\"");
   
   for (z=0; z<reps; z++){
   test1(N, array, fptr);
   }
   
   fclose(fptr);
   remove("test.txt");

}