#include <stdio.h>
#include <cstring>
#define OPTIMIZE __attribute__((optimize("O3")))

#define NELEMS(a) ((int) (sizeof(a) / sizeof(a[0])))

const int reps = 100000000;

static const struct {
    const char data[7]; /* NB. PIC */
    int        value;
} map[] = {
    { "AAAAAA", 1 },
    { "BBBBBB", 2 },
    { "CCCCCC", 3 },
    { "DDDDDD", 4 },
    { "EEEEEE", 5 },
    { "FFFFFF", 6 },
    { "GGGGGG", 7 },
    { "HHHHHH", 8 },
    { "IIIIII", 9 },
    { "JJJJJJ", 9 },
    { "KKKKKK", 9 },
    { "LLLLLL", 9 },
    { "MMMMMM", 9 },
    { "OOOOOO", 9 },
    { "PPPPPP", 9 },
    { "QQQQQQ", 9 },
    { "RRRRRR", 9 },
    { "SSSSSS", 9 },
    { "TTTTTT", 9 }
};

int OPTIMIZE dataToValue2(const char *data) {
    for (int i = 0; i < NELEMS(map); i++) 
        if (strcmp(data, map[i].data) == 0)
            return map[i].value;
    return -1; // default case
}

int test2() {
    return dataToValue2("TTTTTT");
}

//------------------------------------------------------------------------------------------

int main(int argc, char **argv) {
   int z;
   printf("\"Mapping structures\"");
   
   for (z=0; z<reps; z++){
   test2();
   }
   
}