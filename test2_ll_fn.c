#include <stdio.h>
#include <stdlib.h>
void display(void);
void append(void);
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
        printf("Enter any key to continue and 0 to exit: ");
        scanf("%d", &ch);
    }

    display();
    return 0;
}

void append(void)
{
    struct node *new_node, *temp;
    new_node = (struct node *)malloc(sizeof(struct node));
    printf("Enter data : ");
    scanf("%d", &new_node->data);
    new_node->ptr = 0;
    // adjusting the node
    if (root = 0)
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
    struct node *temp = root;
    printf("The node data is :\n\n");
    while (temp != 0)
    {
        printf("%d--> ", temp->data);
        temp = temp->ptr;
    }
    printf("\ndone\n");
}