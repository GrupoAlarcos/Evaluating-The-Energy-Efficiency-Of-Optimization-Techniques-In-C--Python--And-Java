#include <stdio.h>
#define OPTIMIZE __attribute__((optimize("O3")))

const int reps = 100000000;
void initialize_char_array(int N,  char array[]){
   for (int i=0; i<N; i++) {
      array[i]='a';
   }
}

void OPTIMIZE test2(int N, int Nbuf, char array[], char buf[], FILE* fptr) {
   int i=0;
   int auxN=N+Nbuf-N%Nbuf;
   while(i<auxN) {
      for(int j=0;j<Nbuf;j++){
         if((i+j)<N) buf[j]=array[i+j];
         else buf[j]=0;
      }
      i+=Nbuf;
      fwrite(buf, 1, Nbuf, fptr);
   }
}

int main(int argc, char **argv) {

   int z;
   int N=50;
   int Nbuf=4;

   char array[N];
   char buf[Nbuf];
   FILE *fptr;

   fptr = fopen("test.txt","w");
   initialize_char_array(N,array);
   initialize_char_array(Nbuf,buf);

   printf("\"Buffer IO\"");
   
   for (z=0; z<reps; z++){
   test2(N, Nbuf, array, buf, fptr);
   }
   
   fclose(fptr);
   remove("test.txt");

}