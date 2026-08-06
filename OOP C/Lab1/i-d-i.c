/*
Write a program to check whether a given number is an Armstrong number or not. Name the function as isArmstrong(n).
*/
#include<stdio.h>
int power(int base, int exp) {
    int result = 1;
    for (int i = 0; i < exp; i++) {
        result *= base;
    }
    return result;
}
int isArmstrong(int n) {
    int sum = 0, temp, rem, digits = 0;

    while (temp != 0) {
        digits++;
        temp /= 10;
    }
    temp = n;
    while (temp != 0) {
        rem = temp % 10;
        sum += power(rem, digits);
        temp /= 10;
    }
    if (sum == n) { return 1; 
    } else { return 0; }
}
int main() {
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);
    if (isArmstrong(n)) {
        printf("%d is an Armstrong number.\n", n);
    } else {
        printf("%d is not an Armstrong number.\n", n);
    }
    return 0;
}