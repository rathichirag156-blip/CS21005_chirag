// 6. Write a generic function to reverse an array of any data type. The signature of the function is int
// Reverse(void *array, int n, int size)

#include <stdio.h>

int Reverse(void *array, int n, int size)
{
    char *arr = (char *)array;
    int i, j, k;
    char temp;

    for (i = 0, j = n - 1; i < j; i++, j--)
    {
        for (k = 0; k < size; k++)
        {
            temp = arr[i * size + k];
            arr[i * size + k] = arr[j * size + k];
            arr[j * size + k] = temp;
        }
    }

    return 1;  
}

int main()
{
    int a[] = {10, 20, 30, 40, 50};
    float b[] = {1.1, 2.2, 3.3, 4.4};
    char c[] = {'A', 'B', 'C', 'D', 'E'};

    int i;

    Reverse(a, 5, sizeof(int));
    printf("Reversed int array: ");
    for (i = 0; i < 5; i++)
        printf("%d ", a[i]);
    printf("\n");

    Reverse(b, 4, sizeof(float));
    printf("Reversed float array: ");
    for (i = 0; i < 4; i++)
        printf("%.1f ", b[i]);
    printf("\n");

    Reverse(c, 5, sizeof(char));
    printf("Reversed char array: ");
    for (i = 0; i < 5; i++)
        printf("%c ", c[i]);
    printf("\n");

    return 0;
}