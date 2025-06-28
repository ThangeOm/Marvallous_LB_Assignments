
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
int Maximum(PNODE first)
{
    int Max = 0;
    PNODE temp = first;

    while (temp  != NULL)
    {
        if(temp->data > Max)
        {
            Max = temp->data;
        }
        temp = temp->next;
       
    }
    return Max;
    
}
int main()
{
    PNODE head = NULL;
    int iRet = 0;

    insertFirst(&head,240);
    insertFirst(&head,320);
    insertFirst(&head,230);
    insertFirst(&head,110);

    iRet = Maximum(head);

    printf("Maximum of elements: %d",iRet);

    return 0;
}
