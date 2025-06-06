#include<stdio.h>

void StrCpyCap(char *src, char *dest)
{
    // Filter 
    
    while (*src != '\0')
    {
      if(*src >= 'A' && (*src <= 'Z'))
      {
        *dest = *src;
        dest++;
      }
      src++;


    }
    *dest = '\0';
    
}

int main()
{
    char arr[30] ="Marvellous Multi OS";
    char brr[30];  // empty string

    StrCpyCap(arr,brr);

    printf(" Copied capital letters : %s\t",brr);  // Marvellous

    return 0;


}
