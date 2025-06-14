#include<stdio.h>
#include<unistd.h>
#include<stdlib.h>
#include <fcntl.h>   


int main()
{
    int fd = 0; 
    char fname[20] = {'\0'};

    printf("Enter the name of file:\n");
    scanf("%s",fname);

    fd = creat(fname,0777);

    if(fd == -1)
    {
        printf("Unable to create file:\n");
        return -1;
    }
    else
    {
        printf("file  created  successfully with FD %d\n",fd);
    
    }
    return 0;

}