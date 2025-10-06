//Write a program to swap the first and last digit of a number.
#include <stdio.h>
#include <string.h>
int main() 
{
    char num[20], temp;
    printf("Enter a number:\n");
    scanf("%s", num);

    temp = num[0];
    num[0] = num[strlen(num) - 1];
    num[strlen(num) - 1] = temp;

    printf("Swapped number = %s\n", num);
    return 0;
}