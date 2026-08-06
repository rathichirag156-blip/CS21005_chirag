/*
Use the function, isArmstrong(n), to implement a function ArmstrongSeries(n) to print all Armstrong numbers from 1 to n.
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
int ArmstrongSeries(int n) {
    int i;
    for (i = 1; i <= n; i++) {
        if (isArmstrong(i)) {
            printf("%d ", i);
        }
    }
    printf("\n");
}
int main() {
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);
    printf("Armstrong numbers from 1 to %d are: ", n);
    ArmstrongSeries(n);
    return 0;
}