
// doubly link list

#include <stdio.h>
#include <stdlib.h>
void create(void);
void show(void);
int length(void);
struct node
{
    struct node *left;
    int data;
    struct node *right;
};
struct node *root = 0;
int main()
{
    int ch, l = 0;

    while (1)
    {
        printf("\t\t\t\tDoubly link list operations\n");
        printf("1. Create()\n");
        printf("2. Display()\n");
        printf("3. Length()\n");
        printf("4. exit()\n");
        printf("Enter your choice: ");
        scanf("%d", &ch);
        switch (ch)
        {
        case 1:
            create();
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
            break;
        default:
            printf("Enter valid option\n");
            break;
        }
    }

    return 0;
}

void create(void)
{
    struct node *new_node;
    new_node = (struct node *)malloc(sizeof(struct node));
    printf("Enter data: ");
    scanf("%d", &new_node->data);
    new_node->right = 0;
    new_node->left = 0;

    if (root == 0)
    {
        root = new_node;
    }
    else
    {
        struct node *temp = root;
        while (temp->right != NULL)
        {
            temp = temp->right;
        }
        temp->right = new_node;
        new_node->left = temp;
        temp = new_node;
    }
    printf("Node inserted\n");
}

void show(void)
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
            printf("%d-->", temp->data);
            temp = temp->right;
        }
        printf("\n");
    }
}

int length(void)
{
    if (root == NULL)
    {
        printf("The list is empty\n");
        return 0;
    }
    else
    {
        struct node *temp = root;
        int i = 1;
        while (temp->right != NULL)
        {
            i++;
            temp = temp->right;
        }
        return i;
    }
}