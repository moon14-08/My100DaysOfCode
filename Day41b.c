//Print each character of a string on a new line.
#include<stdio.h>
int main()
{
    int i = 0;
    char str[50];
    printf("Give a string to print\n");
    scanf("%s",str);
    while (str[i] !='\0')
    {
        printf(" %c \n",str[i]);
        i++;
    }
    return 0;
}