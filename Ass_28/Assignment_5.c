#include<stdio.h>
#include<stdlib.h>
#include<fcntl.h>
#include<unistd.h>
#include<string.h>

int main()
{
    char fname[20] = {'\0'};
    char data[100] = {'\0'};
    int fd = 0;
    int iRet = 0;

    printf("Enter the file name :\n");
    scanf("%s", fname);

    printf("Enter the string  :\n");
    scanf(" %[^\n]s", data); 

    fd = open(fname, O_WRONLY | O_APPEND | O_CREAT, 0777);
    
    if(fd == -1)
    {
        printf("Unable to open the file\n");
    }
    else
    {
        printf("file is successfully opened with fd: %d\n", fd);

        iRet = write(fd, data, strlen(data));
        write(fd, "\n", 1);  

        printf("%s\n", fname);

        printf("%s\n", data);

        close(fd);
    }

    return 0;
}
