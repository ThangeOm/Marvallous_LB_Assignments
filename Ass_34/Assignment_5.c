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
int Minimum(PNODE first)
{
    int Min= first->data;
    PNODE temp = first;

    while (temp != NULL )
    {
        if(temp->data < Min)
        {
            Min = temp ->data;
        }
        temp = temp ->next;
    }
    return Min;
    
}
int main()
{
    PNODE head = NULL;
    int iRet = 0;

    insertFirst(&head,640);
    insertFirst(&head,240);
    insertFirst(&head,20);
    insertFirst(&head,230);
    insertFirst(&head,110);

    iRet = Minimum(head);
    printf("Minimum of elements are : %d",iRet);

    return 0;

}
