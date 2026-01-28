#include <stdio.h>
#include <string>
#define OPTIMIZE __attribute__((optimize("O0")))

const int reps = 100000000;

using namespace std;

class ClassA {
   private:
      string dataA;
      string dataB;
      int    dataC;
      int    dataD;
   public:
      ClassA(string data1, string data2, int data3, int data4);
};

OPTIMIZE ClassA::ClassA(string data1, string data2, int data3, int data4) {
    dataA = data1;
    dataB = data2;
    dataC = data3;
    dataD = data4;
}
 
void OPTIMIZE test1(){
    ClassA c("data1","data2",1,1);
}

int main(int argc, char **argv) {
   
   int j;
   
   printf("\"Constructor initialization lists\"");
   
   for (j=0; j<reps; j++){
   test1();
   }
   
}