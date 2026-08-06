/*
using recursion , reverese a given number 

*/
#include <stdio.h>
void reverseNumber(int n) {
    if (n < 10) {
        printf("%d", n);
        return;
    }
    printf("%d", n % 10);
    reverseNumber(n / 10);
}
int main() {
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);
    printf("Reversed number of %d is: ", n);
    reverseNumber(n);
    printf("\n");
    return 0;
}