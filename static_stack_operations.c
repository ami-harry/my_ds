//static stack operations

// void push(void);
// void pop(void);
// int length(void);
// int isEmpty(void);
// int isFull(void);
// void display(void);
// void peek(void);

#include <stdio.h>
#include <stdlib.h>
#define SIZE 5
int STACK[SIZE], TOP = -1;
void push(void);
void pop(void);
int length(void);
int isEmpty(void);
int isFull(void);
void display(void);
void peek(void);

int main()
{
    int ch, l = 0;
    while (1)
    {
        printf("\t\t\tStatic Stack all operations\n");
        printf("1. push\n");
        printf("2. pop\n");
        printf("3. peek\n");
        printf("4. traverse\n");
        printf("5. length\n");
        printf("6. exit\n");
        printf("Enter your choice: ");
        scanf("%d", &ch);
        switch (ch)
        {
        case 1:
            push();
            printf("Element inserterd sucessfully\n");
            break;

        case 2:
            pop();
            printf("Element popped\n sucessfully\n");
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
            break;
        }
    }
    return 0;
}

void push(void)
{
    if (isFull())
    {
        printf("Stack is full\n");
    }
    else
    {
        int item;
        printf("Enter data: ");
        scanf("%d", &item);
        TOP++;
        STACK[TOP] = item;
    }
}
void pop(void)
{
    if (isEmpty())
    {
        printf("Stack is empty\n");
    }
    else
    {
        int item = STACK[TOP];
        TOP--;
        printf("The deleted element is %d\n", item);
    }
}

void peek(void)
{
    if (isEmpty())
    {
        printf("Stack is empty\n");
    }
    else
    {
        int pik = STACK[TOP];
        printf("The peek/top element is %d\n", pik);
    }
}

int length(void)
{
    if (isEmpty())
    {
        printf("Stack is empty\n");
        return 0;
    }
    else
    {
        int count = 0;
        for (int i = TOP; i >= 0; i--)
        {
            count++;
        }
        return count;
    }
}
int isEmpty(void)
{
    if (TOP == -1)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
int isFull(void)
{
    if (TOP == SIZE - 1)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
void display(void)
{
    for (int i = TOP; i >= 0; i--)
    {
        printf("%d >---< ", STACK[i]);
    }
    printf("\n");
}
