#include<stdio.h>

void MultipleDisplay(int iNo)
{
    int iCnt = 0;

    if(iNo < 0)
    {
        iNo = -iNo;
    }

    for(iCnt = 1 ; iCnt <= 5; iCnt++)
    {   
         printf(" %d ", iNo * iCnt);  
    }

   
}

int main()
{
    int iValue = 0;
    printf("Enter the number:");
    scanf("%d",&iValue);

    MultipleDisplay(iValue);

    return 0;



}