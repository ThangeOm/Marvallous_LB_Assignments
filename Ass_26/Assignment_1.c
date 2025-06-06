#include<stdio.h>
#include<string.h>

#define TRUE 1
#define FALSE 0

typedef int BOOL;

BOOL ChkChar(char *str, char ch)
{
    int i = 0;
    while (str[i] != '\0')
    {
        if(str[i] == ch)
        {
            return TRUE;

        }
        i++;

    }
    return FALSE;
    
}

int main()
{
    char arr[20];
    char cValue;
    BOOL bRet = FALSE;

    printf("Enter string :");
    scanf("%[^'\n]s",arr);

    printf("Enter the character: ");
    scanf("%c",&cValue);

    bRet = ChkChar(arr,cValue);

    if(bRet == TRUE)
    {
        printf("Character is found");
    }
    else
    {
        printf("Character is not found");
    }
    return 0;
}
