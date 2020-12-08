// static queue

#include <stdio.h>
#include <stdlib.h>
#define SIZE 5
int queue[SIZE];
int rear = -1, front = -1;

void enqueue();
void dequeue();
void display();
int length();
void peek();
int main()
{
    
    int ch, l = 0;
    while (1)
    {
        printf("\t\t\tStatic queue implementaiton\n");
        printf("1. Enqueue\n");
        printf("2. Dequeue\n");
        printf("3. Display\n");
        printf("4. Length\n");
        printf("5. peek\n");
        printf("6. exit\n");
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
            printf("Enter valid options\n");
            break;
        }
    }

    return 0;
}

void enqueue()
{
    int data;
    printf("Enter data: ");
    scanf("%d", &data);

    if (rear == SIZE - 1)
    {
        printf("Queue is full\n");
    }

    else if (front == -1 && rear == -1)
    {
        front = rear = 0;
        queue[rear] = data;
    }

    else
    {
        rear++;
        queue[rear] = data;
    }
}

void dequeue()
{
    if (front == -1 && rear == -1)
    {
        printf("Queue is empty\n");
    }
    else
    {
        printf("the dequeued element is %d\n", queue[front]);
        front++;
    }
}

void display()
{
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
    if (front == -1 && rear == -1)
    {
        printf("Queue is empty\n");
        return 0;
    }

    else
    {

        int j = 1;
        for (int i = 0; i < front + 1; i++)
        {
            j++;
        }

        return j;
    }
}

void peek()
{
    if (front == -1 && rear == -1)
    {
        printf("Queue is empty\n");
    }
    else
    {
        printf("The peek element is %d\n", queue[front]);
    }
}