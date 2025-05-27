#include<stdio.h>

void Pattern(int iRow, int iCol)
{
    int i = 0, j = 0;
    int even = 2;
    int odd = 1;

    for(i = 1; i <= iRow; i++)
    {
        if(i % 2 != 0) 
        {
    
            for(j = 1; j <= iCol; j++)
            {
                printf("%d\t", even);
                even = even +  2;
            }
        }
        else 
        {
            for(j = 1; j <= iCol; j++)
            {
                printf("%d\t", odd);
                odd = odd +  2;
            }
        }
        printf("\n");
    }
}

int main()
{
    int iValue1 = 0, iValue2 = 0;

    printf("Enter number of rows: ");
    scanf("%d", &iValue1);

    printf("Enter number of columns: ");
    scanf("%d", &iValue2);

    Pattern(iValue1, iValue2);

    return 0;
}
