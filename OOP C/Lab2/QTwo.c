/*
Write an efficient program to find the nth Fibonacci number. The n can be very large; for instance,
n = 1000000
*/
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void swap(char *x, char *y)
{
    char tmp=*x;
    *x=*y;
    *y=tmp;
}

void rev(char str[], int n)
{
	int i, j;
	for(i=0, j=n-1; i<j; i++, j--)
		swap(&str[i], &str[j]);
}
char *add(char s1[], char s2[])
{
	int i, n, x, y, c=0, sum;
	x=strlen(s1);
	y=strlen(s2);
	char *s11=(char *)malloc((x+1)*sizeof(char));
	char *s22=(char *)malloc((x+1)*sizeof(char));
	strcpy(s11, s1);
	strcpy(s22, s2);
	rev(s11, x);
	rev(s22, y);
	n=x>y? x: y;
	char *buff=(char *)malloc((n+2)*sizeof(char));
	n=x<y? x: y;
	for(i=0; i<n; i++)
	{
		sum=(s11[i] - '0') + (s22[i] - '0') + c;
		buff[i]=(sum % 10) + '0';
		c=sum/10;
	}
	if(n!=x)
	{
		for(i=n; i<x; i++)
		{
			sum=(s11[i] - '0') + c;
			buff[i]=(sum%10) + '0';
			c=sum/10;
		}
	}
	if(n!=y)
	{
		for(i=n; i<y; i++)
		{
			sum=(s22[i] - '0') + c;
			buff[i]=(sum%10) + '0';
			c=sum/10;
		}
	}
	if(c!=0)
		buff[i++]=c + '0';
	buff[i]='\0';
	n=strlen(buff);
	rev(buff, n);
	free(s11);
	free(s22);
	return buff;
}

char *fib(int k)
{
    static int n=6;
    static char f[8196][1000]={"0", "1", "1", "2", "3", "5", "8"};
    char *res=NULL;
    if(k<=n)
    {
		printf("%dth Fibonacci number is returned from the precomputed array in O(1) time complexity\n", k);
    	return f[k];
    }
    for(int i=n; i<=k; i++)
    {
	    res=add(f[i], f[i-1]);
    	strcpy(f[i+1], res);
    }
    n=k;
    return f[k];
}

int main()
{
    int k=0;
    while(1)
    {
        printf("Enter the number (-ve to exit): ");
        scanf("%d", &k);
        if(k<0)
            break;
        printf("%dth Fibonacci number is %s\n\n", k, fib(k));
    }
    return 0;
}