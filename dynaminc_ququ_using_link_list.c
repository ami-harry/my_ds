// queue using link list
// void enqueue()
// void dequeue()
// void display()
// void peek()
// int length()

#include <stdio.h>
#include <stdlib.h>
struct node
{
    int data;
    struct node *next;
};

struct node *front = 0, *rear = 0;
void enqueue();
void dequeue();
void display();
void peek();
int length();

int main()
{

    int ch, l = 0;
    while (1)
    {
        printf("\t\t\tdynamic queue implementaiton\n");
        printf("1. Enqueue\n");
        printf("2. Dequeue\n");
        printf("3. Display\n");
        printf("4. length\n");
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
    struct node *newdata;
    newdata = (struct node *)malloc(sizeof(struct node));
    printf("Enter data: ");
    scanf("%d", &newdata->data);
    newdata->next = 0;
    if (front == 0 && rear == 0) //means list is empty
    {
        front = rear = newdata;
    }
    else
    {
        rear->next = newdata;
        rear = newdata;
        printf("One element enqueued in the queue\n");
    }
}

void dequeue()
{
    if (front == 0 && rear == 0) //means list is empty
    {
        printf("queue is empty\n");
    }
    else
    {
        struct node *temp = front;
        int data = front->data; //storing the dequeued element
        front = temp->next;
        free(temp);
        printf("One element dequeued from the queue\n");
        printf("The dequeued element is %d\n", data);
    }
}

void display()
{
    if (front == 0 && rear == 0) //means list is empty
    {
        printf("queue is empty\n");
    }
    else
    {
        struct node *temp = front;
        while (temp != 0)
        {
            printf("%d <--> ", temp->data);
            temp = temp->next;
        }
        printf("\n");
    }
}

void peek()
{
    if (front == 0 && rear == 0) //means list is empty
    {
        printf("queue is empty\n");
    }
    else
    {
        printf("the peek element is %d\n", front->data);
    }
}

int length()
{
    if (front == 0 && rear == 0) //means list is empty
    {
        printf("queue is empty\n");
        return 0;
    }

    else
    {
        struct node *temp = front;
        int j = 1;
        while (temp->next != 0)
        {
            j++;
            temp = temp->next;
        }
        return j;
    }
}