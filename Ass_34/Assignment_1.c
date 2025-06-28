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
        printf("Invalid memory\n");
        return;
    }
    else
    {
        newn -> data = no;
        newn -> next = *first;
        *first = newn;
    }
    
}

void Display(PNODE first)
{
    while (first != NULL)
    {
       printf("| %d | -> ",first -> data);
       first = first -> next;
    }
    printf("NULL\n");
    
}

int SearchFirstOcc(PNODE first, int no)
{
    int pos = 1;
    while (first != NULL)
    {
        if(first -> data == no)
        {
            return pos;
        }
        else
        {
            first = first -> next;
            pos++;
        }
      
    }
    return -1;
    
}
int main()
{
    PNODE head = NULL;
    int iRet = 0;

    insertFirst(&head,70);
    insertFirst(&head,30);
    insertFirst(&head,50);
    insertFirst(&head,40);
    insertFirst(&head,30);
    insertFirst(&head,20);
    insertFirst(&head,10);

    Display(head);

    iRet = SearchFirstOcc(head,30);

    printf(" %d \n",iRet);

    return 0;

}

