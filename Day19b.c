//Write a program to find the sum of digits of a number.
#include <stdio.h>
int main() 
{
    int num, sum = 0;
    printf("Enter a value:\n");
    scanf("%d", &num);

     while (num != 0) 
    {
        sum += num % 10;  
        num = num / 10;   
    }

   printf("Sum of no.= %d\n", sum);

    return 0;
}