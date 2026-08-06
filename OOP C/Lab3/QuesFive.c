// 5. Write a generic function to find the largest element in an array of any data type. The signature of the
// function is int Max(void *array, int n, int size).

#include <stdio.h>

int Max(void *array, int n, int size)
{
    int i, maxIndex = 0;

    if (size == sizeof(int))
    {
        int *arr = (int *)array;
        for (i = 1; i < n; i++)
        {
            if (arr[i] > arr[maxIndex])
                maxIndex = i;
        }
    }
    else if (size == sizeof(float))
    {
        float *arr = (float *)array;
        for (i = 1; i < n; i++)
        {
            if (arr[i] > arr[maxIndex])
                maxIndex = i;
        }
    }
    else if (size == sizeof(double))
    {
        double *arr = (double *)array;
        for (i = 1; i < n; i++)
        {
            if (arr[i] > arr[maxIndex])
                maxIndex = i;
        }
    }
    else if (size == sizeof(char))
    {
        char *arr = (char *)array;
        for (i = 1; i < n; i++)
        {
            if (arr[i] > arr[maxIndex])
                maxIndex = i;
        }
    }

    return maxIndex;
}

int main()
{
    int a[] = {10, 25, 15, 40, 30};
    float b[] = {2.5, 7.8, 4.3, 6.1};
    double c[] = {11.2, 55.4, 22.8, 44.1};
    char d[] = {'A', 'X', 'M', 'P'};

    int index;

    index = Max(a, 5, sizeof(int));
    printf("Largest int = %d\n", a[index]);

    index = Max(b, 4, sizeof(float));
    printf("Largest float = %.2f\n", b[index]);

    index = Max(c, 4, sizeof(double));
    printf("Largest double = %.2lf\n", c[index]);

    index = Max(d, 4, sizeof(char));
    printf("Largest char = %c\n", d[index]);

    return 0;
}