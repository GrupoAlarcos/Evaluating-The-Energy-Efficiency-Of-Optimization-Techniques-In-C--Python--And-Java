#include <stdio.h>
#include <stdlib.h>
#include <string.h>

extern int ia1(int, int []);
extern int ia2(int, int []);

extern int t1(int, int []);
extern int t2(int, int []);

int test_identical_output_check_all() {
    int N = 10;
    int a1[N];
    int a2[N]; 
    ia1(N, a1);
    ia2(N, a2);
    int r1 = t1(N, a1);
    int r2 = t2(N, a2);

    printf("t1 result: %d\n", r1);
    printf("t2 result: %d\n", r2);

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
        "Test1O0/11_global-variables-within-loops-test1.c",
        "Test1O3/11_global-variables-within-loops-test1.c"
    );

    int ok2 = files_identical_ignore_opt(
        "Test2O0/11_global-variables-within-loops-test2.c",
        "Test2O3/11_global-variables-within-loops-test2.c"
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