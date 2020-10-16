// singly circular link list test

// creation of singly circular link list test

#include <stdio.h>
#include <stdlib.h>
void create(void);
void display(void);
int length(void);

struct node
{
    int data;
    struct node *next;
};
struct node *head = 0, *tail = 0;

int main()
{
    int ch, l = 0;
    while (1)
    {
        printf("\t\t\t\tCircular link list opearations\n");
        printf("1. Append\n");
        printf("2. Display\n");
        printf("3. Length\n");
        printf("4. Exit\n");
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
            l = length();
            printf("The length of the list is %d\n", l);
            break;
        case 4:
            exit(0);
            break;
        default:
            printf("Enter valid options\n");
            break;
        }
    }

    return 0;
}

void create(void)
{
    struct node *new;
    new = (struct node *)malloc(sizeof(struct node));
    printf("Enter data: ");
    scanf("%d", &new->data);
    new->next = 0;
    if (head == 0)
    {
        head = tail = new;
        // tail = new;
    }
    else
    {
        tail->next = new;
        tail = new;
        tail->next = head;
    }
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
        printf("%d", temp->data);
    }
    printf("\n");
}

int length(void)
{
    if (head == 0)
    {
        printf("The list is empty\n");
        return 0;
    }
    else
    {
        struct node *temp = head;
        int i = 1;
        while (temp->next != head)
        {
            i++;
            temp = temp->next;
        }
        return i;
    }
}