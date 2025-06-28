#include<stdio.h>
#include<stdlib.h>

struct node
{
    int data;
    struct node *next;
};
typedef struct node NODE;
typedef struct node * PNODE;
typedef struct node ** PPNODE;

void insertFirst(PPNODE first, int no)
{
    PNODE newn = NULL;
    
    newn = (PNODE)malloc(sizeof(NODE));

    if(newn == NULL)
    {
        *first = newn;
    }
    else
    {
        newn->data = no;
        newn->next = *first;
        *first = newn;

    }
}
int Perfect(int iNo)
{
    int sum = 0, i = 0;

    for(i = 1; i <= (iNo / 2); i++)
    {
        if(iNo % i == 0)
        {
            sum = sum + i;
        }
    }
    return (sum == iNo);
}

int DisplayPerfect(PNODE first)
{
    int iCount = 0;
    printf("Perfect elements: \n ");

    while (first != NULL)
    {
       if(Perfect(first -> data))
       {
            printf(" %d ",first->data);
            iCount++;
       }
       first = first->next;

    }
    printf("\n");
    return iCount;
    

    
}
int main()
{
    PNODE head = NULL;
    int iRet = 0;

    insertFirst(&head,89);
    insertFirst(&head,6);
    insertFirst(&head,41);
    insertFirst(&head,17);
    insertFirst(&head,28);
    insertFirst(&head,11);

    DisplayPerfect(head);

    return 0;

}
