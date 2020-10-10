#include <stdio.h>
#include <stdlib.h>
void append(void);
void display(void);
struct node
{
    int data;
    struct node *ptr;
};
struct node *root = 0;
int main()
{
    int ch;
    while (ch)
    {
        append();
        printf("enter any key to continue else 0 to exit: ");
        scanf("%d", &ch);
    }
    display();

    return 0;
}

void append(void)
{
    struct node *new_node, *temp;
    new_node = (struct node *)malloc(sizeof(struct node));
    printf("Enter data for the node: ");
    scanf("%d", &new_node->data);
    new_node->ptr = 0;
    if (root == 0)
    {
        root = temp = new_node;
    }
    else
    {
        temp->ptr = new_node;
        temp = new_node;
    }
}

void display(void)
{
    struct node *temp;
    temp = root;
    printf("The list data is \n\n");
    while (temp != 0)
    {
        printf("%d-->", temp->data);
        temp = temp->ptr;
    }
    printf("\n\ndone\n");
}