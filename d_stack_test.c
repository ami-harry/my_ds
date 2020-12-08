// dynamic stack test all operations

#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *next;
};
struct node *TOP = NULL;
// operations
void push();
void pop();
void peek();
int length();
void display();

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

void push()
{
    struct node *newnode;
    newnode = (struct node *)malloc(sizeof(struct node));
    printf("Enter data: ");
    scanf("%d", &newnode->data);
    newnode->next = TOP;
    TOP = newnode;
}
