// link list deletion operations

// a. delete from first
// b. delete from end
// c. delete from any specified position

// till now we have performed various operations on link list like, insert, display, length.
// void Insert_at_Start(void)
// void Insert_at_Last(void)
// void Insert_after_pos(void)
// void Delete_from_first(void)
// void Delete_from_last(void)
// void Delete_from_pos(void)

// void Display(void)
// int Length(void)
// quit()

#include <stdio.h>
#include <stdlib.h>
void Insert_at_Start(void);
void Insert_at_Last(void);
void Insert_after_pos(void);
void Delete_from_first(void);
void Delete_from_last(void);
void Delete_from_pos(void);
void Display(void);

int Length(void);

struct node
{
    int data;
    struct node *ptr;
};

struct node *root = 0;
int main()
{
    int ch, l = 0;
    while (1)
    {
        printf("\t\t\tLink list operations\n\n");
        printf("1. Insert_at_Start\n");
        printf("2. Insert_at_Last\n");
        printf("3. Insert_after_pos\n");
        printf("4. Delete_from_first\n");
        printf("5. Delete_from_last\n");
        printf("6. Delete_from_pos\n");
        printf("7. Display\n");
        printf("8. Length\n");
        printf("9. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &ch);

        switch (ch)
        {
        case 1:
            Insert_at_Start();
            break;
        case 2:
            Insert_at_Last();
            break;
        case 3:
            Insert_after_pos();
            break;
        case 4:
            Delete_from_first();
            break;
        case 5:
            Delete_from_last();
            break;
        case 6:
            Delete_from_pos();
            break;
        case 7:
            Display();
            break;
        case 8:
            l = Length();
            printf("The length of the list is %d\n", l);
            break;
        case 9:
            exit(0);
            break;
        default:
            printf("Enter valid choice\n");
            break;
        }
    }

    return 0;
}

int Length(void)

{
    int i = 0;
    struct node *temp = root;
    if (root == 0)
    {
        printf("The list is empty\n");
        return 0;
    }
    else
    {
        while (temp->ptr != 0)
        {
            i++;
            temp = temp->ptr;
        }
        return i;
    }
}

void Insert_at_Start(void)
{
    struct node *new_node;
    new_node = (struct node *)malloc(sizeof(struct node));
    printf("Enter data: ");
    scanf("%d", &new_node->data);
    new_node->ptr = 0;
    // adjusting the nodes
    if (root == 0)
    {
        root = new_node; //it will be first element becuase the list is empty
    }
    else
    {
        new_node->ptr = root; //right connection
        root = new_node;      //left connection
    }
    printf("One node inserted at start\n");
}

void Insert_at_Last(void)
{
    struct node *new_node;
    new_node = (struct node *)malloc(sizeof(struct node));
    printf("Enter data: ");
    scanf("%d", &new_node->data);
    new_node->ptr = 0;
    if (root == 0)
    {
        root = new_node; //means the list is empty, so the new element will be the first element always
    }
    else
    {
        struct node *temp = root;
        while (temp->ptr != 0)
        {
            temp = temp->ptr;
        }
        temp->ptr = new_node; //adjusting the nodes
    }
    printf("One node inserted at last\n");
}

void Insert_after_pos(void)
{
    int pos, len = 0;
    len = Length(); //storing the length of the list
    printf("Enter the position: ");
    scanf("%d", &pos);
    //
    if (pos > len)
    {
        printf("Enter valid position to insert\n");
        printf("Currently the list having %d nodes\n", len);
    }
    else
    {
        struct node *new_node, *temp = root;
        new_node = (struct node *)malloc(sizeof(struct node));
        printf("Enter data: ");
        scanf("%d", &new_node->data);
        new_node->ptr = 0;
        int i = 0;
        while (i < pos)
        {
            temp = temp->ptr;
            i++;
        }
        new_node->ptr = temp->ptr;
        temp->ptr = new_node;
    }
    printf("One node inserted at %d pos\n", pos);
}

void Display(void)
{
    struct node *temp = root;
    if (root == 0)
    {
        printf("The list is empty\n");
        printf("Nothing to print\n");
    }
    else
    {
        printf("The list items are\n");
        while (temp != 0)
        {
            printf("%d--> ", temp->data);
            temp = temp->ptr;
        }
    }
    printf("Done\n");
}

void Delete_from_first(void)
{
    if (root == 0)
    {
        printf("Nothing to delete\n");
        printf("The list is empty\n");
    }
    else
    {
        struct node *temp = root;
        root = temp->ptr;
        free(temp); //releasing the memory, so that the memory block will be deleted
        printf("One node deleted from start\n");
    }
}

void Delete_from_last(void)
{
    if (root == 0)
    {
        printf("The list is empty\n");
    }
    else
    {
        struct node *temp, *prev_node;
        temp = root;
        while (temp->ptr != 0)
        {
            prev_node = temp;
            temp = temp->ptr;
        }
        prev_node->ptr = 0;
        free(temp); //releasing the memory of the last block
        printf("Node deleted from last\n");
    }
}

void Delete_from_pos(void)
{
    int pos, len = 0;
    printf("Enter the position: ");
    scanf("%d", &pos);
    len = Length();
    if (root == 0)
    {
        printf("List is empty\n");
    }
    else if (pos == 1)
    {
        struct node *temp = root;
        root = temp->ptr;
        free(temp);
    }

    else
    {
        if (pos > len)
        {
            printf("Enter valid size \n");
        }
        else
        {

            struct node *temp, *next_ptr;
            temp = root;
            int i = 0;
            while (i < pos)
            {
                next_ptr = temp;
                temp = temp->ptr;
                i++;
            }
            next_ptr->ptr = temp->ptr;
            free(temp);
            printf("One node deleted from %d pos", pos);
        }
    }
}
