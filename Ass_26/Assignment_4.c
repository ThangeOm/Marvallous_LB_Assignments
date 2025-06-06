#include<stdio.h>
#include<string.h>

int LastChar(char *str, char ch)
{
    int i = 0;
    int iCount = -1;

    while (str[i] != '\0')
    {
        if(str[i] == ch )
        {
            iCount = i;
        }
        i++;
    }
    return iCount;
    
}

int main()
{
    char arr[20];
    char cValue;
    int iRet = 0;


    printf("Enter string :");
    scanf("%[^'\n]s",arr);
    
    printf("Enter the character: ");
    scanf("%c",&cValue);

    iRet = LastChar(arr,cValue);

    if(iRet != -1)
    {
        printf("Last occurrence of Character %c location  is %d ",cValue,iRet);

    }
    else
    {
        printf("Character %c not in this location",cValue);

    }


    return 0;
}
