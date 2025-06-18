#include<stdio.h>
typedef int BOOL;
typedef unsigned int UINT;

#define TRUE 1
#define FALSE 0

BOOL ChkBit(UINT iNo)
{
    unsigned int iMask1 = 0x00000100;
    unsigned int iMask2 = 0x00000800;

    unsigned int iResult = 0;

    iResult = iNo & (iMask1 | iMask2);
    
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

    printf("Enter the number:\n");
    scanf("%d",&iValue);

    bRet = ChkBit(iValue);
    if(bRet == TRUE)
    {
        printf("9th and 12th bits is True\n");

    }
    else
    {
        printf("9th and 12th bits is false\n");
  
    }
    return 0;

}

