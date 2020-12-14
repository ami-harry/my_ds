// queue using array test

#include <stdio.h>
#define N 5
int queue[N], front = -1, rear = -1;
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
    int value;
    printf("Enter data: ");
    scanf("%d", &value);
    // checing for overflow
    if (rear == N - 1)
    {
        printf("Queue is full\n");
    }
    else if (front == -1 && rear == -1)
    {
        front = rear = 0;
        queue[rear] = value; //insertion from rear
    }
    else
    {
        rear++;
        queue[rear] = value;
    }
}
void dequeue()
{
    // checking for underflow
    if (front == -1 && rear == -1)
    {
        printf("Queue is empty\n");
    }
    else
    {
        int del_element = queue[front];
        front++;
        printf("Front element deleted\n");
        printf("The dequeued element was %d\n", del_element);
    }
}
void peek()
{
    // checking for underflow
    if (front == -1 && rear == -1)
    {
        printf("Queue is empty\n");
    }
    else
    {
        printf("The peek element is %d\n", queue[front]);
    }
}
void display()
{
    // checking for underflow
    if (front == -1 && rear == -1)
    {
        printf("Queue is empty\n");
    }
    else
    {
        for (int i = front; i <= rear; i++)
        {
            printf("%d <--> ", queue[i]);
        }
        printf("\n");
    }
}
int length()
{
    // checking for underflow
    if (front == -1 && rear == -1)
    {
        printf("Queue is empty\n");
        return 0;
    }
    else
    {
        int l = 0;
        for (int i = front; i <= rear; i++)
        {
            l++;
        }
        return l;
    }
}