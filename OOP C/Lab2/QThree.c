/*
Write a program to compute the n factorial where n can be very large; for instance, n = 100.
*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char *multiply(char num1[], char num2[]) 
{
    int n1 = strlen(num1);
    int n2 = strlen(num2);

    int *temp = (int*)calloc(n1 + n2, sizeof(int));

    for (int i = n1 - 1; i >= 0; i--) 
    {
        for (int j = n2 - 1; j >= 0; j--) 
        {
            int mul = (num1[i] - '0') * (num2[j] - '0');
            int sum = mul + temp[i + j + 1];
            temp[i + j + 1] = sum % 10;
            temp[i + j] += sum / 10;
        }
    }

    int i = 0;
    while (i < n1 + n2 && temp[i] == 0)
        i++;

    if (i == n1 + n2) {
        char *zero = (char*)malloc(2);
        strcpy(zero, "0");
        free(temp);
        return zero;
    }

    char *result = (char*)malloc(n1 + n2 + 1);
    int k = 0;
    while (i < n1 + n2)
        result[k++] = temp[i++] + '0';

    result[k] = '\0';

    free(temp);
    return result;
}


char *fact(int k)
{
    static int n = 6;
    static char f[3001][9132] = {"0","1","2","6","24","120","720"};
    char *res = NULL, m[10];

    if (k <= n)
    {
        printf("The %dth factorial number is returned from the precomputed array in O(1) time complexity.\n",k);
        return f[k];
    }

    for (int i = n; i < k; i++)
    {
        sprintf(m, "%d", i + 1);
        res = multiply(f[i], m);
        strcpy(f[i + 1], res);
        free(res);
    }

    n = k;
    return f[k];
}

int main()
{
    	int k=0;
    	while(1)
    	{
    	    printf("Enter the number (-ve to exit): ");
    	    scanf("%d", &k);
    	    if(k<0 || k>3000)
    	        break;
    	    printf("The %dth factorial number is %s\n\n", k, fact(k));
    	}
    	return 0;
}