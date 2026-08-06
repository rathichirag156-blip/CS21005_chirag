/*
Use the function, isPerfect(n), to implement a function perfectSeries(n) to print all perfect numbers from 1 to n.
*/
#include<stdio.h>
int isPerfect(int n) {
    int sum = 0;
    for (int i = 1; i <= n / 2; i++) {
        if (n % i == 0) {
            sum += i;
        }
    }
    return sum == n;
}
int perfectSeries(int n) {
    int i;
    for (i = 1; i <= n; i++) {
        if (isPerfect(i)) {
            printf("%d ", i);
        }
    }
    printf("\n");
}
int main() {
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);
    printf("Perfect numbers from 1 to %d are: ", n);
    perfectSeries(n);
    return 0;
}