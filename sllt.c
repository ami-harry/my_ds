// singly link list all operations test

// insertion
// void insert_at_begin(void);
// void insert_at_last(void);
// void insert_after_pos(void);
// void insert_before_pos(void);
// void insert_at_pos(void);

// deletion
// void delete_from_begin(void);
// void delete_from_last(void);
// void delete_from_pos(void);
// void delete_after_pos(void);
// void delete_before_pos(void);

// int length(void);
// void traverse(void);
// void reverse(void);

#include <stdio.h>
#include <stdlib.h>

void insert_at_begin(void);
void insert_at_last(void);
void insert_after_pos(void);
void insert_before_pos(void);
void insert_at_pos(void);
void delete_from_begin(void);
void delete_from_last(void);
void delete_from_pos(void);
void delete_after_pos(void);
void delete_before_pos(void);
int length(void);
void traverse(void);
void reverse(void);

// creating the node
struct node
{
    int data;
    struct node *next;
};

struct node *root = NULL;

int main()
{
    int ch, len;
    while (1)
    {
        printf("\t\t\t\tSingly link list all operations test\n");
        printf("1. insert_at_begin\n");
        printf("2. insert_at_last\n");
        printf("3. insert_after_pos\n");
        printf("4. insert_before_pos\n");
        printf("5. insert_at_pos\n");
        printf("6. delete_from_begin\n");
        printf("7. delete_from_last\n");
        printf("8. delete_from_pos\n");
        printf("9. delete_after_pos\n");
        printf("10. delete_before_pos\n");
        printf("11. length\n");
        printf("12. traverse\n");
        printf("13. reverse\n");
        printf("14. exit\n");
        printf("Enter your choice: ");
        scanf("%d", &ch);
        switch (ch)
        {
        case 1:
            insert_at_begin();
            break;

        case 2:
            insert_at_last();
            break;
        case 3:
            insert_after_pos();
            break;
        case 4:
            insert_before_pos();
            break;
        case 5:
            insert_at_pos();
            break;
        case 6:
            delete_from_begin();
            break;
        case 7:
            delete_from_last();
            break;
        case 8:
            delete_from_pos();
            break;
        case 9:
            delete_after_pos();
            break;
        case 10:
            delete_before_pos();
            break;
        case 11:
            len = length();
            printf("The length of the list is %d\n", len);
            break;
        case 12:
            traverse();
            break;
        case 13:
            reverse();
            break;
        case 14:
            exit(0);
            break;
        default:
            printf("Enter valid option\n");
            break;
        }
    }

    return 0;
}

void insert_at_begin(void)
{
    struct node *newdata;
    newdata = (struct node *)malloc(sizeof(struct node));
    printf("Enter data: ");
    scanf("%d", &newdata->data);
    newdata->next = 0;
    if (root == 0)
    {
        root = newdata;
    }
    else
    {
        newdata->next = root;
        root = newdata;
    }
    printf("Node inserted at start\n");
}

void insert_at_last(void)
{
    struct node *newdata;
    newdata = (struct node *)malloc(sizeof(struct node));
    printf("Enter data: ");
    scanf("%d", &newdata->data);
    newdata->next = 0;
    if (root == 0)
    {
        root = newdata;
    }
    else
    {
        struct node *temp = root;
        while (temp->next != 0)
        {
            temp = temp->next;
        }
        temp->next = newdata;
    }
    printf("Node inserted at last\n");
}

void insert_after_pos(void)
{
    int len = length(), pos = 0;
    printf("Enter position to insert after: ");
    scanf("%d", &pos);
    if (pos > len || pos < 0)
    {
        printf("Invalid position\n");
    }
    else if (pos == len)
    {
        insert_at_last();
    }
    else
    {
        if (pos == 0)
        {
            insert_at_begin();
        }
        else
        {
            struct node *newdata;
            newdata = (struct node *)malloc(sizeof(struct node));
            printf("Enter data: ");
            scanf("%d", &newdata->data);
            newdata->next = 0;
            int i = 0;
            struct node *temp = root;
            while (i < pos)
            {
                temp = temp->next;
                i++;
            }
            newdata->next = temp->next;
            temp->next = newdata;
        }
    }
    printf("Node insrted at %d pos\n", pos);
}

void insert_before_pos(void)
{
    int len = length(), pos = 0;

    printf("Enter position to insert before: ");
    scanf("%d", &pos);
    if (pos > len || pos <= 1)
    {
        printf("Invalid position\n");
    }
    else
    {
        if (pos == 2)
        {
            insert_at_begin();
        }
        else
        {

            struct node *newdata;
            newdata = (struct node *)malloc(sizeof(struct node));
            printf("Enter data: ");
            scanf("%d", &newdata->data);
            newdata->next = 0;
            int i = 0;
            struct node *temp = root;
            while (i <= pos)
            {
                temp = temp->next;
                i++;
            }
            newdata->next = temp->next;
            temp->next = newdata;
        }
    }
    printf("Node insrted at %d pos\n", pos - 1);
}

void insert_at_pos(void)
{
    int len = length(), pos = 0;

    printf("Enter position to insert at: ");
    scanf("%d", &pos);
    if (pos > len || pos <= 0)
    {
        printf("Invalid position\n");
    }
    else if (pos == len)
    {
        insert_at_last();
    }
    else
    {
        if (pos == 1)
        {
            insert_at_begin();
        }
        else
        {
            struct node *newdata;
            newdata = (struct node *)malloc(sizeof(struct node));
            printf("Enter data: ");
            scanf("%d", &newdata->data);
            newdata->next = 0;
            int i = 0;
            struct node *temp = root;
            while (i < pos)
            {
                temp = temp->next;
                i++;
            }
            newdata->next = temp->next;
            temp->next = newdata;
        }
    }
    printf("node inserted at %d pos\n", pos);
}

void delete_from_begin(void)
{
    if (root == 0)
    {
        printf("list is empty\n");
    }
    else
    {
        struct node *temp = root;
        root = root->next;
        free(temp);
        printf("Node deleted from start\n");
    }
}

void delete_from_last(void)
{
    if (root == 0)
    {
        printf("list is empty\n");
    }
    else
    {
        struct node *temp = root, *before;
        while (temp->next != 0)
        {
            before = temp;
            temp = temp->next;
        }
        before->next = 0;
        free(temp);
        printf("Node deleted from last\n");
    }
}

void delete_from_pos(void)
{
    int pos = 0, len = length();
    printf("Enter position to delete from: ");
    scanf("%d", &pos);
    if (pos > len || pos < 0)
    {
        printf("invalid position");
    }
    else if (pos == len)
    {
        delete_from_last();
    }
    else if (pos == 1)
    {
        delete_from_begin();
    }

    else
    {
        if (root == 0)
        {
            printf("List is empty\n");
        }
        else
        {
            struct node *temp = root, *before;
            int i = 0;
            while (i < pos)
            {
                i++;
                before = temp;
                temp = temp->next;
            }
            before->next = temp->next;
            free(temp);
        }
    }
    printf("node deleted from %d pos\n", pos);
}

void delete_after_pos(void)
{
}

void delete_before_pos(void)
{
}

int length(void)
{
    if (root == 0)
    {
        return 0;
    }
    else
    {
        struct node *temp = root;
        int i = 0;
        while (temp != 0)
        {
            i++;
            temp = temp->next;
        }
        return i;
    }
}

void traverse(void)
{
    if (root == 0)
    {
        printf("The list is empty\n");
    }
    else
    {
        struct node *temp = root;
        while (temp != 0)
        {
            printf("%d --> ", temp->data);
            temp = temp->next;
        }
        printf("\n");
    }
}

void reverse(void)
{
}