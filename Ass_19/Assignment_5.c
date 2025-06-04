#include<stdio.h>
#include<stdlib.h>

int Frequency(int Arr[], int iLength,int iNo)
{
    int i = 0, iCount = 0;

    for( int i = 0; i < iLength; i++)
    {
        if(Arr[i] == iNo)
        {
            iCount++;
        }
    }
    return iCount;
}

int main()
{
    int iSize = 0;
    int iRet = 0;
    int iCnt = 0;
    int *p = NULL;
    int iValue = 0;


    printf("Enter number of elements:");
    scanf("%d",&iSize);

    printf("Enter number of number:");
    scanf("%d",&iValue);


    p = (int *)malloc(iSize * sizeof(int));

    if(p == NULL)
    {
        printf("Unalbe to allocate memory");
        return -1;
    }
    printf("Enter %d elements:\n",iSize);

    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        printf("Enter element %d: ",iCnt + 1);
        scanf("%d",&p[iCnt]);

    }
    iRet = Frequency(p , iSize, iValue);
    printf("Frequency is %d",iRet);

    free(p);

    return 0;

}