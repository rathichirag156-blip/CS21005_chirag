// Usingmatrixmultiplicationandtranspose,writeaprogramtocheckwhetherthe followingmatrixisorthogonal:

#include <stdio.h>

#define MAX 20

void transpose(int A[][MAX], int T[][MAX], int n)
{
    int i, j;

    for(i = 0; i < n; i++)
    {
        for(j = 0; j < n; j++)
        {
            T[j][i] = A[i][j];
        }
    }
}

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
    int A[MAX][MAX], T[MAX][MAX], result[MAX][MAX];
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

    /* Find A transpose */
    transpose(A, T, n);

    /* result = A * A^T */
    multiply(A, T, result, n);

    if(isIdentity(result, n))
        printf("Matrix is Orthogonal.\n");
    else
        printf("Matrix is not Orthogonal.\n");

    return 0;
}