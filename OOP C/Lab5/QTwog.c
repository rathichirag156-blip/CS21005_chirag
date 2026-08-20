// Writeaprogramtoverifythedistributivepropertyofmatrixmultiplication

#include <stdio.h>

#define MAX 20

void multiply(int A[][MAX], int B[][MAX],
              int C[][MAX], int n)
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

void add(int A[][MAX], int B[][MAX],
         int C[][MAX], int n)
{
    int i, j;

    for(i = 0; i < n; i++)
    {
        for(j = 0; j < n; j++)
        {
            C[i][j] = A[i][j] + B[i][j];
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
    int A[MAX][MAX] = {
        {1, 2, 3},
        {0, 1, 4},
        {2, 0, 1}
    };

    int B[MAX][MAX] = {
        {2, 1, 0},
        {1, 3, 2},
        {0, 1, 1}
    };

    int C[MAX][MAX] = {
        {1, 0, 2},
        {2, 1, 0},
        {1, 2, 3}
    };

    int BplusC[MAX][MAX];
    int left[MAX][MAX];

    int AB[MAX][MAX];
    int AC[MAX][MAX];
    int right[MAX][MAX];

    /* B + C */
    add(B, C, BplusC, 3);

    /* A(B + C) */
    multiply(A, BplusC, left, 3);

    /* AB */
    multiply(A, B, AB, 3);

    /* AC */
    multiply(A, C, AC, 3);

    /* AB + AC */
    add(AB, AC, right, 3);

    if(equal(left, right, 3))
        printf("Distributive property verified.\n");
    else
        printf("Distributive property not verified.\n");

    return 0;
}