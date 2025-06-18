#include<stdio.h>

typedef unsigned int UINT;

UINT OffBit(UINT iNo)
{
    UINT iMask = 1;
    UINT iResult = 0;

    iMask = iMask << 6;
    iMask = ~iMask;

    iResult = iNo & iMask;

    return iResult;
    


}
int main()
{
    UINT iValue = 0;
    UINT iRet = 0;

    printf("Enter the number:\n");
    scanf("%d",&iValue);

    iRet = OffBit(iValue);
    printf("Updated number OFF 7th bits :%d \n",iRet);

    return 0 ;

    


}