#include<stdio.h>
typedef int BOOL;

typedef unsigned int UINT;

#define TRUE 1
#define FALSE 0

BOOL CheckBit(UINT iNo)
{
    unsigned int iMask = 0X4000; 
    unsigned int iResult = 0;

    iResult = iNo & iMask;
    
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
    UINT iValue = 0;
    UINT bRet = FALSE;

    printf("Enter the number: \n");
    scanf("%d",&iValue);

    bRet = CheckBit(iValue);
    if(bRet == TRUE)
    {
        printf("15th bits is ON\n");
    }
    else
    {
        printf("15th bits is OFF\n");
    }


    return 0;
}