// making three function here
// a. insert at begin
// b. insert at end(append)
// c. insert at specific position
// d. length of the link list
#include <stdio.h>
#include <stdlib.h>
void InsertAtBegin(void);
void InsertAtLast(void);
void InsertAtPos(void);
int Length(void);
void Display(void);
struct node
{
    int data;
    struct node *ptr;
};
struct node *root = 0;
int main()
{

    int ch, l;
    while (1)
    {
        printf("\t\t\t\tList list operations\n\n");
        printf("1. Insert at begin\n");
        printf("2. Insert at last\n");
        printf("3. Insert at any pos\n");
        printf("4. Length of the list\n");
        printf("5. Display all elemets\n");
        printf("6. Exit\n");

        printf("Enter your choice: ");
        scanf("%d", &ch);
        switch (ch)
        {
        case 1:
            InsertAtBegin();
            break;
        case 2:
            InsertAtLast();
            break;
        case 3:
            InsertAtPos();
            break;
        case 4:
            l = Length();
            printf("\nThe length of the list is %d\n\n", l);
            break;
        case 5:
            Display();
            break;
        case 6:
            exit(0);
            break;
        default:
            printf("\nEnter valid choice\n\n");
            break;
        }
    }

    return 0;
}

void InsertAtBegin(void)
{
    struct node *new_node;
    new_node = (struct node *)malloc(sizeof(struct node));
    printf("\nEnter data : ");
    scanf("%d", &new_node->data);
    new_node->ptr = 0;

    // checking that the list having elements or not
    if (root == 0)
    {
        root = new_node;
    }
    else
    {
        new_node->ptr = root; //right connection
        root = new_node;      //left connection
    }
    printf("\nOne node inserted in the beginning\n\n");
}

int Length(void)
{
    //checking how many elements are there in the list
    if (root == 0)
    {
        return 0;
    }
    else
    {
        struct node *temp;
        temp = root;
        // taking index as 1;
        int count = 1;
        while (temp->ptr != 0)
        {
            count++;
            temp = temp->ptr;
        }
        return count;
    }
}

void InsertAtLast(void)
{
    struct node *new_node;
    new_node = (struct node *)malloc(sizeof(struct node));
    printf("\nEnter data: ");
    scanf("%d", &new_node->data);
    new_node->ptr = 0;
    // checking the cnewondition
    if (root == 0)
    {
        root = new_node;
    }
    else
    {
        struct node *temp;
        temp = root;
        while (temp->ptr != 0)
        {
            temp = temp->ptr;
        }
        temp->ptr = new_node; //inserting at last
        printf("\nA new node inserted at last\n\n");
    }
}

void InsertAtPos(void)
{
    int pos, len;
    printf("\nEnter position where you want to insert: ");
    scanf("%d", &pos);
    len = Length(); //storing the length  of the list which is returned by the function
    if (pos > len)
    {
        printf("\nInvalid position\n");
        printf("Currently list having %d nodes\n", len);
    }
    else
    {
        struct node *new_data, *temp = root;
        new_data = (struct node *)malloc(sizeof(struct node));
        printf("\nEnter data: ");
        scanf("%d", &new_data->data);
        new_data->ptr = 0;

        int i = 1;
        while (i < len)
        {
            temp = temp->ptr;
            i++;
        }
        new_data = temp->ptr; //right side connection
        temp = new_data;      //left connection
    }
}

void Display(void)
{
    struct node *temp = root;
    if (root == 0)
    {
        printf("\nList is empty\n");
    }
    else
    {

        printf("\nList elements are \n");
        while (temp != 0)
        {
            printf("%d--> ", temp->data);
            temp = temp->ptr;
        }
    }
    printf("\n\nDone\n\n");
}