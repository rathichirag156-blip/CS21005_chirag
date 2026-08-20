// (b) Utilize the above function to reverse a sentence wordwise. For instance, input:
// "practice makes perfect" and output: "perfect makes practice"

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
    char str[200];
    int i, start, length;

    printf("Enter a sentence: ");
    fgets(str, sizeof(str), stdin);

    length = 0;
    while (str[length] != '\0')
    {
        length++;
    }

    
    if (str[length - 1] == '\n')
    {
        str[length - 1] = '\0';
        length--;
    }

   
    reverse(str, 0, length - 1);

  
    start = 0;

    for (i = 0; i <= length; i++)
    {
        if (str[i] == ' ' || str[i] == '\0')
        {
            reverse(str, start, i - 1);
            start = i + 1;
        }
    }

    printf("Output: %s\n", str);

    return 0;
}