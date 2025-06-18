#include<stdio.h>

typedef unsigned int UINT;

UINT ToggleBitRange(UINT iNo , int iStart ,int iEnd)
{
    UINT iMask = 0;
    UINT iResult = 0;
    int i ;

    for(i = iStart; i <= iEnd; i++)
    {
        iMask = iMask | (1 << (i - 1));
    }

    iResult = iNo ^ iMask;
    return iResult;
}

int main()
{
    UINT iValue = 0, iStart = 0 , iEnd = 0;
    UINT iRet = 0;

    printf("Enter the number: ");
    scanf(" %d", &iValue);  

    printf("Enter the starting position: ");
    scanf("%d", &iStart);

    printf("Enter the ending position: ");
    scanf("%d", &iEnd);

    iRet = ToggleBitRange(iValue, iStart, iEnd);

    printf("Modified number bits from %d to %d is: %d\n", iStart, iEnd, iRet);

    return 0;
}
