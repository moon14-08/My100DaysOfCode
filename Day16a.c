//Write a program to take a number as input and print its equivalent binary representation.
#include<stdio.h>
int main()
{
    int n,binary= 0,rem,place =1;
    printf("value of n:\n");
    scanf("%d",&n);

    while (n!=0)
    {
        rem = n % 2;
        binary = binary + rem *place;
        place = place*10;
        n = n/2;
    }
    printf("value is %d",binary);
    return 0;
}