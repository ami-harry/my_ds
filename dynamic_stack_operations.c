// dynamic stack operations
//
// there is no bound checking for overflow and underflow becuase of its flexible size

#include <stdio.h>
#include <stdlib.h>
// creating the node
struct node
{
    int data;
    struct node *next;
};
struct node *top = NULL;

void push(void);
void pop(void);
int length(void);
void display(void);
void peek(void);

int main()
{

    int ch, l = 0;
    while (1)
    {
        printf("\t\t\tDynamic Stack all operations\n");
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
            printf("Element popped sucessfully\n");
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
    
    struct node *newnode;
    newnode = (struct node *)malloc(sizeof(struct node));
    printf("Enter data: ");
    scanf("%d", &newnode->data);
    newnode->next = top;
    top = newnode;
}

void pop(void)
{
    struct node *temp = top;
    if (top == NULL)
    {
        printf("Underflow\n");
    }
    else
    {
        printf("The popped element is %d\n", temp->data);
        //removing the top element
        top = top->next; //from now the top will point to previous node
    }
}

int length(void)
{
    int i = 1;
    struct node *temp = top;
    if (top == NULL)
    {
        printf("Underflow\n");
        return 0;
    }
    else
    {
        while (temp->next != NULL)
        {
            i++;
            temp = temp->next;
        }
        return i;
    }
}

void display(void)
{
    struct node *temp = top;
    if (top == NULL)
    {
        printf("List is empty\n");
    }
    else
    {
        while (temp != NULL)
        {
            printf(" %d >--< ", temp->data);
            temp = temp->next;
        }
        printf("\n");
    }
}

void peek(void)
{
    struct node *temp = top;
    if (top == NULL)
    {
        printf("Underflow\n");
    }
    else
    {
        printf("The peek element is %d\n", &temp->data);
    }
}
