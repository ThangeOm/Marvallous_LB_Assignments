#include<stdio.h>

int MultiFactor(int iNo)
{
    int iCnt = 0;
    int iMulti = 1 ;


    if(iNo < 0)
    {
        iNo = -iNo;
    }
    for(iCnt = 1; iCnt<= (iNo/2) ; iCnt++)
    {
        if((iNo % iCnt) == 0)
        {
            iMulti = iMulti * iCnt ;
        }

    }
    return iMulti;

}


int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter the number :\n");
    scanf("%d",&iValue);

    iRet = MultiFactor(iValue);

    printf("Multiplication of factor of %d is %d\n",iValue,iRet);

    return 0 ;
}