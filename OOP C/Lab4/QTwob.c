

#include <stdio.h>
#include <math.h>

int main()
{
    int n, i;
    double arr[100];
    double sum = 0.0;
    double mean, variance = 0.0, standardDeviation;

    printf("Enter the number of elements: ");
    scanf("%d", &n);

    printf("Enter %d elements:\n", n);

    for (i = 0; i < n; i++)
    {
        scanf("%lf", &arr[i]);
        sum = sum + arr[i];
    }

    mean = sum / n;

   
    for (i = 0; i < n; i++)
    {
        variance = variance + (arr[i] - mean) * (arr[i] - mean);
    }

    variance = variance / n;

    standardDeviation = sqrt(variance);

    printf("\nMean = %.2lf", mean);
    printf("\nVariance = %.2lf", variance);
    printf("\nStandard Deviation = %.2lf\n", standardDeviation);

    return 0;
}