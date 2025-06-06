#include<stdio.h>
#include<string.h>

int CountChar(char *str, char ch)
{
    int i = 0;
    int iCount = 0;

    while (str[i] != '\0')
    {
        if(str[i] == ch )
        {
            iCount++;
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
    getchar();
    
    printf("Enter the character: ");
    scanf("%c",&cValue);

    iRet = CountChar(arr,cValue);

    printf("Character Frequency is %d :",iRet);

    return 0;
}