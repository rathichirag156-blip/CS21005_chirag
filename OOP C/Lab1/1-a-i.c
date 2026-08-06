/*
Write a function to check whether a given number is a palindrome or not. Name the function name as isPalindrome(n).
*/
#include<stdio.h>

int isPalindrome(int n) {
    int rev = 0, rem, temp;
    temp = n;
    while (n > 0) {
        rem = n % 10;
        rev = rev * 10 + rem;
        n = n / 10;
    }
    if (temp == rev) {
        return 1;
    } else {
        return 0;
    }
}
int main() {
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);
    if (isPalindrome(n)) {
        printf("%d is a palindrome number.\n", n);
    } else {
        printf("%d is not a palindrome number.\n", n);
    }
    return 0;
}