#include<stdio.h>
#include<stdlib.h>

int  Product(int Arr[],int iLenght)
{
    int i = 0;
    int iProduct = 1;
    int iOdd = 0;

    for(i = 0; i < iLenght; i++)
    {
        if(Arr[i] % 2 != 0)
        {
           iProduct = iProduct * Arr[i];
           iOdd = 1;

        }
    }
    if(iOdd == 0)
    {
        return 0;

    }
    return iProduct;
    
}
int main()
{
    int iSize = 0;
    int iRet = 0;
    int iCnt = 0;

    int *p = NULL;

    printf("Enter number of element: ");
    scanf("%d",&iSize);

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
    iRet = Product(p,iSize);
    printf("Product is %d",iRet);

    free(p);
    return 0;


}