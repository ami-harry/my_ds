// reverse of oa link list

#include <stdio.h>
#include <stdlib.h>
void Insert_at_last(void);
void reverse(void);
void Display(void);
int getlen(void);

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
        printf("\t\t\t\t\tLink list operations\n");
        printf("1. Create link list\n");
        printf("2. Display\n");
        printf("3. length\n");
        printf("4. Reverse\n");
        printf("5. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &ch);
        switch (ch)
        {
        case 1:
            Insert_at_last();
            break;
        case 2:
            Display();
            break;
        case 3:
            l = getlen();
            printf("The length of the list is %d\n", l);
            break;
        case 4:
            reverse();
            break;
        case 5:
            exit(0);
        default:
            printf("Enter valid input\n");
            break;
        }
    }

    return 0;
}

void Insert_at_last(void)
{
    struct node *new_data;
    new_data = (struct node *)malloc(sizeof(struct node));
    printf("Enter data: ");
    scanf("%d", &new_data->data);
    if (root == 0)
    {
        root = new_data;
    }
    else
    {
        struct node *temp = root;
        while (temp->ptr != 0)
        {
            temp = temp->ptr;
        }
        temp->ptr = new_data;
    }
}

int getlen(void)
{
    if (root == 0)
    {
        printf("The list is empty\n");
        return 0;
    }
    else
    {
        struct node *temp = root;
        int count = 1;
        while (temp->ptr != 0)
        {
            count++;
            temp = temp->ptr;
        }
        return count;
    }
}

void Display(void)
{
    if (root == 0)
    {
        printf("The  list is empty\n");
    }
    else
    {
        struct node *temp = root;
        while (temp != 0)
        {
            printf("%d--> ", temp->data);
            temp = temp->ptr;
        }
        printf("\n");
    }
}

void reverse(void)
{
    if (root == 0)
    {
        printf("The list is empty\n Noting to revese\n");
    }
    else
    {
        struct node *prev_node, *next_node, *current_node;
        prev_node = 0;
        current_node = next_node = root;
        while (next_node != 0)
        {
            next_node = next_node->ptr;
            current_node->ptr = prev_node;
            prev_node = current_node;
            current_node = next_node;
        }
        root = prev_node;
    }
    printf("The list is reversed\n Use display() to see the reversed list\n");
}