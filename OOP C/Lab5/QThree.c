// Usingmatrixmultiplication,writeaprogramtofindthenthFibonaccinumberbyusing thefollowingmatrixrelation:

#include <stdio.h>

#define MAX 2

void multiply(long long A[][MAX],
              long long B[][MAX],
              long long C[][MAX])
{
    long long temp[MAX][MAX] = {0};

    int i, j, k;

    for(i = 0; i < MAX; i++)
    {
        for(j = 0; j < MAX; j++)
        {
            for(k = 0; k < MAX; k++)
            {
                temp[i][j] += A[i][k] * B[k][j];
            }
        }
    }

    for(i = 0; i < MAX; i++)
    {
        for(j = 0; j < MAX; j++)
        {
            C[i][j] = temp[i][j];
        }
    }
}

void power(long long A[][MAX],
           long long n,
           long long result[][MAX])
{
    long long temp[MAX][MAX];

   
    result[0][0] = 1;
    result[0][1] = 0;
    result[1][0] = 0;
    result[1][1] = 1;

    while(n > 0)
    {
        if(n % 2 == 1)
        {
            multiply(result, A, temp);

            result[0][0] = temp[0][0];
            result[0][1] = temp[0][1];
            result[1][0] = temp[1][0];
            result[1][1] = temp[1][1];
        }

        multiply(A, A, temp);

        A[0][0] = temp[0][0];
        A[0][1] = temp[0][1];
        A[1][0] = temp[1][0];
        A[1][1] = temp[1][1];

        n = n / 2;
    }
}

int main()
{
    long long n;
    long long A[MAX][MAX];
    long long result[MAX][MAX];

    printf("Enter n: ");
    scanf("%lld", &n);

    if(n == 0)
    {
        printf("Fibonacci number F0 = 0\n");
        return 0;
    }

 

    A[0][0] = 1;
    A[0][1] = 1;
    A[1][0] = 1;
    A[1][1] = 0;

    power(A, n, result);

    printf("Fibonacci number F%lld = %lld\n",
           n, result[0][1]);

    return 0;
}