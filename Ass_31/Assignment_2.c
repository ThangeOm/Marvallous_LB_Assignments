#include<stdio.h>

typedef unsigned int UINT;

UINT OffBit(UINT iNo)
{
    UINT iMask1 = 1;
    UINT iMask2 = 1;

    UINT iResult = 0;

    iMask1 = iMask1 << 6;
    iMask2 = iMask2 << 9;

    iMask1 = ~iMask1;
    iMask2 = ~iMask2;

    iResult = iNo & (iMask1 & iMask2);

    return iResult;
    


}
int main()
{
    UINT iValue = 0;
    UINT iRet = 0;

    printf("Enter the number:\n");
    scanf("%d",&iValue);

    iRet = OffBit(iValue);
    printf("Updated number OFF 7th and 10th  bits :%d \n",iRet);

    return 0 ;

    


}