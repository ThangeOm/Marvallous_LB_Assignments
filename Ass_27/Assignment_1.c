#include<stdio.h>

void StrCpyX(char *src, char *dest)
{
    // Filter 
    if (src == NULL || *src == '\0')
    {
        *dest = '\0';

        return; 
    }
    while (*src != '\0')
    {
       *dest = *src;
       src++;

       dest++;

    }
    *dest = '\0';
    
}

int main()
{
    char arr[30] ="Marvellous Multi OS";
    char brr[30];  // empty string

    StrCpyX(arr,brr);

    printf("%s",brr);

    return 0;


}