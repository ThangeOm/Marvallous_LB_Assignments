#include<stdio.h>

int CountSmall(char *str)
{
    int iCnt = 0;
   // Filter

    if (str == NULL || *str == '\0')
    {
        return 0; 
    }

    while (*str != '\0')
    {
        if(*str >= 'a' && *str <= 'z')
        {

            iCnt++;
        }
        str++;
    }

    return iCnt;
    
    
}
int main()
{
    char arr[20];
    int iRet = 0;

    printf("Enter the string:\n");
    scanf("%[^'\n']s",arr);

    iRet = CountSmall(arr);

    printf("%d",iRet);

    return 0;

}