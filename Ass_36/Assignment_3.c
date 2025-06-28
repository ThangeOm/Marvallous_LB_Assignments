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
void DisplayProduct(PNODE first)
{
    int iNo,Prod,digit;

    while (first != NULL)
    {
       iNo = first->data;
       Prod = 1;

       if(iNo == 0)
       {
            printf(" 0\n");
       }
       else
       {
            while (iNo != 0)
            {
                digit = iNo % 10;
                Prod = Prod * digit;
                iNo = iNo / 10;
            }
            printf(" %d ",Prod);
            
       }
       first = first->next;
    }
    printf("\n");
}
int main()
{
    PNODE head = NULL;
    
    insertFirst(&head,41);
    insertFirst(&head,32);
    insertFirst(&head,20);
    insertFirst(&head,11);
    
    DisplayProduct(head);

    return 0;
    


}

