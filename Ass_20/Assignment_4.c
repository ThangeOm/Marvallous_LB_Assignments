#include<stdio.h>
#include<stdlib.h>

int  Range(int Arr[],int iLenght,int iStart,int iEnd)
{
    int i = 0;
    for(i = 0; i < iLenght; i++)
    {
        if(Arr[i] >= iStart && Arr[i] <= iEnd)
        {
            printf("%d\t",Arr[i]);

        }
    }
    printf("\n");
}
int main()
{
    int iSize = 0;
    int iRet = 0;
    int iCnt = 0;
    int iValue1 = 0;
    int iValue2 = 0;

    int *p = NULL;

    printf("Enter number of element: ");
    scanf("%d",&iSize);

    printf("Enter the starting point:");
    scanf("%d",&iValue1);

    printf("Enter the ending point: ");
    scanf("%d",&iValue2);

    p = (int *)malloc(iSize * sizeof(int));

    if(p == NULL)
    {
        printf("Unable to allocate memory");
        return -1;

    }

    printf("Enter %d element :\n",iSize);

    for(iCnt = 0;iCnt < iSize;iCnt++)
    {
        printf("Enter element %d : ",iCnt + 1);
        scanf("%d",&p[iCnt]);

    }
    iRet = Range(p,iSize,iValue1,iValue2);

    free(p);
    return 0;


}