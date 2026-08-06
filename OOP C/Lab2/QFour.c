/*
Write a program to check whether a given number is valid floating point or not.
*/
#include <stdio.h>
#include <string.h>

void checkFloat(char str[])
{
    int i, dot = 0, digit = 0, valid = 1;
    int len = strlen(str);

    if (str[0] == '+' || str[0] == '-')
        i = 1;
    else
        i = 0;

    for (; i < len; i++)
    {
        if (str[i] >= '0' && str[i] <= '9')
        {
            digit = 1;
        }
        else if (str[i] == '.')
        {
            dot++;
            if (dot > 1)
            {
                valid = 0;
                break;
            }
        }
        else
        {
            valid = 0;
            break;
        }
    }

    if (valid && dot == 1 && digit)
        printf("Valid Floating Point Number\n");
    else
        printf("Invalid Floating Point Number\n");
}

int main()
{
    char str[100];

    printf("Enter a number: ");
    scanf("%s", str);

    checkFloat(str);

    return 0;
}