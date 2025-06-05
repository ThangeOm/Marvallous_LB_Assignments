#include<stdio.h>

#define TRUE 1
#define FALSE 0

typedef int BOOL;

BOOL ChkDigit(int iNo)
{
    if(iNo >= '0' && iNo <= '9')
    {
        return TRUE;
    }
    else
    {
       return FALSE;
    }

}
int main()
{
    int iValue = 0;
    BOOL bRet = FALSE;

    printf("Enter the number : ");
    scanf("%c",&iValue);

    bRet = ChkDigit(iValue);
    if(bRet == TRUE)
    {
        printf("It is Digit.");
    }
    else
    {
        printf("It is not a Digit.");
    }

    return 0;

}