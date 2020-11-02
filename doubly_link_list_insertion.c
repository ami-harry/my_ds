#include <stdio.h>
#include <stdlib.h>

void Insert_at_Begin(void);
void Insert_at_Last(void);
void Insert_at_Pos(void);
void Insert_after_Pos(void);
void delete_from_start(void);
void delete_from_end(void);
void delete_from_pos(void);
void show(void);
int len(void);

struct node
{
    struct node *left;
    int data;
    struct node *right;
};

// here we will maintain a tail pointer also, that will hold the adderss of the last block, so that the insertion and deletion at last will take O(1) time complexity else O(n)

struct node *head, *tail;

int main()
{
    int ch, l = 0;
    // printf("\nAddress of head is %p\n", &head);
    // printf("\nAddress of tail is %p\n", &tail);
    while (1)
    {
        printf("\t\t\t\tDoubly Link list opeations\n");
        printf("1. Insert_at_Begin\n");
        printf("2. Insert_at_Last\n");
        printf("3. Insert_at_Pos\n");
        printf("4. Insert_after_Pos\n");
        printf("5. show\n");
        printf("6. len\n");
        printf("7. exit\n");
        printf("8. delete from start\n");
        printf("9. delete from end\n");
        printf("10. delete from pos\n");
        printf("Enter your choice: ");
        scanf("%d", &ch);
        switch (ch)
        {

        case 1:
            Insert_at_Begin();
            break;
        case 2:
            Insert_at_Last();
            break;
        case 3:
            Insert_at_Pos();
            break;
        case 4:
            Insert_after_Pos();
            break;
        case 5:
            show();
            break;
        case 6:
            l = len();
            printf("The length of the list is %d\n", l);
            break;
        case 7:
            // printf("\nAddress of head is %p", &head);
            // printf("\nAddress of tail is %p", &tail);
            exit(0);
            break;
        case 8:
            delete_from_start();
            break;
        case 9:
            delete_from_end();
            break;
        case 10:
            delete_from_pos();
            break;
        default:
            printf("invalid selection\n");
            break;
        }
    }

    return 0;
}

void show(void)
{
    if (head == 0)
    {
        printf("The list is empty\n");
    }
    else
    {
        struct node *temp = head;
        while (temp != 0)
        {
            printf("%d-->", temp->data);
            temp = temp->right;
        }
        printf("\n");
    }
    printf("\n");
    // printf("\nAddress of head is %p", &head);
    // printf("\nAddress of tail is %p", &tail);
}

int len(void)
{
    if (head == 0)
    {
        printf("The list is empty\n");
        return 0;
    }
    else
    {
        int i = 1;
        struct node *temp = head;
        while (temp->right != 0)
        {
            i++;
            temp = temp->right;
        }
        return i;
    }
}

void Insert_at_Begin(void)
{
    struct node *newnode;
    newnode = (struct node *)malloc(sizeof(struct node *));
    printf("Enter data: ");
    scanf("%d", &newnode->data);
    newnode->right = 0;
    newnode->left = 0;
    if (head == 0)
    {
        head = newnode;
    }
    else
    {
        newnode->right = head;
        head->left = newnode;
        head = newnode;
    }
    printf("Node inserted at start\n");
}

void Insert_at_Last(void)
{
    struct node *newnode;
    newnode = (struct node *)malloc(sizeof(struct node *));
    printf("Enter data: ");
    scanf("%d", &newnode->data);
    newnode->right = 0;
    newnode->left = 0;
    if (head == 0)
    {
        head = newnode;
    }
    else
    {
        // if we maintain tail pointer then to insert at end will take O(1) time complecity else O(n)
        struct node *temp = head;
        while (temp->right != 0)
        {
            temp = temp->right;
        }
        temp->right = newnode; //right connection
        newnode->left = temp;  //left connection
        temp = newnode;        //moving the temp
    }
    printf("Node inserted at last\n");
}

void Insert_at_Pos(void)
{
    int pos, length = len();
    printf("Enter position to insert at: ");
    scanf("%d", &pos);
    if (pos > length)
    {
        printf("Invalid position\n");
        printf("Currently list having %d nodes\n", length);
    }
    else
    {
        struct node *newnode;
        newnode = (struct node *)malloc(sizeof(struct node *));
        printf("Enter data: ");
        scanf("%d", &newnode->data);
        newnode->right = 0;
        newnode->left = 0;
        if (pos == 1)
        {
            head = newnode;
        }
        // to insert at pos, we will traverse the list till pos-1.
        else
        {
            struct node *temp = head;
            int i = 1;
            while (i < pos - 1)
            {
                i++;
                temp = temp->right;
            }
            newnode->right = temp->right;
            newnode->left = temp;
            temp->right = newnode;
            newnode->right->left = newnode;
        }
        printf("one node inserted at %d pos\n", pos);
    }
}

void Insert_after_Pos(void)
{
    // to insert after pos, we will traverse the list till pos.
    int pos, length = len();
    printf("Enter position to insert after: ");
    scanf("%d", &pos);
    if (pos > length)
    {
        printf("Invalid position\n");
        printf("Currently list having %d nodes\n", length);
    }
    else
    {
        struct node *newnode;
        newnode = (struct node *)malloc(sizeof(struct node *));
        printf("Enter data: ");
        scanf("%d", &newnode->data);
        newnode->right = 0;
        newnode->left = 0;
        if (pos == 1)
        {
            head = newnode;
        }
        else
        {
            struct node *temp = head;
            int i = 1;
            while (i < pos)
            {
                i++;
                temp = temp->right;
            }
            newnode->right = temp->right;
            newnode->left = temp;
            temp->right = newnode;
            newnode->right->left = newnode;
        }
        printf("One node inserted after %d pos\n", pos);
    }
}

void delete_from_start(void)
{
    struct node *temp = head;
    if (head == 0)
    {
        printf("List is empty\n");
    }
    else if (head->right == head)
    {
        head = tail = 0;
        free(temp);
    }
    else
    {
        head = head->right;
        head->left = tail;
        tail->right = head;
        free(temp);
    }
    printf("Node deleted from start\n");
}
void delete_from_end(void)
{
    struct node *temp = tail;
    if (head == 0)
    {
        printf("List is empty\n");
    }
    else if (head->right == head)
    {
        head = temp = 0;
        free(temp);
    }
    else
    {
        tail = tail->left;
        tail->right = head;
        head->left = tail;
        free(temp);
    }
    printf("Node deleted from end\n");
}
void delete_from_pos(void)
{
    struct node *temp = head;
    int pos, l = len();
    printf("Enter position: ");
    scanf("%d", &pos);
    if (pos < 1 || pos > l)
    {
        printf("Enter valid position\n");
    }
    else if (pos == 1)
    {
        delete_from_start();
    }
    else
    {
        int i = 1;
        while (i < pos)
        {
            temp = temp->right;
        }
        temp->left->right = temp->right;
        temp->right->left = temp->left;
        if (temp->right == head)
        {
            tail = temp->right;
            free(temp);
        }
        else
        {
            free(temp);
        }
        printf("Node deleted from %d pos\n", pos);
    }
}