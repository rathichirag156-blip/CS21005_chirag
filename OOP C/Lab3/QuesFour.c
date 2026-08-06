// 4. Write a program to implement generic memcpy without using a library function. The signature of the
// function is void memcopy(void *p, void *q, int size).

#include <stdio.h>

void memcopy(void *p, void *q, int size)
{
    char *dest = (char *)p;
    char *src = (char *)q;

    while (size--)
    {
        *dest = *src;
        dest++;
        src++;
    }
}

int main()
{
    int a = 10, b = 0;
    memcopy(&b, &a, sizeof(int));
    printf("Integer copied: %d\n", b);

    double x = 12.34, y = 0;
    memcopy(&y, &x, sizeof(double));
    printf("Double copied: %.2lf\n", y);

    char str1[] = "Hello World";
    char str2[20];
    memcopy(str2, str1, sizeof(str1));
    printf("String copied: %s\n", str2);
    return 0;
}