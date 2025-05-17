#include<stdio.h>

double RectArea(float fWidth , float fHeight)
{   
   
    if(fWidth < 0)
    {
        fWidth = -fWidth;
    }
    if(fHeight < 0)
    {
        fHeight = -fHeight;
    }
    return fWidth * fHeight;

}

int main()
{
    float fValue1 = 0.0;
    float fValue2 = 0.0;

    double dRet = 0.0;

    printf("Enter Width: ");
    scanf("%f",&fValue1);

    printf("Enter Height: ");
    scanf("%f",&fValue2);

    dRet = RectArea(fValue1, fValue2);

    printf("Area of Rectangle : %.2f",dRet);

    return 0;

}