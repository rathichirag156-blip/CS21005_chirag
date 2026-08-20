// Usingmatrixmultiplication,writeaprogramtocheckwhether the followingtwo matricescommute:

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
    int A[MAX][MAX], B[MAX][MAX];
    int AB[MAX][MAX], BA[MAX][MAX];
    int n, i, j;

    printf("Enter order of matrices: ");
    scanf("%d", &n);

    printf("Enter matrix A:\n");

    for(i = 0; i < n; i++)
    {
        for(j = 0; j < n; j++)
        {
            scanf("%d", &A[i][j]);
        }
    }

    printf("Enter matrix B:\n");

    for(i = 0; i < n; i++)
    {
        for(j = 0; j < n; j++)
        {
            scanf("%d", &B[i][j]);
        }
    }

    multiply(A, B, AB, n);
    multiply(B, A, BA, n);

    if(equal(AB, BA, n))
        printf("Matrices commute.\n");
    else
        printf("Matrices do not commute.\n");

    return 0;
}