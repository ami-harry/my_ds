// implementation of queue using link list
#include <stdio.h>
#include <stdlib.h>

void enqueue();
void dequeue();
void peek();
void display();
int length();
struct node
{
    int data;
    struct node *next;
} *front = 0, *rear = 0;
int main()
{

    int ch, l = 0;
    while (1)
    {
        printf("Queue using array operations\n");
        printf("1.Enqueue\n");
        printf("2.Dequeue\n");
        printf("3.Display\n");
        printf("4.Length\n");
        printf("5.Peek\n");
        printf("6.Exit\n");
        printf("Enter your choice: ");
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
            display();
            break;
        case 4:
            l = length();
            printf("The length of the queue is %d\n", l);
            break;
        case 5:
            peek();
            break;
        case 6:
            exit(0);
            break;
        default:
            printf("Enter valid choice");
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
    }
    else
    {
        // insertion from rear
        rear->next = newnode;
        rear = newnode;
    }
}
void dequeue()
{
    // checking for underflow
    if (front == 0 && rear == 0)
    {
        printf("Queue is empty\n");
    }
    else
    {
        struct node *temp = front;
        int del_ele = temp->data;
        front = front->next;
        printf("The dequeued element is %d\n", del_ele);
        free(temp);
    }
}
void peek()
{
    // checking for underflow
    if (front == 0 && rear == 0)
    {
        printf("Queue is empty\n");
    }
    else
    {
        struct node *temp = front;
        int del_ele = temp->data;
        printf("The peek element is %d\n", del_ele);
    }
}
void display()
{
    // checking for underflow
    if (front == 0 && rear == 0)
    {
        printf("Queue is empty\n");
    }
    else
    {
        struct node *temp = front;
        while (temp!= NULL)
        {
            printf("%d <--> ", temp->data);
            temp = temp->next;
        }
        printf("\n");
    }
}
int length()
{
    // checking for underflow
    if (front == 0 && rear == 0)
    {
        printf("Queue is empty\n");
        return 0;
    }
    else
    {
        int len = 0;
        struct node *temp = front;
        while (temp->next != NULL)
        {
            len++;
            temp = temp->next;
        }
        return len;
    }
}