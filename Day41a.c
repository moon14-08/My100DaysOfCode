//Count characters in a string without using built-in length functions.
#include<stdio.h>
int main()
{
    int i = 0,length;
    char str[] = {'N','i', 'm', 'b','u','s','\0'};
    while ( str[i] != '\0')
    {
        i++;
    }
    length = i;
    printf("lenght of string is %d",length);
    
    return 0;
}