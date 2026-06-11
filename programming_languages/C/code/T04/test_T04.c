#include <stdio.h>
#include <stdlib.h>
#include <string.h>

class c1;
class c2;

extern "C" c1* create_c1();
extern "C" c2* create_c2();

extern void t1(c1 *, int, int[]);
extern void t2(c2 *, int, int[]);

int test_identical_output_check_all()
{
    int N = 20;
    int a1[N];
    int a2[N];

    c1* obj1 = create_c1();
    t1(obj1, N, a1);

    c2* obj2 = create_c2();
    t2(obj2, N, a2);

    for (int i = 0; i < N; i++) {
        printf("a1[%d] = %d | a2[%d] = %d\n", i, a1[i], i, a2[i]);
    }

    return memcmp(a1, a2, N * sizeof(int)) == 0;
}

int files_identical_ignore_opt(const char *f1, const char *f2)
{
    FILE *a = fopen(f1, "r");
    FILE *b = fopen(f2, "r");

    if (!a || !b)
    {
        printf("Error opening files: %s vs %s\n", f1, f2);
        return 0;
    }

    char line1[512];
    char line2[512];

    while (1)
    {
        int r1 = fgets(line1, sizeof(line1), a) != NULL;
        int r2 = fgets(line2, sizeof(line2), b) != NULL;

        if (!r1 || !r2)
            break;

        if (strstr(line1, "OPTIMIZE") && strstr(line2, "OPTIMIZE"))
            continue;

        if (strcmp(line1, line2) != 0)
        {
            fclose(a);
            fclose(b);
            return 0;
        }
    }

    fclose(a);
    fclose(b);

    return 1;
}

int test_files_identical()
{
    int ok1 = files_identical_ignore_opt(
        "Test1O0/04_cascaded-function-calls-test1.c",
        "Test1O3/04_cascaded-function-calls-test1.c");

    int ok2 = files_identical_ignore_opt(
        "Test2O0/04_cascaded-function-calls-test2.c",
        "Test2O3/04_cascaded-function-calls-test2.c");
    return ok1 && ok2;
}

int main()
{
    int ok_runtime = test_identical_output_check_all();
    int ok_files = test_files_identical();

    if (ok_runtime && ok_files)
    {
        return 0;
    }
    else
    {
        fprintf(stderr, "[ERROR] Mismatch detected between versions!\n");
        return 1;
    }
}