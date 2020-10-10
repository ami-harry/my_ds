// test till 2.6
// void Insert_At_Start(void);
// void Insert_At_End(void);
// void Insert_At_pos(void);
// void Delete_From_start(void);
// void Delete_From_End(void);
// void Delete_From_Pos(void);
// void Display(void);
// int Length(void);

#include <stdio.h>
#include <stdlib.h>
int Length(void);
void Insert_At_Start(void);
void Insert_At_End(void);
void Insert_At_pos(void);
void Delete_From_start(void);
void Delete_From_End(void);
void Delete_From_Pos(void);
void Display(void);

// creating the node
struct node
{
    int data;
    struct node *ptr;
};

struct node *root = 0;
int main()
{
    int ch = 0, l = 0;
    while (1)
    {

        printf("\t\t\t\tSingly Link List operations\n\n");
        printf("1. Insert_At_Start\n");
        printf("2. Insert_At_End\n");
        printf("3. Insert_At_pos\n");
        printf("4. Delete_From_start\n");
        printf("5. Delete_From_End\n");
        printf("6. Delete_From_Pos\n");
        printf("7. Display\n");
        printf("8. Length\n");
        printf("9. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &ch);
        switch (ch)
        {
        case 1:
            Insert_At_Start();
            break;

        case 2:
            Insert_At_End();
            break;
        case 3:
            Insert_At_pos();
            break;
        case 4:
            Delete_From_start();
            break;
        case 5:
            Delete_From_End();
            break;
        case 6:
            Delete_From_Pos();
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
            printf("Enter valid option\n");
            break;
        }
    }

    return 0;
}

int Length(void)
{
    if (root == 0)
    {
        printf("The list is empty\n");
        return 0;
    }
    else
    {
        struct node *temp = root;
        int count = 1;
        while (temp->ptr != 0)
        {
            count++;
            temp = temp->ptr;
        }
        return count;
    }
}
void Insert_At_Start(void)
{
    struct node *new_data;
    new_data = (struct node *)malloc(sizeof(struct node));
    printf("Enter data: ");
    scanf("%d", &new_data->data);
    new_data->ptr = 0;
    if (root == 0)
    {
        root = new_data;
    }
    else
    {
        new_data->ptr = root;
        root = new_data;
    }
    printf("One node inserted in the list at start\n\n");
}

void Insert_At_End(void)
{
    struct node *new_data;
    new_data = (struct node *)malloc(sizeof(struct node));
    printf("Enter data: ");
    scanf("%d", &new_data->data);
    new_data->ptr = 0;
    if (root == 0)
    {
        root = new_data;
    }
    else
    {
        struct node *temp = root;
        while (temp->ptr != 0)
        {
            temp = temp->ptr;
        }
        temp->ptr = new_data;
    }
    printf("One node inserted at end of the list\n");
}

void Insert_At_pos(void)
{
    int pos = 0, len = 0;
    printf("Enter position: ");
    scanf("%d", &pos);
    len = Length();
    if (pos > len)
    {
        printf("Invalid position\n");
        printf("Curently list having %d nodes\n", len);
    }
    else
    {
        struct node *new_data;
        new_data = (struct node *)malloc(sizeof(struct node));
        printf("Enter data: ");
        scanf("%d", &new_data->data);
        new_data->ptr = 0;
        if (root == 0)
        {
            root = new_data;
        }
        else if (pos == 0)
        {
            new_data->ptr = root;
            root = new_data;
        }
        else
        {
            int i = 0;
            struct node *temp = root;
            while (i < pos - 1)
            {
                temp = temp->ptr;
                i++;
            }
            new_data->ptr = temp->ptr;
            temp->ptr = new_data;
        }
        printf("1 node inserted at %d pos\n", pos);
    }
}

void Delete_From_start(void)
{
    if (root == 0)
    {
        printf("List is empty\n");
    }
    else
    {
        struct node *temp = root;
        root = temp->ptr;
        free(temp);
        printf("One node deleted from start\n");
    }
}
void Delete_From_End(void)
{
    if (root == 0)
    {
        printf("List is empty\n");
    }
    else
    {
        struct node *prev_ptr, *temp = root;
        while (temp->ptr != 0)
        {
            prev_ptr = temp;
            temp = temp->ptr;
        }
        prev_ptr->ptr = 0;
        free(temp);
        printf("Node deleted from last\n");
    }
}
void Delete_From_Pos(void)
{
    int pos = 0, len = 0;
    printf("Enter the position: ");
    scanf("%d", &pos);
    len = Length();
    if (pos > len)
    {
        printf("Invalid position\n");
        printf("currently the list having %d nodes\n", len);
    }
    else if (pos == 0)
    {
        struct node *temp = root;
        root = temp->ptr;
        free(temp);
    }
    else
    {
        if (root == 0)
        {
            printf("The list is empty\n");
        }
        else
        {
            struct node *temp = root, *next_node;
            int i = 0;
            while (i < pos)
            {
                i++;
                next_node = temp;
                temp = temp->ptr;
            }
            next_node->ptr = temp->ptr;
            free(temp);
            printf("Node deleted from position %d\n", pos);
        }
    }
}
void Display(void)
{
    if (root == 0)
    {
        printf("List is empty\n");
    }
    else
    {
        struct node *temp = root;
        while (temp != 0)
        {
            printf("%d--> ", temp->data);
            temp = temp->ptr;
        }
        printf("\n");
    }
}