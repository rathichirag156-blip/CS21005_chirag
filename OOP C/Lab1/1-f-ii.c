/*
Strong number: A strong number (also called a Krishnamurthy number) is a number in which the sumofthe factorials of its digits is equal to the number itself. For instance, 1!+4!+5!=1+24+120=145.
*/
/*
Use the function, isStrong(n), to implement a function strongSeries(n) to print all strong numbers from 1 to n.
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
void strongSeries(int n) {
    printf("Strong numbers from 1 to %d are:\n", n);
    for (int i = 1; i <= n; i++) {
        if (isStrong(i)) {
            printf("%d ", i);
        }
    }
    printf("\n");
}
int main() {
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);
    strongSeries(n);
    return 0;
}