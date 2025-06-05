#include<stdio.h>

#define TRUE 1
#define FALSE 0

typedef int BOOL;

BOOL ChkVowel(char *str)
{
    // Filter
    if (str == NULL || *str == '\0')  
    {
        return FALSE;
    }
    while (*str != '\0')
    {
        
        char ch = *str;

        if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' ||
            ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U')
        {
            return TRUE;
        }

        str++; 
    }

    return FALSE;
    
    
}

int main()
{
    char arr[20];
    BOOL bRet = FALSE;


    printf("Enter the string:\n");
    scanf("%[^'\n']s",arr);

    bRet = ChkVowel(arr);

    if(bRet == TRUE)
    {
        printf("TRUE\n");
    }
    else
    {
        printf("FALSE\n");
    }

    return 0;

}