#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>

#define BUFFER_SIZE 1024

void DisplayN(char FName[], int iSize)
{
    int fd = 0;
    int iRet = 0;
    char Buffer[1024] = {'\0'};

    fd = open(FName, O_RDONLY);
    if (fd == -1)
    {   
        printf("Unable to open the file.\n");
        return;
    }


    iRet = read(fd, Buffer, iSize);
    if (iRet == 0)
    {
        printf("File is empty.\n");
    }
    else
    {
        printf("Data from file:\n%s\n", Buffer);
    }

    close(fd);
}

int main()
{
    char FileName[30];
    int iValue = 0;

    printf("Enter the file name: ");
    scanf("%s", FileName);

    printf("Enter the number of characters to read: ");
    scanf("%d", &iValue);

    DisplayN(FileName, iValue);

    return 0;
}
