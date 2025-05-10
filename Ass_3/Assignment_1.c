#include<stdio.h>
void PrintEven(int iNo)
{
    int iNo1 = iNo * 2;
    
    if(iNo <= 0)
    {
        return;

    }
    for(int i = 1; i<=iNo1 ; i++)
    {
        if(i % 2 == 0)
        {
            printf("%d \n", i);
        }
    }
}

int main()
{
    int iValue = 0;
    printf("Enter the number : \n");
    scanf("%d" ,&iValue);

    PrintEven(iValue);

    return 0;

}