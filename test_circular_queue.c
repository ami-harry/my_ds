// circular queue test

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
    // checking condition when the queue is empty
    if (front == -1 && rear == -1)
    {
        front = rear = data;
    }
    // checking the condition when queue is full
    else if (front == rear)
    {
        printf("Queue is full\n");
    }
    //
    else
    {
        
    }
    
}
void dequeue()
{
}
void peek()
{
}
void display()
{
}
int length()
{
}