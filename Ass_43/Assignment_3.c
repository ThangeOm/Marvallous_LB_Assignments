#include<stdio.h>

int Small(char *str)
{
    static int iCount = 0;

    if(*str == '\0')
    {
        return iCount;
    }
    if(*str >= 'a' && *str <= 'z')
    {
        iCount++;
    }
    Small(str + 1);
    return iCount;

}
int main()
{
    char arr[100];
    int iRet = 0;

    printf("Enter the string :");
    scanf("%[^\n]",arr);

    iRet = Small(arr);

    printf("Number of small character is :%d\n",iRet);

    return 0;

}