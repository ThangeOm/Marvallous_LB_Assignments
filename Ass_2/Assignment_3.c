#include<stdio.h>
 
void Display(int iNo)
{
    int iCnt = 0;

    if(iNo < iCnt)
    {
        printf("Hello..");

    }
    else
    {
        printf("Demo..");
    }
}




int main()
{
    int iValue = 0;
    printf("Enter the number :\n");
    scanf("%d" , &iValue);

    Display(iValue);
    return 0;


}