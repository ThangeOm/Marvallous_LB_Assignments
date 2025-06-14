#include<stdio.h>
#include<stdlib.h>
#include<fcntl.h>
#include<unistd.h>
#include<string.h>

int main()
{
    char fname[20] ={'\0'};
    int fd = 0;
    char Buffer[10] = {'\0'};
    int iRet = 0;



    printf("Enter the file name that you want to open:\n");
    scanf("%s",fname);

    fd = open(fname,O_RDONLY); 
    if(fd == -1)
    {
        printf("Unable to open the file");
    }
    else
    {
        printf("file is successfully opend with fd:%d\n",fd);

        while ((iRet = read(fd,Buffer,10)) != 0)
        {
           write(1,Buffer,iRet);
           
            memset(Buffer,'\0',10);
        }
        
        
        close(fd);
    }


    return 0;

}