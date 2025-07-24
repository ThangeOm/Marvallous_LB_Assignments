#include<stdio.h>

void Display()
{
    static int i = 1;
    static int iRow = 5;

    if( i <= iRow)
    { 
        printf(" * ");
        i++;
        Display();

    }
   

}

int main()
{
    Display();

    return 0;

}