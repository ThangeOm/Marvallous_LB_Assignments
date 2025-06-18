#include<stdio.h>
typedef int BOOL;

typedef unsigned int UINT;

#define TRUE 1
#define FALSE 0

BOOL ChkFirstLastBit(UINT iNo)
{
    unsigned int iMaskFirst = 0X00000001; 
    unsigned int iMaskLast = 0X80000000;
 
    UINT iResult = iNo & (iMaskFirst | iMaskLast);

    if(iResult == (iMaskFirst| iMaskLast))
    {
        return TRUE;
    }
    else
    {
        return FALSE;
    }
   
}
int main()
{
    int iValue = 0;
    int bRet = FALSE;

    printf("Enter the number: \n");
    scanf("%d",&iValue);

    bRet = ChkFirstLastBit(iValue);
    if(bRet == TRUE)
    {
        printf("First and Last  bits is ON\n");
    }
    else
    {
        printf("First and Last bits is OFF\n");
    }


    return 0;
}