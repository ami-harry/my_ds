// singly circular link list is same as singly link list, the simple difference is that the laast node of the list is holding the address of the first node so that it is called circular link list.

// create and display
#include <stdio.h>
#include <stdlib.h>
void create(void);
void display(void);

struct node
{
    int data;
    struct node *next;
};
struct node *head = 0;
int main()
{
    int ch = 1;
    while (1)
    {
        printf("\t\t\tSingly circular link list operation\n");
        printf("1. create\n");
        printf("2. display\n");
        printf("3. exit\n");
        printf("Enter your choice: ");
        scanf("%d", &ch);
        switch (ch)
        {
        case 1:
            create();
            break;

        case 2:
            display();
            break;
        case 3:
            exit(0);
            break;
        default:
            printf("choose valid option\n");
            break;
        }
    }

    return 0;
}

void create(void)
{
    struct node *new_data, *temp;
    new_data = (struct node *)malloc(sizeof(struct node));
    printf("Enter data: ");
    scanf("%d", &new_data->data);
    new_data->next = 0;
    if (head == 0)
    {
        head = temp = new_data;
    }
    else
    {
        temp = head;
        while (temp != 0)
        {
            temp = temp->next;
        }
        temp->next = new_data;
    }
    temp->next = head;
}

void display(void)
{
    if (head == 0)
    {
        printf("List is empty\n");
    }
    else
    {
        struct node *temp = head;
        while (temp->next != head)
        {
            printf("%d-->", temp->data);
            temp = temp->next;
        }

        printf("%d-->", temp->data);
    }
    printf("\n");
}