#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>

extern bool t1(unsigned int, unsigned int, unsigned int, unsigned int, unsigned int, unsigned int, unsigned int, unsigned int []);
extern bool t2(unsigned int, unsigned int, unsigned int, unsigned int, unsigned int, unsigned int, unsigned int, unsigned int []);

int test_identical_output_check_all()
{
    unsigned int f = 4, e = 3, d = 2, c = 1;
    unsigned int lookup[] = {f, e, d, d, c, c, c, c};

    int combinations[8][3] = {
        {0, 0, 0},
        {0, 0, 1},
        {0, 1, 0},
        {0, 1, 1},
        {1, 0, 0},
        {1, 0, 1},
        {1, 1, 0},
        {1, 1, 1}
    };

    for (int i = 0; i < 8; i++)
    {
        int b1 = combinations[i][0];
        int b2 = combinations[i][1];
        int b3 = combinations[i][2];

        unsigned int r1 = t1(b1, b2, b3, c, d, e, f, lookup);
        unsigned int r2 = t2(b1, b2, b3, c, d, e, f, lookup);

        printf("Input (%d,%d,%d) -> r1 = %u, r2 = %u\n", b1, b2, b3, r1, r2);

        if (r1 != r2)
        {
            printf("Mismatch at (%d,%d,%d): %u vs %u\n", b1, b2, b3, r1, r2);
            return 0;
        }
    }

    return 1;
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
        "Test1O0/32_LookupTable-test1.c",
        "Test1O3/32_LookupTable-test1.c"
    );

    int ok2 = files_identical_ignore_opt(
        "Test2O0/32_LookupTable-test2.c",
        "Test2O3/32_LookupTable-test2.c"
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