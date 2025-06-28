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
void DisplayLarge(PNODE first)
{
    int iNo,iDigit,Max;

    while (first != NULL)
    {
        iNo = first->data;
        Max = 0;

        if(iNo == 0)
        {
            Max = 0;

        }
        else
        {
            while (iNo != 0)
            {
                iDigit = iNo % 10;

                if(iDigit > Max)
                {
                    Max = iDigit;

                }
                iNo = iNo / 10;
            }
           
            
        }
        printf(" %d ",Max);
        first = first -> next;

    }
    printf("\n");
    

}
int main()
{
    PNODE head = NULL;

    insertFirst(&head,419);
    insertFirst(&head,532);
    insertFirst(&head,250);
    insertFirst(&head,11);

    DisplayLarge(head);

    return 0;

}