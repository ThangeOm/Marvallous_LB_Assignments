#include<stdio.h>
#include<string.h>

int CountWhite(char *str)
{
    int i = 0;
    int iCount = 0;

  
    while (str[i] != '\0')
    {
      if(str[i] == ' ' || str[i] == '\t')
      {
       
        iCount++;


      }
      i++;
    }
    return iCount;



    
    
}
int main()
{
    char arr[100];
    int iRet = 0;

    printf("Enter the string:\n");
    scanf("%[^'\n']s",arr);

    iRet = CountWhite(arr);

    printf("%d",iRet);


    return 0;

}