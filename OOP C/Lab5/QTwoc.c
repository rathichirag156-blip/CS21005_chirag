// WriteaCprogramtodeterminewhetheragivensquarematrixissymmetric,

#include <stdio.h>

#define MAX 20

int main()
{
    int A[MAX][MAX];
    int n, i, j;
    int symmetric = 1;

    printf("Enter order of matrix: ");
    scanf("%d", &n);

    printf("Enter matrix:\n");

    for(i = 0; i < n; i++)
    {
        for(j = 0; j < n; j++)
        {
            scanf("%d", &A[i][j]);
        }
    }

    for(i = 0; i < n; i++)
    {
        for(j = 0; j < n; j++)
        {
            if(A[i][j] != A[j][i])
            {
                symmetric = 0;
                break;
            }
        }
    }

    if(symmetric)
        printf("Matrix is Symmetric.\n");
    else
        printf("Matrix is not Symmetric.\n");

    return 0;
}