#include<stdio.h>
typedef unsigned int UINT;

int CountOne(UINT iNo)
{
    int iCount = 0;

    while(iNo != 0)
    {
        if(iNo & 1)     
        {
            iCount++;
        }
        iNo = iNo >> 1;
    }

    return iCount;

}
int main()
{
    UINT iValue = 0;
    UINT iRet = 0;

    printf("Enter the number:\n");
    scanf("%d",&iValue);

    iRet = CountOne(iValue);
    printf("Number of 1 bits: %d\n",iRet);


    return 0;

}