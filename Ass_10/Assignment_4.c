#include<stdio.h>

int MultiDigits(int iNo)
{
    int iCount = 1;
    int iDigit = 1;

    if(iNo < 0)
    {
        iNo = -iNo;
    }
    if(iNo == 0)
        return 0;

    while (iNo != 0)
    {
       iDigit = iNo % 10;
       {
            iCount = iCount * iDigit;
       }
       iNo = iNo / 10;
    }
    return iCount;

}
int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter the number:");
    scanf("%d",&iValue);

    iRet = MultiDigits(iValue);

    printf("Multiplication of Digits:%d\n",iRet);

    return 0;
}