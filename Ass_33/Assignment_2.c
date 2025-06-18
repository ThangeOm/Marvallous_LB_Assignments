#include<stdio.h>

typedef unsigned int UINT;
void CommonBits(UINT iNo1,UINT iNo2)
{
    UINT iResult = iNo1 & iNo2;
    

    for(int i = 1; i <= 32; i++)
    {
        if(iResult & 1)
        {
            printf("%d ", i);
        }
        iResult = iResult >> 1;
    }
    printf("Common ON bit positions:\n");


    printf("\n");



}
int main()
{
    UINT iValue1 = 0;
    UINT iValue2 = 0;
    UINT iRet = 0;

    printf("Enter the first number:\n");
    scanf("%d",&iValue1);

    printf("Enter the second number:\n");
    scanf("%d",&iValue2);

    CommonBits(iValue1,iValue2);
    return 0;






  
}