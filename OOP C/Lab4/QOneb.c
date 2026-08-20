// b) Write a program to convert the binary number back into a floating-point number.


#include <stdio.h>
#include <math.h>

int main()
{
    char binary[100];
    double decimal = 0;
    int i, point = -1;

    printf("Enter a binary floating-point number: ");
    scanf("%s", binary);


    for (i = 0; binary[i] != '\0'; i++)
    {
        if (binary[i] == '.')
        {
            point = i;
            break;
        }
    }

    
    if (point == -1)
    {
        point = i;
    }

    
    for (i = 0; i < point; i++)
    {
        decimal = decimal * 2 + (binary[i] - '0');
    }

    
    if (binary[point] == '.')
    {
        double power = 0.5;

        for (i = point + 1; binary[i] != '\0'; i++)
        {
            decimal = decimal + (binary[i] - '0') * power;
            power = power / 2;
        }
    }

    printf("Floating-point number = %lf\n", decimal);

    return 0;
}

