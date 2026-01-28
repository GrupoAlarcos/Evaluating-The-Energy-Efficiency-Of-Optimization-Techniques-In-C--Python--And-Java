#include <stdio.h>
#define OPTIMIZE __attribute__((optimize("O0")))

const int reps = 100000000;

class Class {
   private:
      int data;
   public:
      void setData(int data);
      int  getData();
};

void Class::setData(int data) {
   Class::data = data;
}

int Class::getData(){
   return data;
}

void OPTIMIZE test1(Class *c, int N, int a[]){
   for (int i=0; i<N; i++){
      if (c->getData()==1){
         a[i] = 0;
      } 
   }
}

int main(int argc, char **argv) {
   
   int j;
   int N = 20;

   int a[N];

   Class c;
   c.setData(1);
   Class *pclass;
   pclass = &c;

   printf("\"Cascaded function calls\"");
   for (j=0; j<reps; j++){
      test1(pclass, N, a);
   }

}