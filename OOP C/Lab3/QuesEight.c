// 8. Write a recursive function to implement xn in O(logn) time complexity

#include <stdio.h>


long long power(long long x, int n)
{
    if (n == 0)
        return 1;

    long long temp = power(x, n / 2);

    if (n % 2 == 0)
        return temp * temp;
    else
        return x * temp * temp;
}

int main()
{
    long long x;
    int n;

    printf("Enter base and exponent: ");
    scanf("%lld %d", &x, &n);

    printf("%lld^%d = %lld\n", x, n, power(x, n));

    return 0;
}