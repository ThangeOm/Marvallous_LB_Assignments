#include<stdio.h>
#include<string.h>

void DisplayDigit(char *str)
{
    int i = 0;
  
    while (str[i] != '\0')
    {
      if(str[i] >= '0' && str[i] <= '9')
      {
        printf("%c",str[i]);

      }
      i++;
    }
    printf("\n");



    
    
}
int main()
{
    char arr[20];
    int iRet = 0;

    printf("Enter the string:\n");
    scanf("%[^'\n']s",arr);

    DisplayDigit(arr);


    return 0;

}