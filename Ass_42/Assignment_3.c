#include<stdio.h>

int Strlen(char *str)
{
    static int iCnt = 0;

    if(*str != '\0')
    {
        iCnt++;
        Strlen(str + 1);

    }
    return iCnt;
    
}
int main()
{
    char arr[20];
    int iRet = 0;
    
    printf("Enter the string :");
    scanf("%s",arr);

    iRet = Strlen(arr);
    printf("Count number of character is : %d ",iRet);

    return 0;

}