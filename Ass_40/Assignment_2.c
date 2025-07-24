#include<stdio.h>

void Display()
{
    static int i = 1;
    static int iNo = 5;

    if(i <= iNo)
    {
        printf(" %d ",i);
        i++;
        Display();
    }

}
int main()
{

    Display();
    return 0;

}