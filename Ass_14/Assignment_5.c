#include<stdio.h>

void Pattern(int iRow, int iCol)
{
    int i = 0;
    int j= 0;
    int No = 0;

    for(i = 1 ;i <= iRow; i++)
    {
        if(i % 2 != 0)
        {
            No = i;
            for(j = 1 ; j <= iCol; j++)
            {
                printf("%d\t",No++);
            }
           
        }
       else
       {
            No = i;
            for(j = 1;j <= iCol; j++)
        {
            printf("%d\t",No++);
        }
        
       }
       printf("\n");

       
    }
}
int main()
{
    int iValue1 = 0;
    int iValue2 = 0;

    printf("Enter number of row:");
    scanf("%d",&iValue1);

    printf("Enter number of column:");
    scanf("%d",&iValue2);

    Pattern(iValue1,iValue2);

    return 0;
}