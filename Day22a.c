//Write a program to check if a number is a strong number.
#include <stdio.h>
int main() 
{
    int num, real, sum = 0,digit,fact;

    printf("Enter a number:\n");
    scanf("%d", &num);

    real = num;

    while (num != 0) 
    {
        digit = num % 10;
        fact = 1;
       
        for (int i = 1; i <= digit; i++) 
        {
            fact *= i;
        }

        sum += fact;
        num /= 10;
    }

    if (sum == real)
        printf("%d is a strong number.\n", real);
    else
        printf("%d is not a strong number.\n", real);

    return 0;
}