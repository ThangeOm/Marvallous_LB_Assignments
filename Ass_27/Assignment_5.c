#include<stdio.h>

void StrCatX(char *src, char *dest)
{
    if (src == NULL || dest == NULL)
    {
        return; 
    }

    while (*dest != '\0')
    {
        dest++;
    }

    *dest = ' ';
    dest++;


    while (*src != '\0')
    {
        *dest = *src;
        dest++;
        src++;
    }

    *dest = '\0'; 
}

int main()
{
    char arr[100] = "Marvellous InFosystems";  // dest
    char brr[30] = "Logic Building";           // src

    StrCatX(brr, arr);  

    printf("%s\n", arr);  //  Output: Marvellous InFosystems Logic Building

    return 0;
}
