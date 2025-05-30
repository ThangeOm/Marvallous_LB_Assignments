#include<stdio.h>

void Pattern(int iRow, int iCol)
{
    int i = 0;
    int j = 0;
    int iCnt = 0;


    for(int i = 1; i <= iRow; i++)
    {
        for(j = 1,iCnt = 1; j <= iCol; j++, iCnt++)
        {
            if((i == 1) || (i == iRow) || (j == 1) || (j == iCol) || (i == j) )
            {
                printf("%d\t",iCnt);
            }
            else
            {
                printf(" \t");
            }
        
          
        }
        printf("\n");
        
    }
    
    
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