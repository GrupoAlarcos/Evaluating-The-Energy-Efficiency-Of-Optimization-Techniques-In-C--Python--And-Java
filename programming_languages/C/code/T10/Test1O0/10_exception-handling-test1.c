#include <stdio.h>
#include <exception>
#define OPTIMIZE __attribute__((optimize("O0")))

const int reps = 100000000;
using namespace std;

class myexception: public exception {
} myex;

int OPTIMIZE test1(){
   int num = 100;
   for (int i=0; i<1; i++){
      try{
           if (num == 100) {
		         throw myex;
           }
      } catch (exception& e){
      
      }
   }
   return 0;
}


int main(int argc, char **argv) {
   
   int z;	
   printf("\"Exception handling\"");
   for (z=0; z<reps; z++){
   test1();
   }
}