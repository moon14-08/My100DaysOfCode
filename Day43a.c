//Reverse a string.
#include<stdio.h>
int main()
{
    int i =0;
    char str[50];
    printf("Enter a string\n");
    scanf("%s",str);
    while (str[i] != '\0')
    {
        i++;
    }

    int start = 0,end = i-1;
    while (start < end)
    {
        char temp = str[start];
        str[start]=str[end];
        str[end]=temp;

        start++;
        end--;
    }
    printf("reversed string is: %s",str);
    
}