//  Write a program to implement reversing each group of items in the array, where
// it reverses every k items of the array. Derive the time and space complexity. For
// example:
// For n = 22 and k =5
// Input array: 1 2 3 4 5 6 7 8 9 10 11 12 13 14 15 16 17 18 19 20 21 22
// Output: 5 4 3 2 1 10 9 8 7 6 15 14 13 12 11 20 19 18 17 16 22 21


#include <stdio.h>

void reverse(int arr[], int start, int end)
{
    int temp;

    while (start < end)
    {
        temp = arr[start];
        arr[start] = arr[end];
        arr[end] = temp;

        start++;
        end--;
    }
}

void reverseGroups(int arr[], int n, int k)
{
    int i;

    for (i = 0; i < n; i = i + k)
    {
        int start = i;
        int end = i + k - 1;

        if (end >= n)
        {
            end = n - 1;
        }

        reverse(arr, start, end);
    }
}

int main()
{
    int n, k, i;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    int arr[n];

    printf("Enter %d elements:\n", n);
    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    printf("Enter k: ");
    scanf("%d", &k);

    reverseGroups(arr, n, k);

    printf("Array after reversing every %d elements:\n", k);

    for (i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }

    return 0;
}