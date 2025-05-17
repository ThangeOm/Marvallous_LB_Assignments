#include<stdio.h>

int CountDiff(int iNo)
{
    int iDigit = 0;
    int iSum = 0;
    int iOdd = 0;

    while (iNo != 0)
    {
        iDigit = iNo % 10;

       if(iDigit % 2 == 0)
       {
            iSum = iSum + iDigit;
       }
       else
       {
            iOdd = iOdd + iDigit; 
       }
       iNo = iNo / 10;
    }
    return iSum - iOdd;
    

}

int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter the number:");
    scanf("%d",&iValue);

    iRet = CountDiff(iValue);

    printf("%d",iRet);

    return 0;

}