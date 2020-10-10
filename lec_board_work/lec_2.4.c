// implementation of linked list(singly list list)

#include <stdio.h>
#include <stdlib.h>
struct node
{
    int data;
    struct node *next;
};

int main()
{
    struct node *head, *newnode, *temp;
    head = 0;
    int choice, count = 0;
    while (choice)
    {
        //allocating the memory
        newnode = (struct node *)malloc(sizeof(struct node));
        // taking input
        printf("Enter data: ");
        scanf("%d", &newnode->data);
        newnode->next = 0;

        if (head == NULL)
        {

            head = temp = newnode;
        }
        else
        {
            temp->next = newnode;
            temp = newnode;
        }
        printf("Press 1 to continue and 0 to exit: ");
        scanf("%d", &choice);
    }

    // printing the data (traversing the link list)
    temp = head;
    while (temp != 0)
    {
        printf("At link %d\n", temp->data);
        temp = temp->next;
        count++;
    }
    printf("Total no of elements were %d\n", count);
    printf("All data printed");

    return 0;
}
