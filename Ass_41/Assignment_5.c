#include<stdio.h>

void Display(int iNo)
{
    if(iNo > 0)
    {
        Display(iNo - 1);

        printf(" %c ",'a' + iNo - 1);

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