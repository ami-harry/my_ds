// circular link list all operations

// insertion
// insert_at_start
// insert_at_end
// insert_at_pos
// insert_after_pos
// insert_before_pos

// deletion
// delete_from_start
// delete_from_end
// delete_from_pos
// delete_before_pos
// delete_after_pos

// display
// length
// reverse

#include <stdio.h>
#include <stdlib.h>
// insertion
void insert_at_start(void);
void insert_at_end(void);
void insert_at_pos(void);
void insert_after_pos(void);
void insert_before_pos(void);

// deletion
void delete_from_start(void);
void delete_from_end(void);
void delete_from_pos(void);
void delete_before_pos(void);
void delete_after_pos(void);

void display(void);
int length(void);
void reverse(void);
void val_tal_and_first(void);

struct node
{
    int data;
    struct node *next;
} *tail = 0;
int main()
{
    int ch, l = 0;
    while (1)
    {
        printf("Link list operations\n");
        printf("1. insert at start\n");
        printf("2. insert at end\n");
        printf("3. insert at pos\n");
        printf("4. insert after pos\n");
        printf("5. insert before pos\n");

        printf("6. delete from start\n");
        printf("7. delete from end\n");
        printf("8. delete from pos\n");
        printf("9. delete before pos\n");
        printf("10. delete after pos\n");

        printf("11. Display\n");
        printf("12. Length\n");
        printf("13. Reverse\n");
        printf("14. Exit\n");

        printf("Enter your choice: ");
        scanf("%d", &ch);
        switch (ch)
        {
        case 1:
            insert_at_start();
            printf("\n");
            val_tal_and_first();
            break;

        case 2:
            insert_at_end();
            val_tal_and_first();
            printf("\n");
            break;
        case 3:
            insert_at_pos();
            val_tal_and_first();
            printf("\n");
            break;
        case 4:
            insert_after_pos();
            val_tal_and_first();
            printf("\n");
            break;
        case 5:
            insert_before_pos();
            val_tal_and_first();
            printf("\n");
            break;
        case 6:
            delete_from_start();
            val_tal_and_first();
            printf("\n");
            break;
        case 7:
            delete_from_end();
            val_tal_and_first();
            printf("\n");
            break;
        case 8:
            delete_from_pos();
            val_tal_and_first();
            printf("\n");
            break;
        case 9:
            delete_before_pos();
            val_tal_and_first();
            printf("\n");
            break;
        case 10:
            delete_after_pos();
            val_tal_and_first();
            printf("\n");
            break;
        case 11:
            display();
            val_tal_and_first();
            printf("\n");
            break;
        case 12:
            l = length();
            val_tal_and_first();
            printf("The length of the list is %d\n", l);
            printf("\n");
            break;
        case 13:
            reverse();
            val_tal_and_first();
            break;
        case 14:
            val_tal_and_first();
            exit(0);
            printf("\n");
            break;
        default:
            printf("Enter valid options\n");
            printf("\n");
            break;
        }
    }

    return 0;
}

void insert_at_start(void)
{
    struct node *newnode;
    newnode = (struct node *)malloc(sizeof(struct node));
    printf("Enter data: ");
    scanf("%d", &newnode->data);
    newnode->next = 0;
    if (tail == 0)
    {
        tail = newnode;
        tail->next = newnode;
    }
    else
    {
        newnode->next = tail->next;
        tail->next = newnode;
    }
    printf("Node inserted at start\n");
}

void insert_at_end(void)
{
    struct node *newnode;
    newnode = (struct node *)malloc(sizeof(struct node));
    printf("Enter data: ");
    scanf("%d", &newnode->data);
    newnode->next = 0;
    if (tail == 0)
    {
        tail = newnode;
        tail->next = newnode;
    }
    else
    {
        newnode->next = tail->next;
        tail->next = newnode;
        tail = newnode;
    }
    printf("Node inserted at end\n");
}

void insert_at_pos(void)
{
    int pos, len = length();

    printf("Enter position to insert: ");
    scanf("%d", &pos);
    if (pos < 1 || pos > len)
    {
        printf("Invalid position\n");
    }
    else if (pos == 1)
    {
        insert_at_start();
    }
    else
    {
        struct node *newnode;
        newnode = (struct node *)malloc(sizeof(struct node));
        printf("Enter data: ");
        scanf("%d", &newnode->data);
        newnode->next = 0;

        if (tail == 0)
        {
            tail = newnode;
            tail->next = newnode;
        }
        else
        {
            struct node *temp = tail->next;
            int i = 1;
            while (i < pos - 1)
            {
                temp = temp->next;
                i++;
            }
            newnode->next = temp->next;
            temp->next = newnode;
        }
        printf("Node inserted at %d pos\n", pos);
    }
}

void insert_after_pos(void)
{
    int pos, len = length();

    printf("Enter position to insert: ");
    scanf("%d", &pos);
    if (pos < 0 || pos > len)
    {
        printf("Invalid position\n");
    }
    else if (pos == 0)
    {
        insert_at_start();
    }
    else
    {
        struct node *newnode;
        newnode = (struct node *)malloc(sizeof(struct node));
        printf("Enter data: ");
        scanf("%d", &newnode->data);
        newnode->next = 0;

        if (tail == 0)
        {
            tail = newnode;
            tail->next = newnode;
        }
        else
        {
            struct node *temp = tail->next;
            int i = 1;
            while (i < pos)
            {
                temp = temp->next;
                i++;
            }
            newnode->next = temp->next;
            temp->next = newnode;
        }
        printf("Node inserted after %d", pos);
    }
}

void insert_before_pos(void)
{
    int pos, len = length();

    printf("Enter position to insert: ");
    scanf("%d", &pos);
    if (pos <= 1 || pos > len)
    {
        printf("Invalid position\n");
    }
    else if (pos == 2)
    {
        insert_at_start();
    }
    else
    {
        struct node *newnode;
        newnode = (struct node *)malloc(sizeof(struct node));
        printf("Enter data: ");
        scanf("%d", &newnode->data);
        newnode->next = 0;

        if (tail == 0)
        {
            tail = newnode;
            tail->next = newnode;
        }
        else
        {
            struct node *temp = tail->next;
            int i = 1;
            while (i < pos - 2)
            {
                temp = temp->next;
                i++;
            }
            newnode->next = temp->next;
            temp->next = newnode;
        }
        printf("Node inserted at %d", pos);
    }
}

void delete_from_start(void)
{
    if (tail == 0)
    {
        tail->next = 0;
        free(tail);
    }
    else
    {
        struct node *temp = tail->next;
        tail->next = temp->next;
        free(temp);
    }
    printf("Node deleted from start\n");
}

void delete_from_end(void)
{
    struct node *current, *prev;
    current = tail->next;
    if (tail == 0)
    {
        printf("List is empty\n");
    }
    else
    {
        while (current->next != tail->next)
        {
            prev = current;
            current = current->next;
        }
        prev->next = tail->next;
        tail = prev;
        free(current);
        printf("Node deleted from last\n");
    }
}

void delete_from_pos(void)
{
    int pos, len = length();
    printf("Enter position to delete: ");
    scanf("%d", &pos);
    if (pos < 1 || pos > len)
    {
        printf("Invalid position\n");
    }
    else if (pos == 1)
    {
        delete_from_start();
    }
    else
    {
        int i = 1;
        struct node *current = tail->next, *prev;
        while (i < pos - 1)
        {
            current = current->next;
            i++;
        }
        prev = current->next;
        current->next = prev->next;
        free(prev);
    }
    printf("Node deleted from %d pos\n", pos);
}

void delete_before_pos(void)
{
    int pos, len = length();
    printf("Enter position to delete: ");
    scanf("%d", &pos);
    if (pos <= 1 || pos > len)
    {
        printf("Invalid position\n");
    }
    else if (pos == 2)
    {
        delete_from_start();
    }
    else
    {
        int i = 1;
        struct node *current = tail->next, *prev;
        while (i < pos - 3)
        {
            current = current->next;
            i++;
        }
        prev = current->next;
        current->next = prev->next;
        free(prev);
    }
    printf("Node deleted before %d pos\n", pos);
}

void delete_after_pos(void)
{
    int pos, len = length();
    printf("Enter position to delete: ");
    scanf("%d", &pos);
    if (pos < 0 || pos > len)
    {
        printf("Invalid position\n");
    }
    else if (pos == 0)
    {
        delete_from_start();
    }
    else
    {
        if (pos == len)
        {
            delete_from_end();
        }
        else
        {

            int i = 1;
            struct node *current = tail->next, *prev;
            while (i < pos)
            {
                current = current->next;
                i++;
            }
            prev = current->next;
            current->next = prev->next;
            free(prev);
        }
    }
    printf("Node deleted after %d pos\n", pos);
}

void display(void)
{
    if (tail == 0)
    {
        printf("List is empty\n");
    }
    else
    {

        struct node *temp = tail->next;
        while (temp->next != tail->next)
        {
            printf("%d-->", temp->data);
            temp = temp->next;
        }
        printf("%d\n", temp->data);
    }
}

int length(void)
{
    if (tail == 0)
    {
        printf("List is empty\n");
        return 0;
    }
    else
    {
        struct node *temp = tail->next;
        int i = 1;
        while (temp->next != tail->next)
        {
            i++;
            temp = temp->next;
        }
        return i;
    }
}

void reverse(void)
{

    if (tail == 0)
    {
        printf("the list is empty\n");
    }
    else
    {
        struct node *current, *prev, *nextnode;
        current = tail->next;
        nextnode = current;

        while (current != tail)
        {
            prev = current;
            current = nextnode;
            nextnode = current->next;
            current->next = prev;
        }
        nextnode->next = tail;
        tail = nextnode;
    }
    printf("After reverse \n");
    display();
}

void val_tal_and_first(void)
{
    if (tail == 0)
    {
        // printf("list is empty\n");
    }
    else
    {

        struct node *temp;
        temp = tail->next;
        printf("\nThe value of tail next is %d\n", tail->next->data);
        printf("\nThe value of temp->next is %d\n", temp->data);
    }
}