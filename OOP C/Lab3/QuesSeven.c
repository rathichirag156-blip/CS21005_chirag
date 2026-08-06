// 7. Write a function to search an array using a comparison function pointer. The signature of the function
// is int Search(void *array, int n, void *key, int size)

#include <stdio.h>
#include <string.h>


int (*cmp)(const void *, const void *);


int Search(void *array, int n, void *key, int size)
{
    char *arr = (char *)array;

    for (int i = 0; i < n; i++)
    {
        if (cmp(arr + i * size, key) == 0)
            return i;   
    }

    return -1;         
}

int compareInt(const void *a, const void *b)
{
    int x = *(int *)a;
    int y = *(int *)b;

    if (x == y)
        return 0;
    return (x > y) ? 1 : -1;
}

int compareString(const void *a, const void *b)
{
    return strcmp((char *)a, (char *)b);
}

int main()
{
    int arr[] = {10, 20, 30, 40, 50};
    int key = 30;

    cmp = compareInt;

    int pos = Search(arr, 5, &key, sizeof(int));

    if (pos != -1)
        printf("Integer found at index %d\n", pos);
    else
        printf("Integer not found\n");

    char names[][20] = {"Apple", "Banana", "Mango", "Orange"};
    char keyStr[] = "Mango";

    cmp = compareString;

    pos = Search(names, 4, keyStr, sizeof(names[0]));

    if (pos != -1)
        printf("String found at index %d\n", pos);
    else
        printf("String not found\n");

    return 0;
}