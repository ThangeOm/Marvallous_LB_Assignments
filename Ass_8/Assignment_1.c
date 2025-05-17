#include<stdio.h>

double CircleArea(float fRadius)
{   
    if(fRadius < 0)
    {
        fRadius = -fRadius;
    }
    return 3.14 * fRadius * fRadius;

}
int main()
{
    float fValue = 0.0;
    double bRet = 0.0;

    printf("Enter the radius: \n");
    scanf("%f",&fValue);

    bRet = CircleArea(fValue);
    
    printf("Area of Circle :%f ",bRet);

    return 0;

}