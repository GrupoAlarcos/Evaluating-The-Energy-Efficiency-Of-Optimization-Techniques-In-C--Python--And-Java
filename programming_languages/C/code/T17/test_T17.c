#include <stdio.h>
#include <stdlib.h>
#include <string.h>

extern long t1(int, int);
extern long t2(unsigned int , unsigned int);

int test_identical_output_check_all() {
    int factor1 = 100000000;
    int factor2 = 1024;
    unsigned int factor3 = 100000000;
    unsigned int factor4 = 10;

    long r1 = t1(factor1, factor2);
    long r2 = t2(factor3, factor4);

    printf("t1 result: %ld\n", r1);
    printf("t2 result: %ld\n", r2);

    return (r1 == r2);
}

int files_identical_ignore_opt(const char *f1, const char *f2) {
    FILE *a = fopen(f1, "r");
    FILE *b = fopen(f2, "r");

    if (!a || !b) {
        printf("Error opening files: %s vs %s\n", f1, f2);
        return 0;
    }

    char line1[512];
    char line2[512];

    while (1) {
        int r1 = fgets(line1, sizeof(line1), a) != NULL;
        int r2 = fgets(line2, sizeof(line2), b) != NULL;

        if (!r1 || !r2)
            break;

        if (strstr(line1, "OPTIMIZE") && strstr(line2, "OPTIMIZE"))
            continue;

        if (strcmp(line1, line2) != 0) {
            fclose(a);
            fclose(b);
            return 0;
        }
    }

    fclose(a);
    fclose(b);

    return 1;
}

int test_files_identical() {
    int ok1 = files_identical_ignore_opt(
        "Test1O0/17_multiplication-by-a-power-of-two-factor-test1.c",
        "Test1O3/17_multiplication-by-a-power-of-two-factor-test1.c"
    );

    int ok2 = files_identical_ignore_opt(
        "Test2O0/17_multiplication-by-a-power-of-two-factor-test2.c",
        "Test2O3/17_multiplication-by-a-power-of-two-factor-test2.c"
    );
    return ok1 && ok2;
}

int main() {
    int ok_runtime = test_identical_output_check_all();
    int ok_files = test_files_identical();

    if (ok_runtime && ok_files) {
        return 0;
    } else {
        fprintf(stderr, "[ERROR] Mismatch detected between versions!\n");
        return 1;
    }
}