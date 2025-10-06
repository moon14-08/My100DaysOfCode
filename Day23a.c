//Write a program to find the sum of the series: 2/3 + 4/7 + 6/11 + 8/15 + ... up to n terms.
#include <stdio.h>
int main() 
{
    int n,num,den;
    float sum = 0.0;

    printf("Enter number of terms:\n");
    scanf("%d", &n);

    num = 2, den = 3;

    for (int i = 1; i <= n; i++) 
    {
        sum += (float)num / den;
        num += 2;
        den += 4;
    }

    printf("Sum of the series = %.2f\n", sum);
    return 0;
}