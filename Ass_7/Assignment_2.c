#include<stdio.h>

int DollarToINR(int iDollar)
{
    int iNo = 0;
    int iRupees = 0;

    if(iDollar < 0)
    {
        iDollar = -iDollar;
    }

    iRupees = iDollar * 70;

    return iRupees;

}
int main()
{
    int iValue = 0;
    int iRet = 0;


    printf("Enter the USD:");
    scanf("%d",&iValue);

    iRet = DollarToINR(iValue);

    printf("Value in INR is %d",iRet);

   
    return 0;

}