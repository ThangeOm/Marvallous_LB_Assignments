#include<stdio.h>

int Difference(char *str)
{
    int iCnt = 0;
    int iSmall = 0;
    int iCapital = 0;

   // Filter

    if (str == NULL || *str == '\0')
    {
        return 0; 
    }
    
    while (*str != '\0')
    {
        if(*str >= 'a' && *str <= 'z')
        {
            iSmall++;
        }
        else if(*str >= 'A' && *str <= 'Z')
        {
            iCapital++;

        }
        str++;
    }
   

    return iSmall - iCapital;
    
    
}
int main()
{
    char arr[20];
    int iRet = 0;

    printf("Enter the string:\n");
    scanf("%[^'\n']s",arr);

    iRet = Difference(arr);

    printf("%d",iRet);

    return 0;

}