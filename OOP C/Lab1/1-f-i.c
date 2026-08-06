/*
Strong number: A strong number (also called a Krishnamurthy number) is a number in which the sumofthe factorials of its digits is equal to the number itself. For instance, 1!+4!+5!=1+24+120=145.
*/
/*
Write a function to check whether a given number is a strong number or not. Name the function as isStrong(n).
*/
#include<stdio.h>
int factorial(int n) {
    int fact = 1;
    for (int i = 1; i <= n; i++) {
        fact *= i;
    }
    return fact;
}
int isStrong(int n) {
    int sum = 0, temp = n, rem;
    while (temp != 0) {
        rem = temp % 10;
        sum += factorial(rem);
        temp /= 10;
    }
    return sum == n;
}
int main() {
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);
    if (isStrong(n)) {
        printf("%d is a strong number.\n", n);
    } else {
        printf("%d is not a strong number.\n", n);
    }
    return 0;
}