// Write a program to convert temperature from Celsius to Fahrenheit.
#include<stdio.h>
int main()
{
    float c,f;
    printf("Enter the temp in celsius:\n");
    scanf("%f",&c);
    f=(c*1.8)+32;
    printf("temp will be %.2f fahrenheit",f);

    return 0;
}
