#include<stdio.h>

#include<stdio.h>

int FactDiff(int iNo)
{
    int iCnt = 0;
    int iFactSum = 0;
    int iNonFactSum = 0;


    if(iNo < 0)
    {
        iNo = -iNo;

    }
    for(iCnt = 1; iCnt < iNo; iCnt++)
    {
        if(iNo % iCnt == 0)
        {
            iFactSum = iFactSum + iCnt;
        }
        else
        {
            iNonFactSum = iNonFactSum + iCnt;
        }
    }
    return iFactSum - iNonFactSum;

}

int main()
{
    int iValue = 0;
    int iRet = 0 ;

    printf("Enter the number :\n");
    scanf("%d", &iValue);

    iRet = FactDiff(iValue);

    printf("Difference is: %d\n ",iRet);

    return 0;

}