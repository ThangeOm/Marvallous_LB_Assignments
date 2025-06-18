#include<stdio.h>

typedef unsigned int UINT;

UINT OnBit(UINT iNo, int iPos)
{
    UINT iMask = 1;
    UINT iResult = 0;

    iMask = iMask << (iPos - 1);
    
    iResult = iNo ^ iMask;

    return iResult;

}
int main()
{
    UINT iValue = 0;
    UINT iLocation = 0;
    UINT iRet = 0;

    printf("Enter the number:\n");
    scanf("%d",&iValue);

    printf("Enter the position:\n");
    scanf("%d",&iLocation);

    iRet = OnBit(iValue,iLocation);
    printf("Updated number:%d\n",iRet);

    return 0;

}
