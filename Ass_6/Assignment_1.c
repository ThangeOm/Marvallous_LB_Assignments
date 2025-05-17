#include<stdio.h>

void Number(int iNo)
{   
    int iCnt = 0;
    if(iNo < 0)
    {
        iNo = -iNo;
    }
    
   
    for(iCnt = iNo; iCnt <= iNo; iCnt++)
    {   
        if(iNo >= 50 && iNo <= 100)
       {
        printf(" The Number is Medium:\n");
       }
    else
    {
        printf(" The Number is Small:\n");
    }
        printf("%d",iCnt);
    }
    printf("\n");

}

int main()
{
    int iValue = 0;

    printf("Enter the number:");
    scanf("%d",&iValue);

    Number(iValue);
    return 0;

}