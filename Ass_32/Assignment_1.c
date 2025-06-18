#include<stdio.h>
typedef int BOOL;
typedef unsigned int UINT;

#define TRUE 1
#define FALSE 0

BOOL ChkBit(UINT iNo , int iPos)
{
    UINT iMask = 1;
    UINT iResult = 0;

    iMask = iMask << (iPos - 1);

    iResult = iNo & iMask;

    if(iResult == (iNo & iMask))
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
    UINT iValue = 0;
    UINT iLocation = 0;
    BOOL bRet = 0;

    printf("Enter the number :\n");
    scanf("%d",&iValue);

    printf("Enter the position :\n");
    scanf("%d",&iLocation);

    bRet = ChkBit(iValue,iLocation);
    if(bRet == TRUE)
    {
        printf("Bit at that position is ON\n");
    }
    else
    {
        printf("Bit at that position is OFF\n");

    }

    return 0;

}