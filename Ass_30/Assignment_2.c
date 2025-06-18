#include<stdio.h>
typedef int BOOL;

typedef unsigned int UINT;

#define TRUE 1
#define FALSE 0

BOOL CheckBit(UINT iNo)
{
    unsigned int iMask5 = 0X00000010; 
    unsigned int iMask18 = 0X00020000; 

    UINT iMask = (iMask5 | iMask18);

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
        printf("5th and 18th bits is ON\n");
    }
    else
    {
        printf("5th and 18th bits is OFF\n");
    }


    return 0;
}