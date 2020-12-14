// circular link list
// when we do front ++ then that release space will be occupied by rear=(rear+1)%n
// the overflow condition will be (rear+1)%n==front;
// the underflow conditio is same as rear==-1 && front==-1

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
    int data;
    printf("Enter data: ");
    scanf("%d", &data);
    // if queue is empty
    if (rear == -1 && front == -1)
    {
        front = rear = data;
    }
    // checking the condition for overflow
    else if (((rear + 1) % N) == front)
    {
        printf("Queue is full\n");
    }
    else
    {
        // taking space which is release by front++,
        rear = (rear + 1) % N;
        queue[rear] = data;
    }
}
void dequeue()
{
    // underflow condition, if queue is empty
    if (rear == -1 && front == -1)
    {
        printf("Queue is empty\n");
    }
    // if queue is having 1 element then front==rear    , then after deleting that element the queue should be empty
    else if (front == rear)
    {
        int del_ele = queue[front];
        printf("The dequed element is %d\n", del_ele);
        front = rear = -1; //setting the queue to be empty
    }
    else
    {
        int del_ele = queue[front];
        printf("The dequed element is %d\n", del_ele);
        front = (front + 1) % N;
    }
}
void peek()
{
    // underflow condition
    if (rear == -1 && front == -1)
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
    // underflow condition
    if (rear == -1 && front == -1)
    {
        printf("Queue is empty\n");
    }
    else
    {
        int i = front;
        while (i != rear)
        {
            printf("%d <--> ", queue[i]);
            i = (i + 1) % N;
        }
        // printing the last element
        printf("%d\n", rear);
    }
}
int length()
{
    // underflow condition
    if (rear == -1 && front == -1)
    {
        printf("Queue is empty\n");
        return 0;
    }
    else
    {
        int i = front, len = 0;
        while (i != rear)
        {
            len++;
            i = (i + 1) % N;
        }
        // printing the last element
        return len + 1;
    }
}