// 3. Write a program to implement generic memcmp without using a library function. The signature of the
// function is int memcomp(void *p, void *q, int size).

#include <stdio.h>

int memcomp(void *p, void *q, int size)
{
    unsigned char *a = (unsigned char *)p;
    unsigned char *b = (unsigned char *)q;

    for (int i = 0; i < size; i++)
    {
        if (a[i] != b[i])
            return a[i] - b[i];
    }

    return 0;
}

int main()
{
    int arr1[] = {10, 20, 30, 40};
    int arr2[] = {10, 20, 30, 40};
    int arr3[] = {10, 20, 35, 40};

    if (memcomp(arr1, arr2, sizeof(arr1)) == 0)
        printf("arr1 and arr2 are equal.\n");
    else
        printf("arr1 and arr2 are different.\n");

    if (memcomp(arr1, arr3, sizeof(arr1)) == 0)
        printf("arr1 and arr3 are equal.\n");
    else
        printf("arr1 and arr3 are different.\n");

    return 0;
}