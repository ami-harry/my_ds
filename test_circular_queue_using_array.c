// circular queue using array

#include <stdio.h>
#include <stdlib.h>
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
    int num;
    printf("Enter number: ");
    scanf("%d", &num);

    // checking the condition for insetion in circular queue
    if (front == -1 && rear == -1)
    {
        front = rear = 0;
        queue[rear] = num;
    }
    // if queue is full
    else if ((rear + 1) % N == front)
    {
        printf("Queue is full\n");
    }
    // otherwise queue is having some element
    else
    {
        rear = (rear + 1) % N;
        queue[rear] = num;
    }
}

void dequeue()
{
    // checking if the queue is empty
    if (front == 1 && rear == -1)
    {
        printf("The queue is empty\n");
    }
    // if queue is having only one element
    else if (front == rear)
    {
        front = rear = -1;
    }
    else
    {
        front = (front + 1) % N;
    }
}

void display()
{
    // checking if the queue is empty
    if (front == 1 && rear == -1)
    {
        printf("The queue is empty\n");
    }
    else
    {
        int i = front;
        while (i != rear)
        {
            printf("%d <--> ", queue[i]);
            i = (i + 1) % N;
        }
        printf("%d\n", queue[rear]);
    }
    printf("\n");
}

int length()
{
    // checking if the queue is empty
    if (front == 1 && rear == -1)
    {
        printf("The queue is empty\n");
        return 0;
    }
    else
    {
        int i = front;
        while (i != rear)
        {
            i++;
        }
        return i + 1;
    }
}

void peek()
{
    // checking if the queue is empty
    if (front == 1 && rear == -1)
    {
        printf("The queue is empty\n");
    }
    else
    {
        printf("The peek element is %d\n", queue[front]);
    }
}