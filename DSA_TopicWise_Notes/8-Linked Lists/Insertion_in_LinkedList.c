/*
----------------------------------------
     السلام عليكم ورحمة الله وبركاته
    بِسْــــــــمِ اٌللَّهِ اٌلرَّحْمَنِ اٌلرَّحِيْـــــــــمِ
    1% CHANCE, 99% FAITH
            ameerhamzah.d
----------------------------------------
*/

#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *next;
};

void linkedList_traversal(struct node *ptr)
{
    while (ptr != NULL)
    {
        printf("Element: %d\n", ptr->data);
        ptr = ptr->next;
    }
}

struct node *insertAtTheBeginning(struct node *head, int element)
{
    struct node *ptr = (struct node *)malloc(sizeof(struct node));

    ptr->data = element;
    ptr->next = head;

    return ptr;
}

struct node *insertInBetween(struct node *head, int element, int index)
{
    struct node *ptr = (struct node *)malloc(sizeof(struct node));
    ptr->data = element;
    struct node *p = head;
    int i = 0;

    while (i != (index - 1))
    {
        p = ptr->next;
        i++;
    }

    ptr->next = p->next;
    p->next = ptr;

    return head;
}

// Case 3
struct node *insertAtTheEnd(struct node *head, int element)
{
    struct node *ptr = (struct node *)malloc(sizeof(struct node));
    ptr->data = element;
    struct node *p = head;

    while (p->next != NULL)
    {
        p = p->next;
    }

    p->next = ptr;
    ptr->next = NULL;

    return head;
}

struct node *insertAfterANode(struct node *head, struct node *q, int element)
{
    struct node *ptr = (struct node *)malloc(sizeof(struct node));
    ptr->data = element;
    ptr->next = q->next;
    q->next = ptr;

    return head;
}

int main()
{
    struct node *head;
    struct node *mid;
    struct node *tail;

    head = (struct node *)malloc(sizeof(struct node));
    mid = (struct node *)malloc(sizeof(struct node));
    tail = (struct node *)malloc(sizeof(struct node));

    head->data = 23;
    head->next = mid;

    mid->data = 85;
    mid->next = tail;

    tail->data = 66;
    tail->next = NULL;

    printf("Elements: \n");
    linkedList_traversal(head);

    int n, index;
    printf("\nEnter element: \n");
    scanf("%d", &n);

    head = insertAtTheBeginning(head, n);
    head = insertInBetween(head, n, 1);
    head = insertAtTheEnd(head, n);
    head = insertAfterANode(head, mid, n);
    
    printf("\nAfter insertion: \n");
    linkedList_traversal(head);

    return 0;
}