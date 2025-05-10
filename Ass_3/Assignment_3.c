#include<stdio.h>

void DisplayEvenFactor(int iNo)
{
    int i = 0;
    if(iNo <= 0)
    {
        iNo = -iNo;

    }
    for(int i = 1; i<=iNo ; i++)
    {
        if((iNo % i == 0) && (i % 2 == 0))
        {
            printf("%d\n ", i);
        }
    }


}





int main()
{
    int iValue = 0;
    printf("Enter the number :");
    scanf("%d ", &iValue);

    DisplayEvenFactor(iValue);

    return 0;

}