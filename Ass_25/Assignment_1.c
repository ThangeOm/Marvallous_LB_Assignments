#include<stdio.h>
#include<string.h>

void strlwrx(char *str)
{
    int i = 0;
  
    while (str[i] != '\0')
    {
      if(str[i] >= 'A' && str[i] <= 'Z')
      {
        str[i] = str[i] + 32;
      }
      i++;
    }



    
    
}
int main()
{
    char arr[20];
    int iRet = 0;

    printf("Enter the string:\n");
    scanf("%[^'\n']s",arr);

    strlwrx(arr);

    printf("Modified string is: %s",arr);


    return 0;

}