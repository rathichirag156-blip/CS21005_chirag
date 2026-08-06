/*
Write a C program that converts a given integer number into its English word representation.
Input: 1234567890
Output: "One Billion Two Hundred Thirty Four Million Five Hundred Sixty Seven Thousand Eight
Hundred Ninety"
*/
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

const char *ones[] = {"", "One", "Two", "Three", "Four", "Five","Six", "Seven", "Eight", "Nine", "Ten",
                        "Eleven", "Twelve", "Thirteen", "Fourteen","Fifteen", "Sixteen", "Seventeen", "Eighteen", "Nineteen"};
const char *tens[] = {"", "", "Twenty", "Thirty", "Forty", "Fifty","Sixty", "Seventy", "Eighty", "Ninety"};
const char *thousands[] = {"", "Thousand", "Million", "Billion"};

void convertHundreds(int num, char *output) 
{
    if (num >= 100) 
    {
        strcat(output, ones[num / 100]);
        strcat(output, " Hundred ");
        num %= 100;
    }
    
    if (num >= 20) 
    {
        strcat(output, tens[num / 10]);
        strcat(output, " ");
        num %= 10;
    }
    
    if (num > 0 && num < 20) 
    {
        strcat(output, ones[num]);
        strcat(output, " ");
    }
}

// Main conversion function
void numberToWords(long n, char *output) 
{
    if (n == 0) 
    {
        strcpy(output, "Zero");
        return;
    }
    
    if (n < 0) 
    {
        strcpy(output, "Negative ");
        n = -n;
    }
    
    int parts[4] = {0}; 
    int partCount = 0;
    char temp[1000] = "";
    char result[1000] = "";
    
    while (n > 0) 
    {
        parts[partCount++] = n % 1000;
        n /= 1000;
    }
    
    for (int i = partCount - 1; i >= 0; i--) 
    {
        if (parts[i] != 0) {
            convertHundreds(parts[i], temp);
            strcat(temp, thousands[i]);
            strcat(temp, " ");
            strcat(result, temp);
            strcpy(temp, "");
        }
    }
    
    result[strlen(result) - 1] = '\0';
    strcat(output, result);
}

int main() {
    long number;
    char result[1000];
    
    printf("Enter a number: ");
    scanf("%ld", &number);
    
    numberToWords(number, result);
    printf("In words: %s\n", result);
    
    return 0;
}