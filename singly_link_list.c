// implemnentation of link list

#include <stdio.h>
#include <stdlib.h>
// creating the node
struct node
{
    int data;
    struct node *next;
};
int main()
{
    int choice;

    struct node *head = 0, *temp, *new_node; //initially the list is empty, the head is pointing to nothing means its having null value

    while (choice)
    {

        // creating a new node
        new_node = (struct node *)malloc(sizeof(struct node)); //here  a new empty node is created
        printf("Enter data for the node: ");
        scanf("%d", &new_node->data); //taking input
        new_node->next = 0;           //putting 0 to the address part of the node, means it is not pointing to any node

        // till now we have created a node and we have to insert the node in the list
        // firstly we have to check that the root is holding 0 , if root is having 0 means the list is empty then this newly created node will be the first node otherwise we have to make connections to insert this node at right place

        // we are taking temp to make the pointer, we have disturb rott variable, we will do our operations with the help of temp pointer

        if (head == 0)
        {
            head = temp = new_node; //the newly created node will be the first one
        }
        else
        {
            // making connections
            temp->next = new_node;
            temp = new_node;
        }
        printf("press 1 to continue and 0 to exit : ");
        scanf("%d", &choice);
    }

    // traversing the list
    temp = head; //here we are going to print the data of the list
    // making the temp to head means the temp is holding the address of the fisrt node
    printf("\n\nThe link list data is\n");
    while (temp != 0)
    {
        printf("%d--> ", temp->data);
        temp = temp->next;
    }

    return 0;
}
