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

int SecMaximum(PNODE first)
{
    int Max1 = 0, Max2 = 0;
    while (first != NULL)
    {
        if(first ->data > Max1)
        {
            Max2 = Max1;
            Max1 = first -> data;

        }
        else if(first -> data > Max2 && first -> data != Max1)
        {
            Max2 = first -> data;
        }
        first = first -> next;
    }
    if(Max2 == 0)
    {
        printf("Second maximum does not exit \n");
        return -1;
    }
    return Max2;
}
int main()
{
    PNODE head = NULL;
    int iRet = 0;

    insertFirst(&head,240);
    insertFirst(&head,320);
    insertFirst(&head,230);
    insertFirst(&head,110);

    iRet = SecMaximum(head);
    if(iRet != -1)
    {
        printf("Second maximum element : %d\n",iRet);

    }
    return 0;

}
