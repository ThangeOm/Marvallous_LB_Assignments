#include<stdio.h>

int KMtoMeter(int iNo)
{

    if(iNo < 0)
    {
        iNo = -iNo;

    }
    return iNo * 1000;

}
int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter the Distance: ");
    scanf("%d",&iValue);

    iRet = KMtoMeter(iValue);

    printf("Given Distance is converted in Kilometer into Meter:%d\n",iRet);

    return 0;


}
