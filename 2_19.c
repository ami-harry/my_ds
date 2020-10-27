
// doubly link list

#include <stdio.h>
#include <stdlib.h>
void append(void);
void show(void);
void show_using_while(void);
void show_using_do_while(void);
int length(void);

struct node
{
    int data;
    struct node *prev;
    struct node *next;
};
struct node *head = 0, *tail = 0;
int main()
{
    int ch, l = 0;
    while (1)
    {

        printf("Circular link list operations\n");
        printf("1. Append\n");
        printf("2. Show\n");
        printf("3. show_using_while\n");
        printf("4. show_using_do_while\n");
        printf("5. Length\n");
        printf("6. exit\n");
        printf("Enter your choice: ");
        scanf("%d", &ch);
        switch (ch)
        {
        case 1:
            append();
            break;
        case 2:
            show();
            break;
        case 3:
            show_using_while();
            break;
        case 4:
            show_using_do_while();
            break;
        case 5:
            l = length();
            printf("The length of the list is %d\n", l);
            break;
        case 6:
            exit(0);
            break;

        default:
            printf("Enter valid options\n");
            break;
        }
    }
    return 0;
}

void append(void)
{
    struct node *newnode;
    newnode = (struct node *)malloc(sizeof(struct node));
    printf("Enter data: ");
    scanf("%d", &newnode->data);
    newnode->next = 0;
    newnode->prev = 0;
    if (head == 0)
    {
        head = tail = newnode;
        head->next = 0;
        head->prev = 0;
    }
    else
    {
        tail->next = newnode;
        newnode->prev = tail;
        newnode->next = head;
        head->prev = newnode;
        tail = newnode;
    }
    printf("Node inserted\n");
}
void show(void)
{
    if (head == 0)
    {
        printf("List is empty\n");
    }
    else
    {
        struct node *temp = head;
        while (temp != tail)
        {
            printf("%d-->", temp->data);
            temp = temp->next;
        }
        printf("%d", temp->data);
    }
    printf("\n");
}
void show_using_while(void)
{
    if (head == 0)
    {
        printf("The list is empty\n");
    }
    else
    {
        struct node *temp = head;
        while (temp != tail)
        {
            printf("%d-->", temp->data);
            temp = temp->next;
        }
        printf("%d\n", temp->data);
    }
    printf("\n");
}

void show_using_do_while(void)
{
    if (head == 0)
    {
        printf("The list is empty\n");
    }
    else
    {
        struct node *temp = head;
        do
        {
            printf("%d-->", temp->data);
            temp = temp->next;
        } while (temp->next != tail->next);
        printf("%d", temp->data);
    }
    printf("\n");
}
int length(void)
{
    if (head == 0)
    {
        printf("List is empty\n");
        return 0;
    }
    else
    {
        struct node *temp = head;
        int i = 1;
        while (temp->next != tail->next)
        {
            temp = temp->next;
            i++;
        }
        return i;
    }
}