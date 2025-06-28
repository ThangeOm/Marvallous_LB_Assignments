#include <stdio.h>
#include <stdlib.h>

struct node {
    int data;
    struct node *next;
};

typedef struct node NODE;
typedef struct node* PNODE;
typedef struct node** PPNODE;

void insertFirst(PPNODE first, int no) {
    PNODE newn = NULL;

    newn = (PNODE)malloc(sizeof(NODE));

    if (newn == NULL)
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
void SumDigit(PNODE first)
{
    int iNo, Sum;
    while (first != NULL)
    {
        iNo = first->data;
        Sum = 0;

        while (iNo != 0)
        {
            Sum = Sum + iNo % 10;
            iNo = iNo / 10;
        }

        printf("%d\n", Sum);
        first = first->next;
    }
}

int main() {
    PNODE head = NULL;

    insertFirst(&head, 640);
    insertFirst(&head, 240);
    insertFirst(&head, 20);
    insertFirst(&head, 230);
    insertFirst(&head, 110);

    SumDigit(head);

    return 0;
}
