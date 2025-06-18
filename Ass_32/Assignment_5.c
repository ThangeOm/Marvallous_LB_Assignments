#include<stdio.h>
typedef unsigned int UINT;

UINT ToggleBit(UINT iNo)
{
    UINT iMask = 0XF000000F;
    UINT iResult = 0;

    iResult = iNo ^ iMask;

    return iResult;


}
int main()
{
    UINT iValue = 0;
    UINT iRet = 0;

    printf("Enter the number:\n");
    scanf("%d",&iValue);

    iRet = ToggleBit(iValue);

    printf("Updated number:%d\n",iRet);

    return 0;

}