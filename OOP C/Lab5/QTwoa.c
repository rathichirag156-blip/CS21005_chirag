// Usingmatrixmultiplication,writeaprogramtocheckwhetherthefollowingmatrix isidempotent:


#include <stdio.h>

#define MAX 20

void multiply(int A[][MAX], int B[][MAX], int C[][MAX], int n)
{
    int i, j, k;

    for(i = 0; i < n; i++)
    {
        for(j = 0; j < n; j++)
        {
            C[i][j] = 0;

            for(k = 0; k < n; k++)
            {
                C[i][j] += A[i][k] * B[k][j];
            }
        }
    }
}

int equal(int A[][MAX], int B[][MAX], int n)
{
    int i, j;

    for(i = 0; i < n; i++)
    {
        for(j = 0; j < n; j++)
        {
            if(A[i][j] != B[i][j])
                return 0;
        }
    }

    return 1;
}

int main()
{
    int A[MAX][MAX], result[MAX][MAX];
    int n, i, j;

    printf("Enter order of matrix: ");
    scanf("%d", &n);

    printf("Enter matrix A:\n");

    for(i = 0; i < n; i++)
    {
        for(j = 0; j < n; j++)
        {
            scanf("%d", &A[i][j]);
        }
    }

    /* result = A * A */
    multiply(A, A, result, n);

    if(equal(result, A, n))
        printf("Matrix is Idempotent.\n");
    else
        printf("Matrix is not Idempotent.\n");

    return 0;
}