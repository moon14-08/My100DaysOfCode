//Write a program to check if a number is an Armstrong number.
#include<stdio.h>
#include<math.h>

int main()
{
    int n, real, remainder, i = 0;
    float result = 0.0;

    printf("Enter a value:\n");
    scanf("%d", &n);

     real= n;

    while (real!= 0) {
        real/= 10;
        ++i;
    }

    real= n;

    while (real!= 0) {
        remainder = real % 10;
        result += pow(remainder, i);
        real/= 10;
    }

    if ((int)result == n)
        printf("%d is an Armstrong number.\n", n);
    else
        printf("%d is not an Armstrong number.\n", n);

    return 0;
}
