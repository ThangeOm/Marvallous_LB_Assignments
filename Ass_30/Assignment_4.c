#include<stdio.h>
typedef int BOOL;

typedef unsigned int UINT;

#define TRUE 1
#define FALSE 0

BOOL CheckBit(UINT iNo)
{
    unsigned int iMask7 = 0X00000040; 
    unsigned int iMask8 = 0X00000080;
    unsigned int iMask9 = 0X00000100;
 
    UINT iMask = (iMask7 | iMask8 | iMask9);
    
    UINT iResult = iNo & iMask;

    if(iResult != 0)
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

    bRet = CheckBit(iValue);
    if(bRet == TRUE)
    {
        printf("7th,8th,9th bits is ON\n");
    }
    else
    {
        printf("7th,8th,9th bits is OFF\n");
    }


    return 0;
}