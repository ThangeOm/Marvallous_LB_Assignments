#include<stdio.h>
#include<string.h>

void Reverse(char *str)
{
    int i = 0;
    int iLength = strlen(str);


    printf("Reversed string is:");
    for(i = iLength - 1; i >= 0; i--)
    {
        printf("%c",str[i]);
    }
    printf("\n");
    
}
int main()
{
    char arr[20];
    int iRet = 0;

    printf("Enter the string:\n");
    scanf("%[^'\n']s",arr);

    Reverse(arr);

    return 0;

}