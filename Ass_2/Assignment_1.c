#include<stdio.h>

void Display(int iNo)
{
    int iCnt = 0;
    // Write Updater
    while(iCnt < iNo)
    {
        printf("*");
        iCnt++;



    }
    return;
}
int main()
{
    int iValue = 0;
     
    printf("Enter number : ");
    scanf("%d",&iValue);

    Display(iValue);
    return 0;

}