// (a) Write a function to reverse a part of the string from the i to the j index.

#include <stdio.h>

void reverse(char str[], int i, int j)
{
    char temp;

    while (i < j)
    {
        temp = str[i];
        str[i] = str[j];
        str[j] = temp;

        i++;
        j--;
    }
}

int main()
{
    char str[100];
    int i, j;

    printf("Enter a string: ");
    scanf("%99s", str);

    printf("Enter starting index i: ");
    scanf("%d", &i);

    printf("Enter ending index j: ");
    scanf("%d", &j);

    reverse(str, i, j);

    printf("String after reversal: %s\n", str);

    return 0;
}