#include<stdio.h>

void Display(char ch)
{
    if(ch >= 'a'&& ch <= 'z')
    {
        char capital = ch - 32;
        printf("Input is small letter. Corresponding capital:%c\n ",capital);

    }
    else if((ch >= 'A' && ch <= 'Z') || (ch >= '0' && ch <= '9') || 
             (ch >= 32 && ch <= 47) || (ch >= 58 && ch <= 64 ) ||
            (ch >= 91 && ch <= 96 ) ||  (ch >= 123 && ch <= 126))
    {
        printf("Character as it is :%c\n",ch);

    }
    else
    {
        printf("Character as it is :%c\n",ch);
    }        
}
int main()
{
    char cValue = '\0';

    printf("Enter the character:");
    scanf("%c",&cValue);

    Display(cValue);

    return 0;

}