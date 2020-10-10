// array deletion of unsorted array

#include<stdio.h>
#include<stdlib.h>
int main()
{
    int arr[20], size, pos, del_item;
    printf("Enter the array size:   ");
    scanf("%d", &size);
    if (size<=0 || size>=20) {
        printf("Enter valid size\n");
        exit(0);
    }


    else {
        printf("Enter %d elements for the array \n", size);
        for (int i = 0; i < size; i++)
        {
            printf("Enter element for index no %d:  ", i);
            scanf("%d", &arr[i]);
        }
    }

    printf("The array elements are:\n");
    for (int i = 0; i < size; i++)
    {
        printf("At index no %d the elements is %d:  \n", i, arr[i]);
    }


    // asking the user for the position which he want to delete from the array
    printf("Enter the position you want to delete: ");
    scanf("%d", &pos);

    // deleting element
    if (pos<=0 || pos>size)
    {
        printf("Invalid position");
        exit(0);
    }
    else {
        del_item=arr[pos-1]; //storing the deleted item
        for (int i = pos-1; i < size-1; i++)
        {
            arr[i]=arr[i+1];
            size--;
        }
    }
    //printing the updated array
    for (int i = 0; i < size; i++)
    {
        printf("At index no %d the elements is %d:  \n", i, arr[i]);
    }

    // printing the deleted deleted item
    printf("The deleted element was %d\n", del_item);

    return 0;

}


