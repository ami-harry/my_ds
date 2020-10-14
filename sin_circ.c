//singly circular link list

#include <stdio.h>
#include <stdlib.h>
void append(void);
struct node
{
    int data;
    struct node *next;
};
struct node *root = 0;
int main()
{

    return 0;
}

void append(void)
{
    struct node *newnode;
    newnode = (struct node *)malloc(sizeof(struct node));
    printf("Enter data: ");
    scanf("%d", &newnode->data);
    if (root == 0)
    {
        root = newnode;
    }
    else
    {
        struct node *temp = root;
    }
}