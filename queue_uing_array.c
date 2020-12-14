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
    // taking input from the user
    int data;
    printf("Enter element to insert: ");
    scanf("%d", &data);

    // checking the condition for overflow
    if (rear == N - 1)
    {
        printf("Overflow\n");
    }

    else if (front == -1 && rear == -1)
    { //queue is empty
        front = rear = 0;
        queue[rear] = data; //inserting the data from rear
    }
    else
    {
        rear++;
        queue[rear] = data;
    }
}

void dequeue()
{
    // checking the condition for underflow
    if (front == -1 && rear == -1)
    {
        printf("Underflow\n");
    }
    else
    {
        printf("The dequeued element is %d\n", queue[front]);
        front++;
       
    }
}

void peek()
{

    // checking the condition for underflow
    if (front == -1 && rear == -1)
    {
        printf("Underflow\n");
    }
    else
    {
        printf("The peek element is %d\n", queue[front]);
    }
}

void display()
{

    // checking the condition for underflow
    if (front == -1 && rear == -1)
    {
        printf("Underflow\n");
    }
    else
    {
        for (int i = front; i <= rear; i++)
        {
            printf("%d <--", queue[i]);
        }
        printf("\n");
    }
}

int length()
{

    // checking the condition for underflow
    if (front == -1 && rear == -1)
    {
        printf("Underflow\n");
        return 0;
    }
    else
    {
        int len = 0;
        for (int i = front; i <= rear; i++)
        {
            len++;
        }
        return len;
    }
}