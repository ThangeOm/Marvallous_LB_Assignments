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

int AdditionEven(PNODE first)
{
    int Sum = 0;
    while (first != NULL)
    {
        if(first -> data % 2 == 0)
        {
            Sum = Sum + first->data;
        }
        first = first -> next;
    }
    return Sum;
    
    
}
int main()
{
    PNODE head = NULL;
    int iRet = 0;

    insertFirst(&head,41);
    insertFirst(&head,32);
    insertFirst(&head,20);
    insertFirst(&head,11);

    iRet = AdditionEven(head);
    printf("Addition of even element : %d\n",iRet);

    return 0;

}
