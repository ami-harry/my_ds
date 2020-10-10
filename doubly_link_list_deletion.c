// doubly link list operations
// 1. insert at begin
// 2. insert at last
// 3. insert at pos
// 4. insert after pos
// 5. delete from start
// 6. delete from end
// 7. delete from pos
// 8. delete after pos
// 8. reverse
// 9. traverse
// 10. length
#include <stdio.h>
#include <stdlib.h>
void insert_at_begin(void);
void insert_at_last(void);
void insert_at_pos(void);
void insert_after_pos(void);
void delete_from_start(void);
void delete_from_end(void);
void delete_from_pos(void);
void delete_after_pos(void);
void reverse(void);
void traverse(void);
int length(void);
void head_tail_values(void);
void head_tail_address(void);

// creating the node
struct node
{
    struct node *left;
    int data;
    struct node *right;
} *head = 0, *tail = 0;
int main()
{
    int ch, l = 0;
    while (1)
    {
        printf("\t\t\t\tLink list operations\n");
        printf("1. insert_at_begin\n");
        printf("2. insert_at_last\n");
        printf("3. insert_at_pos\n");
        printf("4. insert_after_pos\n");
        printf("5. delete_from_start\n");
        printf("6. delete_from_end\n");
        printf("7. delete_from_pos\n");
        printf("8. delete_after_pos\n");
        printf("9. reverse\n");
        printf("10. traverse\n");
        printf("11. length\n");
        printf("12. exit\n");
        printf("Enter your choie: ");
        scanf("%d", &ch);
        switch (ch)
        {
        case 1:
            insert_at_begin();
            break;
        case 2:
            insert_at_last();
            break;
        case 3:
            insert_at_pos();
            break;
        case 4:
            insert_after_pos();
            break;
        case 5:
            delete_from_start();
            break;
        case 6:
            delete_from_end();
            break;
        case 7:
            delete_from_pos();
            break;
        case 8:
            delete_after_pos();
            break;
        case 9:
            reverse();
            break;
        case 10:
            traverse();
            break;
        case 11:
            l = length();
            printf("The length of the list is %d\n", l);
            break;
        case 12:
            exit(0);
            break;

            break;
        default:
            printf("Enter valid option\n");
            break;
        }
    }

    return 0;
}

void insert_at_begin(void)
{
    struct node *newnode;
    newnode = (struct node *)malloc(sizeof(struct node));
    printf("Enter node data: ");
    scanf("%d", &newnode->data);
    newnode->left = 0;
    newnode->right = 0;
    if (head == 0)
    {
        head = tail = newnode;
    }
    else
    {
        head->left = newnode;
        newnode->right = head;
        head = newnode;
    }
    printf("After insertion\n");
    head_tail_values();

    head_tail_address();
}

void insert_at_last(void)
{
    // if we are maintaing the tail pointer, the insertion will be O(1) becuase we didn't need to traverse the list, we will simply adjust with the tail pointer
    struct node *newnode;
    newnode = (struct node *)malloc(sizeof(struct node));
    printf("Enter node data: ");
    scanf("%d", &newnode->data);
    newnode->left = 0;
    newnode->right = 0;
    if (head == 0)
    {
        head = tail = newnode;
    }
    else
    {
        tail->right = newnode; //right connection
        newnode->left = tail;  //left connection
        tail = newnode;        //making the last node as tail
    }
    printf("Node inserted at last\n");
    printf("After insertion\n");
    head_tail_values();

    head_tail_address();
}

void insert_at_pos(void)
{
    int pos, len = length();
    printf("Enter position to insert at: ");
    scanf("%d", &pos);
    if (pos > len)
    {
        printf("Invalid position\n");
        printf("Currently list having %d nodes \n", len);
    }
    else
    {
        struct node *newnode;
        newnode = (struct node *)malloc(sizeof(struct node));
        printf("Enter node data: ");
        scanf("%d", &newnode->data);
        newnode->left = 0;
        newnode->right = 0;
        if (pos == 1)
        {
            insert_at_begin();
        }
        else
        {
            int i = 1;
            struct node *temp = head;
            while (i < pos - 1)
            {
                i++;
                temp = temp->right;
            }
            newnode->right = temp->right;
            newnode->left = temp;
            newnode->right->left = newnode;
            temp->right = newnode;
        }
    }
    printf("Node inserted at %d pos\n", pos);
    printf("After insertion\n");
    head_tail_values();

    head_tail_address();
}

void insert_after_pos(void)
{
    int pos, len = length();
    printf("Enter position to insert after: ");
    scanf("%d", &pos);
    if (pos > len)
    {
        printf("Invalid position\n");
        printf("Currently list having %d nodes \n", len);
    }
    else
    {
        struct node *newnode;
        newnode = (struct node *)malloc(sizeof(struct node));
        printf("Enter node data: ");
        scanf("%d", &newnode->data);
        newnode->left = 0;
        newnode->right = 0;
        if (pos == 1)
        {
            insert_at_begin();
        }
        else
        {
            int i = 1;
            struct node *temp = head;
            while (i < pos)
            {
                i++;
                temp = temp->right;
            }
            newnode->right = temp->right;
            newnode->left = temp;
            newnode->right->left = newnode;
            temp->right = newnode;
        }
    }
    printf("Node inserted after %d pos\n", pos);
    printf("After insertion\n");
    head_tail_values();
    head_tail_values();
}

void delete_from_start(void)
{
    if (head == 0)
    {
        printf("list is empty\n");
    }
    else
    {
        struct node *temp = head;
        temp->right->left = 0;
        head = temp->right;
        free(temp);
    }
    printf("After deletion from start\n");
    head_tail_values();
    head_tail_address();
}

void delete_from_end(void)
{
    if (head == 0)
    {
        printf("The list is empty\n");
    }
    else
    { //if we are maintaing tail ptr, then deletion from end will take O(1) time.,we will adjust only tail ptr
        struct node *temp = tail;
        // temp->left->right = temp->right; //mtlb 0
        // temp->left->right = tail->right //mtlb 0
        temp->left->right = 0; //mtlb 0
        tail = temp->left;
        temp->left = 0;
        free(0);
    }
    printf("Node deleted From last\n");
    head_tail_values();
    head_tail_address();
}

void delete_from_pos(void)
{
    int pos, len = length();
    printf("Enter position to delete from: ");
    scanf("%d", &pos);
    if (pos > len)
    {
        printf("Invalid position\n");
        printf("Currently the list having %d nodes\n", len);
    }
    else
    {
        if (pos == 1)
        {
            delete_from_start();
        }
        else
        {
            int i = 1;
            struct node *temp = head, *p;
            while (i < pos - 1)
            {
                i++;
                p = temp;
                temp = temp->right;
            }
            temp->right->left = p;
            temp->left->right = temp->right;
            // putting 0 in temp left and right, this is optional
            temp->left = 0;
            temp->right = 0;
            free(temp);
        }
    }
    printf("after Node deleted From %d pos\n", pos);
    head_tail_values();
    head_tail_address();
}

void delete_after_pos(void)
{
    int pos, len = length();
    printf("Enter position to delete from: ");
    scanf("%d", &pos);
    if (pos > len)
    {
        printf("Invalid position\n");
        printf("Currently the list having %d nodes\n", len);
    }
    else
    {
        if (pos == 1)
        {
            delete_from_start();
        }
        else
        {
            int i = 1;
            struct node *temp = head, *p;
            while (i < pos)
            {
                i++;
                p = temp;
                temp = temp->right;
            }
            temp->right->left = p;
            temp->left->right = temp->right;
            // putting 0 in temp left and right, this is optional
            temp->left = 0;
            temp->right = 0;
            free(temp);
        }
    }
    printf("after Node deleted after %d pos\n", pos);
    head_tail_values();
    head_tail_address();
}

void reverse(void)
{
    // if we are maintaing head and tail ptr, then reverse will be easier
    // we will not swap the nodes, we will just put the address of the previous node in the right block of node and address of next node in the left of the node
    if (head == 0)
    {
        printf("List is empty\n");
        printf("nothing to reverse\n");
    }
    else
    {
        struct node *temp = head, *p;
        while (temp != 0)
        {
            p = temp->right;
            //swpping the addresses
            temp->right = temp->left;
            temp->left = p;
            temp = p;
        }
        printf("before swapping the address of head left is %p  and  head right is %p and its value is %d\n", &head->left, &head->right, head->data);
        printf("before swapping the address of tail left is %p  and  tail right is %p and its value is %d\n", &tail->left, &tail->right, tail->data);
        // swapping the head and tail
        temp = head;
        head = tail;
        tail = temp;

        printf("after swapping the address of head left is %p  and  head right is %p and its value is %d\n", &head->left, &head->right, head->data);
        printf("after swapping the address of tail left is %p  and  tail right is %p and its value is %d\n", &tail->left, &tail->right, tail->data);
        printf("\n");
        traverse();
    }
}

void traverse(void)
{
    if (head == 0)
    {
        printf("List is empty\n");
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
        head_tail_values();
        head_tail_address();
    }
}

int length(void)
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
            temp = temp->right;
            i++;
        }
        return i;
    }
}

void head_tail_values(void)
{

    printf("Head value is %d\n", head->data);
    printf("\n");
    printf("tail value is %d\n", tail->data);
    printf("\n");
}

void head_tail_address(void)
{

    printf("Head->left address is %p\n", &head->left);
    printf("\n");
    printf("Head->right address is %p\n", &head->right);
    printf("\n");
    printf("tail->left address is %p\n", &tail->left);
    printf("\n");
    printf("tail->right address is %p\n", &tail->right);
    printf("\n");
}