#include<stdio.h>

void DisplayConvert(char CValue)
{
    if((CValue >='A') && (CValue <= 'Z' ))
    {
        printf("%c", CValue + 32);

    }
    else if((CValue >= 'a') && (CValue <= 'z'))
    {
        printf("%c",CValue - 32);

    }
}


int main()
{
    char  iValue;

    printf("Enter the charater :");
    scanf("%c",&iValue);

    DisplayConvert(iValue);
    return 0;

}



