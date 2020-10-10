// link list operations

// a.void insert_at_begin(void)
// b.void insert_at_last(void)
// c.void insert_after_pos(void)
// d.void delete_from_begin(void)
// e.void delete_from_last(void)
// f.void delete_from_pos(void)
// g.int length(void)
// h.void display(void)
// i.void reverse(void)
// j.exit()

#include <stdio.h>
#include <stdlib.h>
void insert_at_begin(void);
void insert_at_last(void);
void insert_after_pos(void);
void delete_from_begin(void);
void delete_from_last(void);
void delete_from_pos(void);
void display(void);
void reverse(void);
int length(void);

struct node
{
    int data;
    struct node *next;
};

struct node *root = 0;
int main()
{
    int ch = 0, l = 0;
    while (1)
    {
        printf("\t\t\t\tSingly link list all operations\n");
        printf(" 1. insert_at_begin\n");
        printf(" 2. insert_at_last\n");
        printf(" 3. insert_after_pos\n");
        printf(" 4. delete_from_begin\n");
        printf(" 5. delete_from_last\n");
        printf(" 6. delete_from_pos\n");
        printf(" 7. display\n");
        printf(" 8. reverse\n");
        printf(" 9. length\n");
        printf(" 10. exit\n");
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
            delete_from_begin();
            break;
        case 5:
            delete_from_last();
            break;
        case 6:
            delete_from_pos();
            break;
        case 7:
            display();
            break;
        case 8:
            reverse();
            break;
        case 9:
            l = length();
            printf("The length of the list is %d\n", l);
            break;
        case 10:
            exit(0);
            break;
        default:
            break;
        }
    }

    return 0;
}

int length(void)
{
    if (root == 0)
    {
        printf("The list is empty\n");
        return 0;
    }
    else
    {
        int count = 1;
        struct node *temp = root;
        while (temp->next != 0)
        {
            count++;
            temp = temp->next;
        }
        return count;
    }
}

void display(void)
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
            printf("%d--->", temp->data);
            temp = temp->next;
        }
        printf("\n");
    }
}

void reverse(void)
{
    if (root == 0)
    {
        printf("The list is empty\nNothing to reverse\n");
    }
    else
    {
        struct node *prev_node, *current_node, *next_node;
        prev_node = 0;
        next_node = current_node = root;
        while (next_node != 0)
        {
            next_node = next_node->next;
            current_node->next = prev_node;
            prev_node = current_node;
            current_node = next_node;
        }
        root = prev_node;
        printf("The list is rersed\n Use display() to see the reversed list\n");
    }
}

void insert_at_begin(void)
{
    struct node *new_data;
    new_data = (struct node *)malloc(sizeof(struct node));
    printf("Enter data: ");
    scanf("%d", &new_data->data);
    new_data->next = 0;
    if (root == 0)
    {
        root = new_data;
    }
    else
    {
        new_data->next = root;
        root = new_data;
    }
    printf("one node inserted at begin\n");
}

void insert_at_last(void)
{
    struct node *new_data;
    new_data = (struct node *)malloc(sizeof(struct node));
    printf("Enter data: ");
    scanf("%d", &new_data->data);
    new_data->next = 0;
    if (root == 0)
    {
        root = new_data;
    }
    else
    {
        struct node *temp = root;
        while (temp->next != 0)
        {
            temp = temp->next;
        }
        temp->next = new_data;
    }
    printf("Node inserted at last\n");
}

void insert_after_pos(void)
{
    struct node *new_data;
    int pos = 0, len = 0;
    len = length();
    printf("Enter position  to insert after: ");
    scanf("%d", &pos);
    if (pos > len)
    {
        printf("Invalid position\nCurrently the list has %d nodes\n", len);
    }

    else
    {
        new_data = (struct node *)malloc(sizeof(struct node));
        printf("Enter data: ");
        scanf("%d", &new_data->data);
        new_data->next = 0;

        if (root == 0)
        {
            root = new_data;
        }
        else if (pos == 0)
        {
            new_data->next = root;
            root = new_data;
        }
        else
        {
            struct node *temp = root;
            int i = 0;
            while (i < pos - 1)
            {
                temp = temp->next;
                i++;
            }
            new_data->next = temp->next;
            temp->next = new_data;
        }
    }
    printf("Node inserted at %d pos\n", pos);
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
        root = temp->next;
        free(temp);
    }
    printf("Node deleted from start\n");
}

void delete_from_last(void)
{
    if (root == 0)
    {
        printf("List is empty\n");
    }
    else
    {
        struct node *prev_node, *temp = root;
        while (temp->next != 0)
        {
            prev_node = temp;
            temp = temp->next;
        }
        // prev_node->next = temp->next;
        prev_node->next = 0;
        free(temp);
    }
    printf("node deleted from last\n");
}

void delete_from_pos(void)
{
    struct node *temp = root;
    int pos = 0, len = 0;
    len = length();
    printf("Enter position: ");
    scanf("%d", &pos);
    if (pos > len)
    {
        printf("invalid position\nCurrently list having %d nodes\n", len);
    }
    else if (pos == 0)
    {
        root = temp->next;
        free(temp);
    }
    else

    {
        if (root == 0)
        {
            printf("the list is empty\n");
        }
        else
        {
            struct node *prev_ptr;
            int i = 0;
            while (i < pos)
            {
                i++;
                prev_ptr = temp;
                temp = temp->next;
            }
            prev_ptr->next = temp->next;
            free(temp);
        }
    }
    printf("Node deleted from %d pos\n", pos);
}