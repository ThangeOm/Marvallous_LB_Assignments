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

void insertFirst(PPNODE first,int no)
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
int Addition(PNODE first)
{
    int Sum = 0;
    PNODE temp = first;

    while (temp  != NULL)
    {
        Sum = Sum + temp->data;
        temp = temp->next;
    }
    return Sum;
    
}
int main()
{
    PNODE head = NULL;
    int iRet = 0;

    insertFirst(&head,40);
    insertFirst(&head,30);
    insertFirst(&head,20);
    insertFirst(&head,10);

    iRet = Addition(head);

    printf("Sum of elements: %d",iRet);

    return 0;
}
