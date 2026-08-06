/*
Use the function, isPalindrome(n), to implement a function palindromeSeries(n) to print all palindromic numbers from 1 to n.
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
int palindromeSeries(int n) {
    int i;
    for (i = 1; i <= n; i++) {
        if (isPalindrome(i)) {
            printf("%d ", i);
        }
    }
    printf("\n");
}
int main() {
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);
    printf("Palindromic numbers from 1 to %d are: ", n);
    palindromeSeries(n);
    return 0;
}