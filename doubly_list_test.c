#include <stdio.h>
#include <stdlib.h>
void append(void);
void show(void);
int len(void);

struct node
{
    struct node *left;
    int data;
    struct node *right;
};

struct node *root = NULL;
int main()
{

    int ch, l = 0;
    while (1)
    {
        printf("\t\t\tDoubly link list operations\n");
        printf("1. append()\n");
        printf("2. show()\n");
        printf("3. len()\n");
        printf("4. exit()\n");
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
            l = len();
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

void append(void)
{
    struct node *new_data;
    new_data = (struct node *)malloc(sizeof(struct node));
    printf("Enter data: ");
    scanf("%d", &new_data->data);
    new_data->left = 0;
    new_data->right = 0;

    if (root == NULL)
    {
        root = new_data;
    }
    else
    {
        struct node *temp = root;
        while (temp->right != NULL)
        {
            temp = temp->right;
        }
        temp->right = new_data;
        new_data->left = temp;
        temp = new_data;
    }
    printf("Node inserted\n");
}

void show(void)
{
    if (root == NULL)
    {
        printf("Root is empty\n");
    }
    else
    {
        struct node *temp = root;
        while (temp != NULL)
        {
            printf("%d--> ", temp->data);
            temp = temp->right;
        }
        printf("\n");
    }
}

int len(void)
{
    if (root == NULL)
    {
        printf("The list is empty\n");
        return 0;
    }
    else
    {
        int i = 1;
        struct node *temp = root;
        while (temp->right != 0)
        {
            i++;
            temp = temp->right;
        }
        return i;
    }
}