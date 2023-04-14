#include <stdio.h>
#include <stdlib.h>

typedef struct node
{
    int data;
    struct node *next;
} print_d;

void print_data(print_d *head)
{
    print_d *ptr = NULL;
    ptr = head;
    if (head == NULL)
    {
        printf("Linked list is empty!\n");
    }
    else
    {
        while (ptr != NULL)
        {
            printf("%d\n", ptr->data);
            ptr = ptr->next;
        }
    }
}

int main(void)
{
    print_d *head;
    print_d *temp;

    head = malloc(sizeof(print_d));
    head->data = 45;
    head->next = NULL;

    temp = malloc(sizeof(print_d));
    temp->data = 98;
    temp->next = NULL;
    head->next = temp;

    temp = malloc(sizeof(print_d));
    temp->data = 3;
    temp->next = NULL;
    head->next->next = temp;

    print_data(head);
    return (0);
}