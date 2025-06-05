#include<stdio.h>
void DisplayASCII(char ch)
{
    printf("Character: %c\n", ch);

    printf("Decimal: %d\n", ch);

    printf("Octal: %o\n", ch);

    printf("Hexadecimal: 0X%X\n", ch);
}

int main()
{
    char cValue = '\0';

    printf("Enter a character: ");
    scanf(" %c", &cValue); 

    DisplayASCII(cValue);

    return 0;
}