#include <stdio.h>

int EvenFactorial(int iNo)
{
    int iFact = 1;
    int iCnt = 0;

    if (iNo < 0)
    {
        iNo = -iNo;
    }

    for (iCnt = iNo; iCnt >= 1; iCnt--)
    {
        if (iCnt % 2 == 0)  
        {
            iFact = iFact * iCnt;
        }
    }

    return iFact;
}

int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter the number: ");
    scanf("%d", &iValue);  

    iRet = EvenFactorial(iValue);
    
    printf("Even Factorial of number is %d\n", iRet);

    return 0;
}
