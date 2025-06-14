#include<stdio.h>
#include<stdlib.h>
#include<io.h>
#include<unistd.h>
#include<fcntl.h>

#define BUFFER_SIZE 1024

int CountChar(char FName[],char Ch)
{
    int fd = 0;
    int iRet = 0, i = 0, iCount = 0;
    char Buffer[1024] = {'\0'};

    fd = open(FName, O_RDONLY);
    if(fd == -1)
    {   
        printf("Unable to open the file.\n");
        return -1;
    }

    while ((iRet = read(fd,Buffer,BUFFER_SIZE)) != 0)
    {
       for( i = 0; i < iRet; i++)
       {
            if(Buffer[i] == Ch)
            {
                iCount++;
            }
           
       }
    }
    close(fd);
    return iCount;
    
}
int main()
{
    char FileName[30];
    int iRet = 0;
    char cValue = 0;

    printf("Enter the file name: ");
    scanf("%s",FileName);

    printf("Enter the character: ");
    scanf(" %c",&cValue);

    iRet = CountChar(FileName,cValue);

    printf("Frequency is : %d ",iRet);

    return 0;

}