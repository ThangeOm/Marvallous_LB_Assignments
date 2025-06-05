#include<stdio.h>

void DisplaySchedule(char cDiv)
{
    if(cDiv == 'A' || cDiv == 'a')
    {
        printf("Division A exam Timing at 9.20 AM");
    }
    else if(cDiv == 'B'|| cDiv == 'b')
    {
        printf("Division B exam Timing at 8.30 AM");
    }
    else if(cDiv == 'C' || cDiv == 'c')
    {
        printf("Division C exam Timing at 9.20 AM");
    }
    else if(cDiv == 'D' || cDiv == 'd')
    {
        printf("Division D exam Timing at 10.30 AM");
    }
}
int main()
{
    char cValue = '\0';
    

    printf("Enter your Division:");
    scanf("%c",&cValue);

    DisplaySchedule(cValue);

    return 0;

}