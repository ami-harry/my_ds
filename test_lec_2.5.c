// test for these function

// 1. insert at last
// 2. insert at begin
// 3. insert at specific position
// 4. display all elements
// 5. length of the list

#include <stdio.h>
#include <stdlib.h>
void Insert_at_start(void);
void Insert_at_last(void);
void Insert_after_any_pos(void);
void Display(void);
int Length(void);

// creating the structure
struct node
{
    int data;
    struct node *ptr;
};
struct node *root = 0;
int main()
{
    int ch, l = 0;
    while (1)
    {
        printf("\t\t\tLink list operations\n\n");
        printf("1. Insert_at_start\n");
        printf("2. Insert_at_last\n");
        printf("3. Insert_after_any_pos\n");
        printf("4. Display\n");
        printf("5. Length\n");
        printf("6. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &ch);

        switch (ch)
        {
        case 1:
            Insert_at_start();
            break;
        case 2:
            Insert_at_last();
            break;
        case 3:
            Insert_after_any_pos();
            break;
        case 4:
            Display();
            break;
        case 5:
            l = Length();
            printf("The length of the list is %d\n", l);
            break;
        case 6:
            exit(0);
            break;
        default:
            printf("Enter valid option\n");
            break;
        }
    }

    return 0;
}

void Insert_at_start(void)
{
    struct node *new_data;
    new_data = (struct node *)malloc(sizeof(struct node));
    printf("Enter data: ");
    scanf("%d", &new_data->data);
    new_data->ptr = 0;
    if (root == 0)
    {
        root = new_data;
    }
    else
    {

        new_data->ptr = root;
        root = new_data;
    }
    printf("One node iserted in the beginning\n");
}

int Length(void)
{
    if (root == 0)
    {
        printf("The list is empty\n");
        return 0;
    }
    else
    {
        struct node *temp = root;
        int i = 1;
        while (temp->ptr != 0)
        {
            i++;
            temp = temp->ptr;
        }
        return i;
    }
}

void Insert_after_any_pos(void)
{
    int pos, len;
    len = Length();
    printf("Enter the posiotion where you want to insert: ");
    scanf("%d", &pos);
    if (pos > len)
    {
        printf("Invalid position\n");
        printf("The list haiving %d nodes and you choosed %d nodes to insert\n", len, pos);
    }
    else
    {
        struct node *new_data;
        new_data = (struct node *)malloc(sizeof(struct node));
        printf("Enter data: ");
        scanf("%d", &new_data->data);
        new_data->ptr = 0;

        struct node *temp = root;
        int i = 1;
        while (i < pos)
        {
            temp = temp->ptr;
            i++;
        }
        new_data->ptr = temp->ptr;
        temp = new_data;
    }
    printf("One new node inserted at %d position\n", pos);
}

void Insert_at_last(void)
{
    struct node *new_node;
    new_node = (struct node *)malloc(sizeof(struct node));
    printf("Enter data: ");
    scanf("%d", &new_node->data);
    new_node->ptr = 0;
    if (root == 0)
    {
        root = new_node;
    }
    else
    {
        struct node *temp = root;
        while (temp->ptr != 0)
        {
            temp = temp->ptr;
        }
        temp->ptr = new_node;
    }
    printf("One node inserted in the last\n");
}

void Display(void)
{
    if (root == 0)
    {
        printf("The list is empty\n");
    }
    else
    {
        struct node *temp = root;
        while (temp != 0)
        {
            printf("%d---> ", temp->data);
            temp = temp->ptr;
        }
        printf("\n");
    }
    printf("Done\n");
}
