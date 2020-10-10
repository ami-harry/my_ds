#include <stdio.h>
#include <stdlib.h>
void createNode(void);
void Insert_at_Begin(void);
void Insert_at_Last(void);
void Insert_at_Pos(void);
void Insert_after_Pos(void);
void show(void);
int len(void);

struct node
{
    struct node *left;
    int data;
    struct node *right;
};

// here we will maintain a tail pointer also, that will hold the adderss of the last block, so that the insertion and deletion at last will take O(1) time complexity else O(n)

struct node *head, *tail;

int main()
{

    return 0;
}

void createNode(void)
{
    struct node *newnode;
    newnode = (struct node *)malloc(sizeof(struct node));
    printf("Enter data: ");
    scanf("%d", &newnode->data);
    newnode->left = 0;
    newnode->right = 0;
    if (head == 0)
    {
        head = tail = newnode;
    }
    else
    {
        newnode->left = tail;
        tail->right = newnode;
        tail = newnode; // maintaining the tail , it holds the address of the last node
    }
    printf("Node inseted\n");
}

void show(void)
{
    if (head == 0)
    {
        printf("The list is empty\n");
    }
    else
    {
        while (tail != 0)
        {
            printf("%d-->", tail->data);
            tail = tail->right;
        }
        printf("\n");
    }
}

int len(void)
{
}