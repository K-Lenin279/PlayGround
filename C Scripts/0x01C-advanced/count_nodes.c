#include <stdio.h>
#include <stdlib.h>

typedef struct node
{
    int data;
    struct node *next; // next - link part of the node
} count_n;

void count_of_nodes(count_n *head)
{
    int count = 0;

    if (head == NULL)
    {
        printf("Linked list is empty!\n");
    }
    else
    {
        count_n *ptr = NULL; // NULL  - purpose of initialization
        ptr = head;
        while (ptr != NULL)
        {
            count++;
            ptr = ptr->next;
        }
        printf("%d\n", count);
    }
}

int main(void)
{
    count_n *head;
    count_n *temp;

    head = malloc(sizeof(count_n));
    head->data = 45;
    head->next = NULL;

    temp = malloc(sizeof(count_n));
    temp->data = 98;
    temp->next = NULL;
    head->next = temp;

    temp = malloc(sizeof(count_n));
    temp->data = 3;
    temp->next = NULL;
    head->next->next = temp;

    temp = malloc(sizeof(count_n));
    temp->data = 29;
    temp->next = NULL;
    head->next->next->next = temp;

    count_of_nodes(head);
    return (0);
}