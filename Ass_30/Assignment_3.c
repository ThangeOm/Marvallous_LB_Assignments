#include<stdio.h>
typedef int BOOL;

typedef unsigned int UINT;

#define TRUE 1
#define FALSE 0

BOOL CheckBit(UINT iNo)
{
    unsigned int iMask7 = 0X00000040; 
    unsigned int iMask15 = 0X00004000;
    unsigned int iMask21 = 0X00100000;
    unsigned int iMask28 = 0X08000000; 
 
    UINT iMask = (iMask7 | iMask15 | iMask21 | iMask28);
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
        printf("7th,15th,21st,28th bits is ON\n");
    }
    else
    {
        printf("7th,15th,21st,28th bits is OFF\n");
    }


    return 0;
}