// 4. Write a program to demonstrate the memory leakage issue.


#include <stdio.h>
#include <stdlib.h>

int main()
{
    int *ptr;

    ptr = (int *)malloc(5 * sizeof(int));

    if (ptr == NULL)
    {
        printf("Memory allocation failed\n");
        return 1;
    }

    for (int i = 0; i < 5; i++)
    {
        ptr[i] = i + 1;
    }

    printf("Values stored in dynamically allocated memory:\n");

    for (int i = 0; i < 5; i++)
    {
        printf("%d ", ptr[i]);
    }

    printf("\n");

    ptr = NULL;

    printf("Memory has been leaked!\n");

    return 0;
}