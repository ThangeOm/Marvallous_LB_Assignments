#include<stdio.h>
#include<stdlib.h>

int Difference(int Arr[], int iLength)
{
    int iEvenSum = 0;
    int iOddSum = 0;

    for(int i = 0; i < iLength; i++)
    {
        if(Arr[i] % 2 == 0)
        {
            iEvenSum = iEvenSum + Arr[i];

        }
        else 
        {
            iOddSum = iOddSum + Arr[i];
        }
    }
    return iEvenSum - iOddSum; 
}
int main()
{
    int iSize = 0;
    int iRet = 0;
    int iCnt = 0;

    int *p = NULL;

    printf("Enter number of element:\n");
    scanf("%d",&iSize);

    p = (int *)malloc(iSize * sizeof(int));

    if(p == NULL)
    {
        printf("Unable to allocate memory");
        return -1;

    }

    printf("Enter %d elements:\n",iSize);

    for(iCnt = 0; iCnt < iSize ; iCnt++)
    {
        printf("Enter element : %d\n",iCnt + 1);
        scanf("%d",&p[iCnt]);

    }
    iRet = Difference(p,iSize);

    printf("Result is %d",iRet);

    free(p);

    return 0;

}
