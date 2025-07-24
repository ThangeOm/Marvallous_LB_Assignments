#include<stdio.h>

int Min(int iNo)
{
    static int iDigit = 0;
    static int iMin = 9;

    if(iNo == 0)
    {
        return iMin;
    }
    iDigit = iNo % 10;
    if(iDigit < iMin)
    {
        iMin = iDigit;
    }
    
    Min(iNo / 10);
    
    return iMin;

}
int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter the number :");
    scanf("%d",&iValue);

    iRet = Min(iValue);
    printf("Smallest digits is :%d",iRet);

    return 0;
}