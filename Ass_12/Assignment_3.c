#include<stdio.h>

void Pattern(int iRow, int iCol)
{
    int i= 0;
    int j = 0;
    
    for(i = 1; i <= iRow; i++)
    {
        for(j = iCol; j >= 1; j--)
        {
            printf("%d\t",j);
        }
        printf("\n");
    }
   

}
int main()
{
    int iValue1 = 0 , iValue2 = 0;

    printf("Enter number of rows:\n");
    scanf("%d",&iValue1);

    printf("Enter number of columns:\n");
    scanf("%d",&iValue2);

    Pattern(iValue1,iValue2);

    return 0;



}