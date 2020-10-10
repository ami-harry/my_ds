// singly link list test

#include <stdio.h>
#include <stdlib.h>
struct node
{
    int data;
    struct node *ptr;
};
struct node *root = 0, *new_data, *temp;
int main()
{
    int ch;
    while (ch)
    {
        new_data = (struct node *)malloc(sizeof(struct node)); //created a new empty node
        printf("Enter data for the node: ");
        scanf("%d", &new_data->data);
        new_data->ptr = 0;

        // checking condition and inserting the data as right place in the link list
        if (root == 0)
        {
            root = temp = new_data; //means the new node will be firt becuase the list is empty
        }
        else
        {
            temp->ptr = new_data;
            temp = new_data;
        }
        printf("Enter any key to continue and 0 to exit: ");
        scanf("%d", &ch);
    }

    // printing the link list data
    temp = root;
    printf("The link list data is\n");
    while (temp != 0)
    {
        printf(" %d--> ", temp->data);
        temp = temp->ptr;
    }

    return 0;
}