#include <stdio.h>
#include <stdlib.h>
// creating the node
struct node
{
    int data;
    struct node *next;
} *front = 0, *rear = 0;

// functions
void enqueue();
void dequeue();
void peek();
void display();
int length();
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
        default:
            printf("Enter valid choice");
            break;
        }
    }

    return 0;
}

void enqueue()
{
    int data;
    struct node *newnode;
    newnode = (struct node *)malloc(sizeof(struct node));
    printf("Enter data: ");
    scanf("%d", &data);
    newnode->data = data;
    newnode->next = 0;

    // checking the condition for underflow
    if (front == 0 && rear == 0)
    {
        front = rear = newnode;
    }
    else
    {
        //insertion from rear
        rear->next = newnode;
        rear = newnode;
    }
    printf("\n Element inserted in queue\n");
}
void dequeue()
{
    struct node *temp = front;
    // checing for underflow
    if (front == 0 && rear == 0)
    {
        printf("List is empty\n");
    }
    else
    {
        printf("The dequeued element is %d\n", front->data);
        // front = front->next;
        front = temp->next;
        free(temp);
    }
}
void peek()
{
    struct node *temp = front;
    // checing for underflow
    if (front == 0 && rear == 0)
    {
        printf("List is empty\n");
    }
    else
    {
        printf("The peek element is %d\n", front->data);
    }
}
void display()
{
    // checing for underflow
    if (front == 0 && rear == 0)
    {
        printf("List is empty\n");
    }
    else
    {
        struct node *temp = front;
        while (temp != 0)
        {
            printf("%d <-- ", temp->data);
            temp = temp->next;
        }
    }
    printf("\n");
}
int length()
{
    // checing for underflow
    if (front == 0 && rear == 0)
    {
        printf("List is empty\n");
        return 0;
    }
    else
    {

        struct node *temp = front;
        int len = 0;
        while (temp != 0)
        {
            len++;
            temp = temp->next;
        }
        return len;
    }
    printf("\n");
}