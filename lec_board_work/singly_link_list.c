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
        // allocating the memory
        newnode = (struct node *)malloc(sizeof(struct node));
        // taking input
        printf("Enter data: ");

        scanf("%d", &newnode->data);
        newnode->next = 0;
        // checking the condition for next node
        if (head == 0) //or NULL
        {
            head = temp = newnode;
        }
        else
        {
            temp->next = newnode;
            temp = newnode;
            //every time it will make a new link
        }
        printf("Press 1 to continue and 0 to exit: ");
        scanf("%d", &choice);
    }
    // accessing the element
    temp = head;
    while (temp != 0)
    {
        printf("%d ", temp->data);
        temp = temp->next;
        count++; //counting the no of elements
    }

    printf("\nAll data printed sucessfully\n");
    printf("total no of elements were %d", count);

    return 0;
}