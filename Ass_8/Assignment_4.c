#include<stdio.h>

double FhtoCs(float fTemp)
{
    return (fTemp - 32) * (5.0/9.0); 
}
int main()
{
    float fValue = 0.0;
    double dRet = 0.0;

    printf("Enter Temperature in Fahrenheit: ");
    scanf("%f",&fValue);

    dRet = FhtoCs(fValue);

    printf("Fahrenheit into Celsius:%f\n",dRet);
    return 0;
}