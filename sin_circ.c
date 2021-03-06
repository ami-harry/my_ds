
//singly circular link list

#include <stdio.h>
#include <stdlib.h>
void append(void);
void show(void);
int length(void);

struct node
{
    int data;
    struct node *next;
};

struct node *root = 0, *temp = 0;

int main()

{
    int ch, l = 0;
    while (1)
    {
        printf("\t\tCircular link list \n");
        printf("1. append\n");
        printf("2. display\n");
        printf("3. length\n");
        printf("4. exit\n");
        printf("Enter your choice: ");
        scanf("%d", &ch);
        switch (ch)
        {
        case 1:
            append();
            break;
        case 2:
            show();
            break;
        case 3:
            l = length();
            printf("The length of the list is %d\n", l);
            break;
        case 4:
            exit(0);
        default:
            printf("Enter valid option\n");
            break;
        }
    }

    return 0;
}

void append(void)
{
    struct node *new;
    new = (struct node *)malloc(sizeof(struct node));
    printf("Enter data: ");
    scanf("%d", &new->data);
    new->next = 0;
    if (root == 0)
    {
        root = temp = new;
    }
    else
    {
        temp->next = new;
        temp = new;
        temp->next = root;
    }
    printf("Node inserted\n");
}

void show(void)
{
    if (root == 0)
    {
        printf("list is empty\n");
    }
    else
    {
        struct node *temp = root;
        while (temp->next != root)
        {
            printf("%d-->", temp->data);
            temp = temp->next;
        }
        printf("%d", temp->data);
    }
}

int length(void)
{
    if (root == 0)
    {
        printf("List is empty\n");
        return 0;
    }
    else
    {
        struct node *temp = root;
        int i = 1;
        while (temp->next != root)
        {
            i++;
            temp = temp->next;
        }
        return i;
    }
}