#include <stdio.h>


double SquareMeter(int iNo)
{
    if(iNo < 0)
    {
        iNo = -iNo;
    }

    return iNo * 0.0929;
}

int main()
{
    int iValue = 0;
    double dRet = 0;

    printf("Enter area in square feet: ");
    scanf("%d", &iValue); 

    dRet = SquareMeter(iValue);

    printf("Area in square meters: %.5lf\n", dRet);    
    return 0;
}
