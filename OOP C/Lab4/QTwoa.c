//  (a) Let us assume n numbers in an array. Write a function to implement
// populate(int arr[], int n, int min, int max) where the function populates the array
// with random numbers between min and max.

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void populate(int arr[], int n, int min, int max)
{
    int i;

    for (i = 0; i < n; i++)
    {
        arr[i] = min + rand() % (max - min + 1);
    }
}

int main()
{
    int n, min, max, i;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    int arr[n];

    printf("Enter minimum value: ");
    scanf("%d", &min);

    printf("Enter maximum value: ");
    scanf("%d", &max);

    srand(time(NULL));

    populate(arr, n, min, max);

    printf("Array elements are:\n");

    for (i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }

    return 0;
}