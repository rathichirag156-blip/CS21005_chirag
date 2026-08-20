// (a) Write a function rev(int arr[], int n, int i, int j) to reverse an array from index i
// to j.

#include <stdio.h>

void rev(int arr[], int n, int i, int j)
{
    int temp;

    while (i < j)
    {
        temp = arr[i];
        arr[i] = arr[j];
        arr[j] = temp;

        i++;
        j--;
    }
}

int main()
{
    int n, i, j, k;

    printf("Enter the size of array: ");
    scanf("%d", &n);

    int arr[n];

    printf("Enter %d elements:\n", n);
    for (k = 0; k < n; k++)
    {
        scanf("%d", &arr[k]);
    }

    printf("Enter starting index i: ");
    scanf("%d", &i);

    printf("Enter ending index j: ");
    scanf("%d", &j);

    rev(arr, n, i, j);

    printf("Array after reversal:\n");
    for (k = 0; k < n; k++)
    {
        printf("%d ", arr[k]);
    }

    return 0;
}