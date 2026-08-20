// Usingmatrixmultiplication,writeaprogramtoverifytheassociativeproperty

#include <stdio.h>

#define MAX 20

void multiply(int A[][MAX], int B[][MAX],
              int C[][MAX], int r1, int c1, int c2)
{
    int i, j, k;

    for(i = 0; i < r1; i++)
    {
        for(j = 0; j < c2; j++)
        {
            C[i][j] = 0;

            for(k = 0; k < c1; k++)
            {
                C[i][j] += A[i][k] * B[k][j];
            }
        }
    }
}

int equal(int A[][MAX], int B[][MAX], int rows, int cols)
{
    int i, j;

    for(i = 0; i < rows; i++)
    {
        for(j = 0; j < cols; j++)
        {
            if(A[i][j] != B[i][j])
                return 0;
        }
    }

    return 1;
}

int main()
{
    int A[MAX][MAX] = {
        {1, 2},
        {3, 4}
    };

    int B[MAX][MAX] = {
        {2, 0},
        {1, 3}
    };

    int C[MAX][MAX] = {
        {1, 2},
        {2, 1}
    };

    int BC[MAX][MAX];
    int ABC1[MAX][MAX];

    int AB[MAX][MAX];
    int ABC2[MAX][MAX];

    /* BC = B × C */
    multiply(B, C, BC, 2, 2, 2);

    /* A(BC) */
    multiply(A, BC, ABC1, 2, 2, 2);

    /* AB = A × B */
    multiply(A, B, AB, 2, 2, 2);

    /* (AB)C */
    multiply(AB, C, ABC2, 2, 2, 2);

    if(equal(ABC1, ABC2, 2, 2))
        printf("Associative property verified.\n");
    else
        printf("Associative property not verified.\n");

    return 0;
}