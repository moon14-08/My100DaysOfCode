//Write a program to input a character and check whether it is an uppercase alphabet, lowercase alphabet, digit, or special character.
#include <stdio.h>
int main()
{
    char i;
    printf("input a character:\n");
    scanf("%c",&i);

    if (i>='a' && i<='z' )
    {
        printf("its a lower case");
    }
    else if (i>='A' && i<='Z')
    {
        printf("its upper case");
    }
    else if (i>='0' && i<='9')
    {
        printf("its a digit");
    }
    else
    {
        printf("its a special character");
    }
    return 0;
}