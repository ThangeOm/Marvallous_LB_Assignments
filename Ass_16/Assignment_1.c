#include<stdio.h>

void Pattern(int iRow, int iCol)
{
    int i = 0;
    int j = 0;

    for(int i = 1; i <= iRow; i++)
    {
        for(j =1; j <= iCol; j++)
        {
            if(i >= j)
            {
                printf("*\t");
            }
            
        }
        printf("\n");
    }
    printf("\n");
}
int main()
{
    int iValue1 = 0;
    int iValue2 = 0;

    printf("Enter number of rows :");
    scanf("%d",&iValue1);

    printf("Enter number of column:");
    scanf("%d",&iValue2);

    Pattern(iValue1,iValue2);

    return 0;


}