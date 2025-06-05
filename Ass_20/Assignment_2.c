#include<stdio.h>
#include<stdlib.h>

int FirstOcc(int Arr[], int iLength,int iNo)
{
    int i = 0; 
    int iCount = 0;

    for( int i = 0; i < iLength; i++)
    {
        if(Arr[i] == iNo)
        {
            return 1;

        }
       
        
    }
    return -1;
  
}

int main()
{
    int iSize = 0;
    int iRet = 0;
    int iCnt = 0;
    int iValue = 0;
    int *p = NULL;


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
    iRet = FirstOcc(p , iSize,iValue);

    if(iRet == -1)
    {
        printf("There is no such number \n");

    }
    else
    {
        printf("First occurrence of number is %d ",iRet);
    }

    free(p);

    return 0;

}