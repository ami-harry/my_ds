// doubly link test//append

#include <stdio.h>
#include <stdlib.h>
void append(void);
void show(void);
int length(void);

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

        printf("\t\t\t\tDoubly link list operations\n");
        printf("1. Append()\n");
        printf("2. show()\n");
        printf("3. Len()\n");
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

void append(void)
{
    struct node *new_data;
    new_data = (struct node *)malloc(sizeof(struct node));
    printf("Enter data: ");
    scanf("%d", &new_data->data);
    new_data->left = NULL;
    new_data->right = NULL;
    if (root == NULL)
    {
        root = new_data;
    }
    else
    {
        struct node *temp = root;
        while (temp->right != 0)
        {
            temp = temp->right;
        }
        temp->right = new_data;
        new_data->left = temp;
        temp = new_data;
    }
    printf("One node inserted \n");
}

int length(void)
{
    if (root == NULL)
    {
        printf("The root is empty\n");
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
void show(void)
{
    if (root == NULL)
    {
        printf("List is empty\n");
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