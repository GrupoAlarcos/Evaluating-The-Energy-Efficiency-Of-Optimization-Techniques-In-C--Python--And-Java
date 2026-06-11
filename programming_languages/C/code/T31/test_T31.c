#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>

extern void ia1(int, char []);
extern void ia2(int, char []);

extern void t1(int, char[], FILE *);
extern void t2(int, char[], FILE *);

int files_equal(const char *f1, const char *f2)
{
    FILE *a = fopen(f1, "r");
    FILE *b = fopen(f2, "r");

    if (!a || !b) return 0;

    int c1, c2;

    do {
        c1 = fgetc(a);
        c2 = fgetc(b);

        if (c1 != c2) {
            fclose(a);
            fclose(b);
            return 0;
        }

    } while (c1 != EOF && c2 != EOF);

    fclose(a);
    fclose(b);
    return 1;
}

int test_identical_output_check_all()
{
    int N = 50;
    int Nbuf = 5;
    char a1[N];
    char a2[N];
    char buf[Nbuf];
    FILE *fptr1;
    fptr1 = fopen("test1.txt", "w");
    FILE *fptr2;
    fptr2 = fopen("test2.txt", "w");

    ia1(N, a1);
    ia2(N, a2);

    int res = files_equal("test1.txt", "test2.txt");

    if (res)
        printf("The files are IDENTICAL\n");
    else
        printf("The files are DIFFERENT\n");

    remove("test1.txt");
    remove("test2.txt");

    return res;
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
        "Test1O0/31_BufferIO-test1.c",
        "Test1O3/31_BufferIO-test1.c");

    int ok2 = files_identical_ignore_opt(
        "Test2O0/31_BufferIO-test2.c",
        "Test2O3/31_BufferIO-test2.c");
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