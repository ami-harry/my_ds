// singly circular link list

// creating singly circular link list without maintaing head ptr;

#include <stdio.h>
#include <stdlib.h>
void append_without_head(void);
void show_using_while(void);
void show_using_do_while(void);
int length_using_while(void);
int length_using_do_while(void);

struct node
{
    int data;
    struct node *next;
};
struct node *tail;

int main()
{
    int ch, l = 0, m = 0;
    while (1)
    {
        printf("\t\t\t\tLink list operations \n");
        printf("1.append_without_head\n");
        printf("2.show_using_while\n");
        printf("3.show_using_do_while\n");
        printf("4.length_using_while\n");
        printf("5.length_using_do_while\n");
        printf("6.exit\n");
        printf("Enter your choice: ");
        scanf("%d", &ch);
        switch (ch)
        {
        case 1:
            append_without_head();
            break;
        case 2:
            show_using_while();
            break;
        case 3:
            show_using_do_while();
            break;
        case 4:
            l = length_using_while();
            printf("The length of the list is %d\n", l);
            break;
        case 5:
            m = length_using_do_while();
            printf("The length of the list is %d\n", m);
            break;
        default:
            break;
        }
    }

    return 0;
}

//creating the circular link list without maintaing head ptr;
void append_without_head(void)
{
    struct node *new;
    new = (struct node *)malloc(sizeof(struct node));
    printf("Enter data: ");
    scanf("%d", &new->data);
    new->next = 0;

    if (tail == 0)
    {
        tail = new;
        tail->next = new;
    }
    else
    {
        new->next = tail->next;
        tail->next = new;
        tail = new;
    }
}

//displaying the nodes
void show_using_while(void)
{
    if (tail == 0)
    {
        printf("The list is empty\n");
    }
    else
    {
        struct node *temp = tail->next; //means the address of the first node
        while (temp->next != tail->next)
        {
            printf("%d-->", temp->data);
            temp = temp->next;
        }
        printf("%d\n", temp->data);
    }
}

void show_using_do_while(void)
{
    if (tail == 0)
    {
        printf("The list is empty\n");
    }
    else
    {
        struct node *temp = tail->next; //means the address of the first node
        do
        {
            printf("%d-->", temp->data);
            temp = temp->next;
        } while (temp->next != tail->next);
        printf("%d", temp->data);
    }
    printf("\n");
}

int length_using_while(void)
{
    if (tail == 0)
    {
        printf("List is empty\n");
        return 0;
    }
    else
    {
        int i = 1;
        struct node *temp = tail->next;
        while (temp->next != tail->next)
        {
            i++;
            temp = temp->next;
        }
        return i;
    }
}

int length_using_do_while(void)
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
        do
        {
            i++;
            temp = temp->next;
        } while (temp->next != tail->next);
        return i;
    }
}
