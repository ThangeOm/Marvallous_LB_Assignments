#include<stdio.h>

void StrCpyCap(char *src, char *dest)
{
    // Filter 
    if (src == NULL || dest == NULL)
    {
        return; 
    }

    while (*src != '\0')
    {
      if(*src >= 'a' && (*src <= 'z') || *src == ' ')
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
    char arr[30] ="Marvellous multi OS";
    char brr[30];  // empty string

    StrCpyCap(arr,brr);

    printf(" Copied small letters : %s \t",brr); 

    return 0;


}