// Question 1

// Given a matrix A[][] of m × n, write programs to:

// Display principal diagonal elements
// Display secondary principal diagonal elements
// Display left-upper triangular matrix
// Display right-upper triangular matrix
// Display left-lower triangular matrix
//Display right-lower triangular matrix


#include <stdio.h>

int main()
{
    int a[20][20];
    int m, n, i, j;

    printf("Enter number of rows and columns: ");
    scanf("%d %d", &m, &n);

    printf("Enter the matrix:\n");
    for(i = 0; i < m; i++)
    {
        for(j = 0; j < n; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }

    /* (a) Principal diagonal */
    printf("\nPrincipal diagonal elements:\n");

    for(i = 0; i < m && i < n; i++)
    {
        printf("%d ", a[i][i]);
    }

    /* (b) Secondary diagonal */
    printf("\n\nSecondary diagonal elements:\n");

    for(i = 0; i < m && i < n; i++)
    {
        printf("%d ", a[i][n - 1 - i]);
    }

    /*
       The following four parts are normally considered
       for a square matrix.
    */

    if(m != n)
    {
        printf("\n\nTriangular matrices require a square matrix.\n");
        return 0;
    }

    /* (c) Left-upper triangular */
    printf("\n\nLeft-upper triangular matrix:\n");

    for(i = 0; i < n; i++)
    {
        for(j = 0; j < n; j++)
        {
            if(j >= i && i + j <= n - 1)
                printf("%d ", a[i][j]);
            else
                printf("0 ");
        }
        printf("\n");
    }

    /* (d) Right-upper triangular */
    printf("\nRight-upper triangular matrix:\n");

    for(i = 0; i < n; i++)
    {
        for(j = 0; j < n; j++)
        {
            if(j >= i && i + j >= n - 1)
                printf("%d ", a[i][j]);
            else
                printf("0 ");
        }
        printf("\n");
    }

    /* (e) Left-lower triangular */
    printf("\nLeft-lower triangular matrix:\n");

    for(i = 0; i < n; i++)
    {
        for(j = 0; j < n; j++)
        {
            if(j <= i && i + j <= n - 1)
                printf("%d ", a[i][j]);
            else
                printf("0 ");
        }
        printf("\n");
    }

    /* (f) Right-lower triangular */
    printf("\nRight-lower triangular matrix:\n");

    for(i = 0; i < n; i++)
    {
        for(j = 0; j < n; j++)
        {
            if(j <= i && i + j >= n - 1)
                printf("%d ", a[i][j]);
            else
                printf("0 ");
        }
        printf("\n");
    }

    return 0;
}