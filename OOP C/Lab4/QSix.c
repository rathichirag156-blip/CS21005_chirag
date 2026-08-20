// 6. Write a function to implement the following without using the library function
// (a) String length
// (b) String copy
// (c) String concatenation
// (d) String compare

#include <stdio.h>

/* (a) String Length */
int my_strlen(char str[])
{
    int i = 0;

    while (str[i] != '\0')
    {
        i++;
    }

    return i;
}

/* (b) String Copy */
void my_strcpy(char dest[], char src[])
{
    int i = 0;

    while (src[i] != '\0')
    {
        dest[i] = src[i];
        i++;
    }

    dest[i] = '\0';
}

/* (c) String Concatenation */
void my_strcat(char dest[], char src[])
{
    int i = 0;
    int j = 0;

    
    while (dest[i] != '\0')
    {
        i++;
    }

   
    while (src[j] != '\0')
    {
        dest[i] = src[j];
        i++;
        j++;
    }

    dest[i] = '\0';
}

/* (d) String Compare */
int my_strcmp(char str1[], char str2[])
{
    int i = 0;

    while (str1[i] != '\0' && str2[i] != '\0')
    {
        if (str1[i] != str2[i])
        {
            return str1[i] - str2[i];
        }

        i++;
    }

    return str1[i] - str2[i];
}

int main()
{
    char str1[100], str2[100], copy[100], concat[200];
    int result;

    printf("Enter first string: ");
    scanf("%99s", str1);

    printf("Enter second string: ");
    scanf("%99s", str2);

    /* (a) String Length */
    printf("\nLength of first string = %d", my_strlen(str1));
    printf("\nLength of second string = %d", my_strlen(str2));

    /* (b) String Copy */
    my_strcpy(copy, str1);
    printf("\nCopied string = %s", copy);

    /* (c) String Concatenation */
    my_strcpy(concat, str1);
    my_strcat(concat, str2);
    printf("\nConcatenated string = %s", concat);

    /* (d) String Compare */
    result = my_strcmp(str1, str2);

    if (result == 0)
        printf("\nStrings are equal");
    else if (result < 0)
        printf("\nFirst string is smaller than second string");
    else
        printf("\nFirst string is greater than second string");

    return 0;
}