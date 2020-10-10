// deleting the array from the last position

// simply we will delete the last element of the array

#include<stdio.h>
#include<stdlib.h>
int main()
{
    int arr[10], size, del_item;
    printf("Enter the size of the array\n");
    scanf("%d", &size);
    if (size>10 || size<=0) {
        printf("Enter valid size");
        exit(0);
    }
    else {

        printf("Enter array elements\n");
        for (int i = 0; i < size; i++)
        {
            printf("element for index no %d ", i);
            scanf("%d", &arr[i]);
        }

    }
    // printing the array element
    for (int i = 0; i < size; i++)
    {
        printf("At Index no  %d the element is %d\n", i, arr[i]);
    }

    // deleting the last element
    del_item=arr[size-1]; //storing the last element of the array
    size--;

    //printing the updated array
    printf("The update array is\n");
    for (int i = 0; i < size; i++)
    {
        printf("At Index no  %d the element is %d\n", i, arr[i]);
    }

    printf("The deleted item was %d\n", del_item);

    return 0;
}
