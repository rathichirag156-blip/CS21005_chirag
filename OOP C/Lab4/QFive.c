// 5. Write a program to add two very large numbers. The numbers are represented in a
// character array, and the output should also be stored in a character array.

#include <stdio.h>
#include <string.h>

void add(char num1[], char num2[], char result[])
{
    int i, j, k;
    int carry = 0;
    int sum;

    i = strlen(num1) - 1;
    j = strlen(num2) - 1;
    k = 0;

    while (i >= 0 || j >= 0 || carry)
    {
        sum = carry;

        if (i >= 0)
            sum += num1[i--] - '0';

        if (j >= 0)
            sum += num2[j--] - '0';

        result[k++] = (sum % 10) + '0';
        carry = sum / 10;
    }

    result[k] = '\0';

    for (i = 0, j = k - 1; i < j; i++, j--)
    {
        char temp = result[i];
        result[i] = result[j];
        result[j] = temp;
    }
}

int main()
{
    char num1[1000];
    char num2[1000];
    char result[1001];

    printf("Enter first large number: ");
    scanf("%999s", num1);

    printf("Enter second large number: ");
    scanf("%999s", num2);

    add(num1, num2, result);

    printf("Sum = %s\n", result);

    return 0;
}