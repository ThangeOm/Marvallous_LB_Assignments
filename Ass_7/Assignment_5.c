#include<stdio.h>

int SumFactorial(int iNo)
{
    int iCnt = 0;
    int iSum = 0;
    int iDiff = 0;

    if(iNo < 0)
    {
        iNo = -iNo;
    }
    for(iCnt = iNo; iCnt >= 1; iCnt--)
    {
        if(iCnt % 2 == 0)
        {
            iSum = iSum + iCnt;
        }
        else if(iCnt % 2 != 0)
        {
            iSum = iSum + iCnt;
        }
        iDiff = iDiff - iSum;
    }
    return iSum;
}
int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter the number:");
    scanf("%d",&iValue);

    iRet = SumFactorial(iValue);
    printf("Sum Factorial of even and odd number is %d",iRet);

    return 0;

}