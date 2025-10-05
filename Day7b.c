//Write a program to input a character and check whether it is a vowel or consonant using if–else.
#include <stdio.h>
int main()
{
    char alphabete;

    printf("Enter your alphabete:\n");
    scanf("%c",&alphabete);

    if (alphabete == 'a' ||alphabete == 'e'|| alphabete == 'i'|| alphabete == 'o'|| alphabete == 'u' ||
        alphabete == 'A'|| alphabete =='E'|| alphabete == 'I'|| alphabete == 'O' || alphabete == 'U')
    {
        printf("its a vowel");
    }
    else
    {
        printf("its a consonant");
    }
    return 0;
}
