#include<stdio.h>
typedef int BOOL;
typedef unsigned int UINT;

#define TRUE 1
#define FALSE 0

BOOL ChkBit(UINT iNo, int iPos1,int iPos2)
{
    unsigned int iMask = 1;

    unsigned int iResult = 0;

    iMask = iMask << (iPos1 - iPos2);

    iResult = iNo | (iMask);
    
    if(iResult != 0)
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
    UINT iValue = 0, iLocation1 = 0, iLocation2 = 0;
    UINT bRet = FALSE;

    printf("Enter the number:\n");
    scanf("%d",&iValue);

    printf("Enter the first location:\n");
    scanf("%d",&iLocation1);

    printf("Enter the second location:\n");
    scanf("%d",&iLocation2);

    bRet = ChkBit(iValue,iLocation1,iLocation2);
    if(bRet == TRUE)
    {
        printf(" \nTrue\n");

    }
    else
    {
        printf(" \nFalse\n");
  
    }
    return 0;

}

