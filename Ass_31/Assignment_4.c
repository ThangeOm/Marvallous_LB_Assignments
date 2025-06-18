#include<stdio.h>

typedef unsigned int UINT;

UINT ToggleBit(UINT iNo)
{
    UINT iMask1 = 1;
    UINT iMask2 = 1;

    UINT iResult = 0;

    iMask1 = iMask1 << 6;
    iMask2 = iMask2 << 9;


    iResult = iNo ^ (iMask1 | iMask2);

    return iResult;

}
int main()
{
    UINT iValue = 0;
    UINT iRet = 0;

    printf("Enter the number:\n");
    scanf("%d",&iValue);

    iRet = ToggleBit(iValue);

    printf("Updated number is :%d\n",iRet);

    return 0;
}