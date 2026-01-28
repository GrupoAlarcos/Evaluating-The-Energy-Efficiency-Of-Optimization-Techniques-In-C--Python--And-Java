#include <stdio.h>
#include <string>
#define OPTIMIZE __attribute__((optimize("O3")))

const int reps = 100000000;
using namespace std;

typedef struct {
    int array[10];
    int value;
}  Structure;

class Class {
   private:
      string    data_a ;
      string    data_b;
      Structure structure;
   public:
      Class(string data1, string data2, int i);
      int getIndex();
};

OPTIMIZE Class::Class(string data1, string data2, int i) {
    data_a = data1;
    data_b = data2;
    structure.value = i;
}
 
int OPTIMIZE Class::getIndex() {
    return structure.value;
}

int OPTIMIZE test2(Class *reference){
    return reference->getIndex();
}


int main(int argc, char **argv) {
	int z;
	
   Class c("attribute1","attribute2",0);
   Class *pc;
   pc = &c;

   printf("\"Passing structures by reference instead of value\"");
   for (z=0; z<reps; z++){
   test2(pc);
   }

}