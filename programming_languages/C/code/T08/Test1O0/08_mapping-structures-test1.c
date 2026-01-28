#include <stdio.h>
#include <cstring>
#define OPTIMIZE __attribute__((optimize("O0")))

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

int OPTIMIZE dataToValue(const char *data) {
    if      (strcmp(data, "AAAAAA") == 0) return 1;
    else if (strcmp(data, "BBBBBB") == 0) return 2;
    else if (strcmp(data, "CCCCCC") == 0) return 3;
    else if (strcmp(data, "DDDDDD") == 0) return 4;
    else if (strcmp(data, "EEEEEE") == 0) return 5;
    else if (strcmp(data, "FFFFFF") == 0) return 6;
    else if (strcmp(data, "GGGGGG") == 0) return 7;
    else if (strcmp(data, "HHHHHH") == 0) return 8;
    else if (strcmp(data, "IIIIII") == 0) return 9;
    else if (strcmp(data, "JJJJJJ") == 0) return 10;
    else if (strcmp(data, "KKKKKK") == 0) return 11;
    else if (strcmp(data, "LLLLLL") == 0) return 12;
    else if (strcmp(data, "MMMMMM") == 0) return 13;
    else if (strcmp(data, "NNNNNN") == 0) return 14;
    else if (strcmp(data, "OOOOOO") == 0) return 15;
    else if (strcmp(data, "PPPPPP") == 0) return 16;
    else if (strcmp(data, "QQQQQQ") == 0) return 17;
    else if (strcmp(data, "RRRRRR") == 0) return 18;
    else if (strcmp(data, "SSSSSS") == 0) return 19;
    else if (strcmp(data, "TTTTTT") == 0) return 20;
    else return -1; /* default case */
}

int test1() {
    return dataToValue("TTTTTT");
}

//------------------------------------------------------------------------------------------

int main(int argc, char **argv) {
	
   int z;
   printf("\"Mapping structures\"");
   
   for (z=0; z<reps; z++){
   test1();
   }
   
}