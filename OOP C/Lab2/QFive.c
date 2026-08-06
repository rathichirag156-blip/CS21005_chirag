/*
Write a C program that validates whether a given password follows specific security rules. The program should check if the password meets all the required criteria and display appropriate error messages for any violations. 
The rules are given below: 
• Minimum length: Usually 8–16 characters (many security experts recommend at least 12 characters). 
• Uppercase letter: At least one uppercase letter (A–Z). 
• Lowercase letter: At least one lowercase letter (a–z). 
• Number: At least one digit (0–9). 
• Special character: At least one special symbol such as @, #, $, %, &, etc. 
• No spaces: Most systems do not allow spaces in passwords.
*/
#include <stdio.h>
#include <string.h>

void checkPassword(char pass[])
{
    int i;
    int len = strlen(pass);

    int upper = 0, lower = 0, digit = 0, special = 0, space = 0;

    if (len < 8 || len > 16)
        printf("Password length should be between 8 and 16 characters.\n");

    for (i = 0; i < len; i++)
    {
        if (pass[i] >= 'A' && pass[i] <= 'Z')
            upper = 1;
        else if (pass[i] >= 'a' && pass[i] <= 'z')
            lower = 1;
        else if (pass[i] >= '0' && pass[i] <= '9')
            digit = 1;
        else if (pass[i] == ' ')
            space = 1;
        else
            special = 1;
    }

    if (!upper)
        printf("Password must contain at least one uppercase letter.\n");

    if (!lower)
        printf("Password must contain at least one lowercase letter.\n");

    if (!digit)
        printf("Password must contain at least one digit.\n");

    if (!special)
        printf("Password must contain at least one special character.\n");

    if (space)
        printf("Password should not contain spaces.\n");

    if (len >= 8 && len <= 16 && upper && lower && digit && special && !space)
        printf("Password is VALID.\n");
    else
        printf("Password is INVALID.\n");
}

int main()
{
    char pass[100];

    printf("Enter Password: ");
    fgets(pass, sizeof(pass), stdin);

    pass[strcspn(pass, "\n")] = '\0';

    checkPassword(pass);

    return 0;
}