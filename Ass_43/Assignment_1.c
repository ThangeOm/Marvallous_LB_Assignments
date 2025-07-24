#include<stdio.h>

int WhiteSpace(char *str)
{
    static int iCnt = 0;

    if(*str == '\0')
    {
        return iCnt;
    }
     if(*str == ' ')
    {
        iCnt++;        
    }
    WhiteSpace(str + 1);
    return iCnt;
    
    
}
int main()
{
    char arr[100];
    int iRet = 0;

    printf("Enter the string :");
    scanf("%[^\n]",arr);

    iRet = WhiteSpace(arr);
    printf("Number of white space : %d\n",iRet);

    return 0;


}