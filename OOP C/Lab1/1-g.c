/*
Catalan Number: A number n is called a Catalan number if it is equal to some term in the Catalan sequence. The nth Catalan number is given by the formula: Cn = 1 n+1 2n n = (2n)! (n +1)!n! i. Write a function, catalanSeries(n), to print all catalan numbers from 1 to n.
*/
#include<stdio.h>
long long factorial(int n) {
    long long fact = 1;
    for (int i = 1; i <= n; i++) {
        fact *= i;
    }
    return fact;
}
long long catalan(int n) {
    return factorial(2 * n) / (factorial(n + 1) * factorial(n));
}
int main() {
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);
    printf("Catalan numbers from 1 to %d are:\n", n);
    for (int i = 0; ; i++) {
        long long c = catalan(i);
        if (c > n) {
            break;
        }
        printf("%lld ", c);
    }
    printf("\n");
    return 0;
}