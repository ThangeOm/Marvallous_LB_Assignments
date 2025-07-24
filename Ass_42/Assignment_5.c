#include<stdio.h>

int Mult(int iNo)
{
    static int iDigit = 0;
    static int iProduct = 1;

    if(iNo == 0)
    {
        return 1;

    }
    
    else
    {
        iDigit = iNo % 10;
        iProduct = iProduct * iDigit;

        Mult(iNo / 10);
        

    }
    return iProduct;
    
}
int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter the number : ");
    scanf("%d",&iValue);

    iRet = Mult(iValue);
    printf("Product of digits is : %d ",iRet);
    
    return 0;

}