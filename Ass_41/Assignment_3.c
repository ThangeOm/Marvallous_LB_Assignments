#include<stdio.h>

void Display(int iNo)
{
    static int i = 1;
    if(i <= iNo)
    {
        printf(" %d ",iNo);
        Display(iNo - 1);


    }
}

int main()
{
    int iValue = 0;
    printf("Enter the number :");
    scanf("%d",&iValue);

    Display(iValue);
    return 0;
}