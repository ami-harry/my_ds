// static queue test
// mam se ask krna hai

#include <stdio.h>
#include <stdlib.h>
#define SIZE 10
int queue[SIZE];
int front = -1, rear = -1;

void enqueue();
void dequeue();
void peek();
void display();
int length();

int main()
{
    int ch, l;
    while (1)
    {
        printf("\n\t\t\t\tStatic queue implementation\n");
        printf("1. Enqueue\n");
        printf("2. Dequeue\n");
        printf("3. peek\n");
        printf("4. display\n");
        printf("5. length\n");
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
            peek();
            break;
        case 4:
            display();
            break;
        case 5:
            l = length();
            printf("The length is %d\n", l);
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
        printf("Queue Overflow \n");
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
        printf("Underflow\n");
    }
    else
    {
        int data = queue[front];
        front--;
        printf("One element deleted\nThe deleted elemet is %d\n", data);
    }
}

void peek()
{

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

    if (front == -1 && rear == -1)
    {
        printf("Underflow\n");
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
        printf("Underflow\n");
        return 0;
    }

    else
    {
        int j = 1;
        for (int i = front; i <= rear; i++)
        {
            j++;
        }
        return j;
    }
}