#include<stdio.h>
#define TRUE 1
#define FALSE 0

typedef int BOOL;

BOOL ChkEven(int iNo)
{
    if(iNo % 2 == 0)
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
    BOOL bRet  = FALSE;

    printf("Enter number :");
    scanf("%d", &iValue);

    bRet = ChkEven(iValue);

    // Display result

    if(bRet == TRUE)
    {
        printf("The number is EVEN ");

    }
    else
    {
        printf("The number is ODD ");

    }

    return 0 ;

}