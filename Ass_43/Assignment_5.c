#include<stdio.h>

int Reverse(int iNo)
{
    static int iDigit = 0;
    static int iRev = 0;

    
    if(iNo == 0)
    {
        return iRev;
    }

    iDigit = iNo % 10;
    if(iDigit >= 0)
    {
        iRev = iRev * 10;
        
        iRev = iRev + iDigit;
    }
    Reverse(iNo / 10);
    return iRev;
}
int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter the number :");
    scanf("%d",&iValue);

    iRet = Reverse(iValue);
    printf("Reversed number is : %d ",iRet);

    return 0;

}