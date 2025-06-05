#include<stdio.h>
void DisplayASCII()
{
    int i = 0;

    printf("----------------------------------------\n");
    printf("|Symbol | Decimal | Hexadecimal | Octal|\n");
    printf("----------------------------------------\n");

    for(i = 0; i <= 255; i++)
    {
        if(i < 32 || i == 127)
        {
            printf("|  %c  |  %3d  |  0x%02X  | %03o        | \n",i,i,i);
        }
        else
        {
            printf("|  %c  |  %3d  |  0x%02X  | %03o             | \n",i,i,i,i);

        }
    }
    printf("---------------------------------------------------\n");
}
int main()
{
    DisplayASCII();
    return 0;
}