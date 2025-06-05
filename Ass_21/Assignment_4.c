#include<stdio.h>
#include<stdlib.h>

void Digits(int Arr[],int iLength)
{
    int i = 0;
    printf("Three digit number are : \n");


    for(i = 0; i < iLength; i++)
    {
        if(Arr[i] >= 100 && Arr[i] <= 999)
        {
            printf("%d\t",Arr[i]);

        }
    }
    printf("\n");
   

}
int main()
{
    int iSize = 0;
    int iCnt = 0;
    int *p = NULL;

    printf("Enter the number : ");
    scanf("%d",&iSize);

    p = (int *)malloc(iSize * sizeof(int));

    if(p == NULL)
    {
        printf("Unable to allocate memory ");
        return -1;

    }
   

    for(iCnt = 0;iCnt < iSize;iCnt++)
    {
        printf("Enter element %d: ",iCnt + 1);
        scanf("%d",&p[iCnt]);
    }
     Digits(p,iSize);

    free(p);

    return 0;



}