//Count vowels and consonants in a string.
#include<stdio.h>
int main()
{
    int i = 0,vowel = 0,consonant = 0;
    char str[50];
    printf("Enter a string\n");
    scanf("%s",str);
    while (str[i] != '\0')
    {
        char ch =str[i];
    
    if (ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u'||
        ch=='A'||ch=='E'||ch=='I'||ch=='O'||ch=='U')
    {
       vowel++;
    }
    else if ((ch >='a'&&ch <='z')|| (ch >='A'&&ch <='Z'))
    {    
    consonant++;
    }
    i++;
    }
    printf("vowel = %d\n",vowel);
    printf("consonant =%d",consonant);
       
    return 0;
}