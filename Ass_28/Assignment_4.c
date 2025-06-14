#include<stdio.h>
#include<stdlib.h>
#include<fcntl.h>
#include<unistd.h>
#include<string.h>

int main()
{
    char fname[20] ={'\0'};
    int fd = 0;
    char Buffer[] = "India is my country";
    int iRet = 0;



    printf("Enter the file name that you want to open:\n");
    scanf("%s",fname);

    fd = open(fname,O_WRONLY | O_CREAT,0777); 
    if(fd == -1)
    {
        printf("Unable to open the file");
    }
    else
    {
        printf("file is successfully opend with fd:%d\n",fd);

        iRet = write(fd,Buffer,sizeof(Buffer) - 1);

        
        printf("%d bytes gets written successfully\n",iRet);

        
       
      
        
        close(fd);
    }


    return 0;

}