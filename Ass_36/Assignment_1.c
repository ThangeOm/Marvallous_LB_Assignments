#include<stdio.h>
#include<stdlib.h>

struct node
{
    int data;
    struct node * next;
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
        printf(" Invalid Memory\n ");
        return;
    }
    else
    {
        newn-> data = no;
        newn -> next = *first;
        *first  = newn;

    }
}
void Display(PNODE first)
{
    while (first != NULL)
    {
        printf("| %d | -> ",first->data);
        first = first->next;
    }
    printf("NULL\n");
    
}
void Reverse(PNODE first)
{
    int Num,rev;

    while (first != NULL)
    {
        Num = first->data;
        rev = 0;

        while (Num != 0)
        {
            rev = rev * 10 +(Num % 10);
            Num = Num / 10;
        }
        first -> data = rev;
        
        first = first -> next;

    }

    
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

    Reverse(head);

    printf("Reverse of elements : \n");
    Display(head);

    return 0;

}

