#include<stdio.h>
#include<string.h>

void StrRevX(char *str )
{
    int start = 0;
    int end = strlen(str) - 1;
    char temp = 0;

    while (start < end)
    {
       temp = str[start];

       str[start] = str[end];

       str[end] = temp;

       start++;
       end--;
    }
    
    
}

int main()
{
    char arr[20];
    int iRet = 0;


    printf("Enter string :");
    scanf("%[^'\n]s",arr);
    
    StrRevX(arr);

    printf("Modified string is %s",arr);

    return 0;
}
