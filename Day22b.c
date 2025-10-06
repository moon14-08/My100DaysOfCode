//Write a program to find the sum of the series: 1 + 3/4 + 5/6 + 7/8 + … up to n terms.
#include <stdio.h>
int main() 
{
    int n,num,den;
    float sum = 0.0;

    printf("Enter number of terms:\n");
    scanf("%d", &n);

    num = 1, den = 1;

    for (int i = 1; i <= n; i++) 
    {
        sum += (float)num / den;
        num += 2;
        if (i == 1)
            den += 3;   
        else
            den += 2; 
        
    }

    printf("Sum of the series = %.2f\n", sum);
    return 0;
}