//Convert a lowercase string to uppercase without using built-in functions.
#include<stdio.h>
int main()
{
    int i=0;
    char str[50];
    printf("Enter a lower case srting\n");
    scanf("%s",str);
    while (str[i] != '\0')
    {
        if (str[i]>='a' && str[i]<= 'z')
        {
            str[i]=str[i]-32;
            
        }
        i++;
    }
    printf("upper case: %s",str);
    return 0;
}