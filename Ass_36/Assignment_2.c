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

int DisplayPallindrome(PNODE first)
{
   int iNo = 0;
   int Rev = 0;
    int temp;

   while (first != NULL)
   {
        iNo = first->data;
        temp = iNo;
        Rev = 0;

        while (iNo != 0)
        {
            Rev = Rev * 10 + iNo % 10;
            iNo = iNo / 10;
        }
        if(Rev == temp)
        {
            printf("%d ",temp);
        }
        first = first ->next;
    }
    printf("\n");
   


   
   
    
}
int main()
{
    PNODE head = NULL;
    int iRet = 0;

    insertFirst(&head,89);
    insertFirst(&head,6);
    insertFirst(&head,414);
    insertFirst(&head,17);
    insertFirst(&head,28);
    insertFirst(&head,11);

    iRet = DisplayPallindrome(head);

    
    return 0;

}

