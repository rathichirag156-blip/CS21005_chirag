// 1. Write a generic function to compare two variables. The function should work for int, double, string, etc.
// You need to write a main function to test the generic function.

#include <stdio.h>
#include <string.h>

void *compare(void *a, void *b, int (*cmp)(const void *, const void *))
{
    if (cmp(a, b) > 0)
        return a;
    else
        return b;
}

int compareInt(const void *a, const void *b)
{
    int x = *(int *)a;
    int y = *(int *)b;
    return x - y;
}


int compareDouble(const void *a, const void *b)
{
    double x = *(double *)a;
    double y = *(double *)b;

    if (x > y)
        return 1;
    else if (x < y)
        return -1;
    else
        return 0;
}


int compareString(const void *a, const void *b)
{
    return strcmp((char *)a, (char *)b);
}

int main()
{
    int a = 10, b = 20;
    int *maxInt = (int *)compare(&a, &b, compareInt);
    printf("Greater Integer: %d\n", *maxInt);

    double x = 12.5, y = 15.8;
    double *maxDouble = (double *)compare(&x, &y, compareDouble);
    printf("Greater Double: %.2lf\n", *maxDouble);

    char s1[] = "Apple";
    char s2[] = "Banana";
    char *maxString = (char *)compare(s1, s2, compareString);
    printf("Greater String: %s\n", maxString);

    return 0;
}