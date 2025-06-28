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

int DisplayPrime(PNODE first)
{
    int iNo,i,Prime;

    while (first != NULL)
    {
       iNo = first->data;
       Prime = 1;

       if(iNo < 2)
       {
            Prime = 0;

       }
       else
       {
            for(i = 2; i <= (iNo / 2); i++)
            {
                if(iNo % i == 0)
                {
                    Prime = 0;
                    break;
                }
            }
       }
       if(Prime)
       {
            printf(" %d ",iNo);
       }
       first = first-> next;
    }
    printf("\n");
    
}
int main()
{
    PNODE head = NULL;
    int iRet = 0;

    insertFirst(&head,89);
    insertFirst(&head,22);
    insertFirst(&head,41);
    insertFirst(&head,17);
    insertFirst(&head,20);
    insertFirst(&head,11);

    DisplayPrime(head);
    

    return 0;

}
