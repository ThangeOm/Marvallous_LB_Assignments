#include<stdio.h>
#include<string.h>

void struprx(char *str)
{
    int i = 0;
  
    while (str[i] != '\0')
    {
      if(str[i] >= 'a' && str[i] <= 'z')
      {
        str[i] = str[i] - 32;
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

    struprx(arr);

    printf("Modified string is: %s",arr);


    return 0;

}