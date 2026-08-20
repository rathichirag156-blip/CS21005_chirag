//(a) Write a program to convert a floating-point number into a binary number.

#include <stdio.h>

int main()
{
    double num, fraction;
    int integerPart, bit[32], i = 0;

    printf("Enter a floating-point number: ");
    scanf("%lf", &num);

    integerPart = (int)num;
    fraction = num - integerPart;

    if (integerPart == 0)
    {
        printf("Binary: 0");
    }
    else
    {
        while (integerPart > 0)
        {
            bit[i] = integerPart % 2;
            integerPart = integerPart / 2;
            i++;
        }

        printf("Binary: ");

        while (i > 0)
        {
            printf("%d", bit[--i]);
        }
    }

    if (fraction > 0)
    {
        printf(".");

        for (i = 0; i < 10 && fraction != 0; i++)
        {
            fraction = fraction * 2;

            if (fraction >= 1)
            {
                printf("1");
                fraction = fraction - 1;
            }
            else
            {
                printf("0");
            }
        }
    }

    printf("\n");

    return 0;
}