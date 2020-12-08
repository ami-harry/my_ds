// dynamic queue test
#include <stdio.h>
#include <stdlib.h>
void enqueue();
void dequeue();
void peek();
int length();
void display();
struct node
{
    int data;
    struct node *next;
} *front = 0, *rear = 0;

int main()
{
    int ch, len = 0;
    while (1)
    {
        printf("\n\t\t\t\t\tDynamic queue implementation\n");
        printf("1. enqueue\n");
        printf("2. dequeue\n");
        printf("3. peek\n");
        printf("4. length\n");
        printf("5. display\n");
        printf("6. exit\n");
        printf("Enter your choice\n");
        scanf("%d", &ch);
        switch (ch)
        {
        case 1:
            enqueue();
            break;
        case 2:
            dequeue();
            break;
        case 3:
            peek();
            break;
        case 4:
            len = length();
            printf("The length of the queue is %d\n", len);
            break;
        case 5:
            display();
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

void enqueue()
{
    struct node *newnode;
    newnode = (struct node *)malloc(sizeof(struct node));
    printf("Enter data: ");
    scanf("%d", &newnode->data);
    newnode->next = 0;
    if (front == 0 && rear == 0)
    {
        front = rear = newnode;
        printf("Node inserted\n");
    }
    else
    {
        rear->next = newnode;
        rear = newnode;
        printf("Node inserted\n");
    }
}

void dequeue()
{
    if (front == 0 && rear == 0)
    {

        printf("queue is empty\n");
    }
    else
    {
        struct node *temp = front;
        int data = front->data;
        front = temp->next;
        free(temp);
        printf("element deleted\n");
        printf("The deleted element was %d\n", data);
    }
}

void peek()
{
    if (front == 0 && rear == 0)
    {

        printf("queue is empty\n");
    }
    else
    {
        printf("The peek element is %d\n", front->data);
    }
}

int length()
{
    if (front == 0 && rear == 0)
    {
        printf("queue is empty\n");
        return 0;
    }
    else
    {
        int j = 1;
        struct node *temp = front;
        while (temp->next != 0)
        {
            j++;
            temp = temp->next;
        }
        return j;
    }
}

void display()
{
    if (front == 0 && rear == 0)
    {

        printf("queue is empty\n");
    }
    else
    {
        struct node *temp = front;
        while (temp != 0)
        {
            printf("%d <-> ", temp->data);
            temp = temp->next;
        }
    }
}