#include<stdio.h>
#include<string.h>

int FirstChar(char *str, char ch)
{
    int i = 0;
    int iCount = 0;

    while (str[i] != '\0')
    {
        if(str[i] == ch )
        {
            return i;
        }
        i++;
    }
    return -1;
    
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

    iRet = FirstChar(arr,cValue);

    if(iRet != -1)
    {
        printf("Character %c location  is %d ",cValue,iRet);

    }
    else
    {
        printf("Character %c not in this location",cValue);

    }


    return 0;
}
