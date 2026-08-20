// Usingmatrixmultiplication,writeaprogramtocheckwhetherthefollowingmatrix isinvolutory:

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

int isIdentity(int A[][MAX], int n)
{
    int i, j;

    for(i = 0; i < n; i++)
    {
        for(j = 0; j < n; j++)
        {
            if(i == j)
            {
                if(A[i][j] != 1)
                    return 0;
            }
            else
            {
                if(A[i][j] != 0)
                    return 0;
            }
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

    multiply(A, A, result, n);

    if(isIdentity(result, n))
        printf("Matrix is Involutory.\n");
    else
        printf("Matrix is not Involutory.\n");

    return 0;
}