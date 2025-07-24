#include<stdio.h>

int Fact(int iNo)
{
    static int i = 0;
    static int iFact = 1;

    if(iNo == 0)
    {
        return 0;
    }
    else
    {
        iFact = iFact * iNo;
        
        Fact(iNo - 1);

    }
    
    return iFact;
}
int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter the number : ");
    scanf("%d",&iValue);

    iRet = Fact(iValue);
    printf("Factorial is : %d ",iRet);
    
    return 0;

}