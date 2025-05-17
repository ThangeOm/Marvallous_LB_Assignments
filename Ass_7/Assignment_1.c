#include<stdio.h>

void Display(int iNo)
{
    int iCnt = 0;

    if(iNo < 0)
    {
        iNo = -iNo;
    }
    for(iCnt = 1; iCnt <= iNo; iCnt++)
    {
        printf("  * ",iCnt);
        
    }
    for(iCnt = 1; iCnt <= iNo + 1; iCnt++)
    {
        printf("  # ",iCnt);
    }

    printf("\n");
    
  

}

int main()
{
    int iValue = 0;
    printf("Enter the number:\n");
    scanf("%d",&iValue);

    Display(iValue);


}