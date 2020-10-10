// here we are making singly list using function and displaying all items

#include <stdio.h>
#include <stdlib.h>
void append(void);
void display(void);
struct node
{
    int data;
    struct node *ptr;
};
struct node *root = 0; //initially the list is empty
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

// append node
void append(void)
{

    struct node *new_node, *temp;
    new_node = (struct node *)malloc(sizeof(struct node)); //empty list created
    printf("Enter data for the node: ");
    scanf("%d", &new_node->data);
    new_node->ptr = 0;

    // inserting the node
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
    struct node *temp = root;
    printf("the node data is \n");
    while (temp != 0)
    {
        printf("%d-->", temp->data);
        temp = temp->ptr;
    }
    printf("\n\ndone\n\n");
}